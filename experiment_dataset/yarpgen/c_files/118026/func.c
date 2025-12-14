/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118026
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_13 = (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)27472)) && (((/* implicit */_Bool) (-2147483647 - 1)))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 4; i_0 < 19; i_0 += 1) 
    {
        var_14 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)6118))) ? (arr_1 [i_0]) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [15] [15]))) : (var_9)))) * (arr_1 [i_0 - 4])))));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned long long int) (-(arr_1 [15]))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 17; i_1 += 1) 
    {
        var_15 = ((/* implicit */short) ((((((/* implicit */int) ((var_9) != (var_7)))) >= (((((/* implicit */_Bool) arr_4 [i_1] [(signed char)12])) ? (((/* implicit */int) arr_0 [6] [6])) : (((/* implicit */int) var_6)))))) ? (((/* implicit */int) arr_3 [1])) : ((+(((/* implicit */int) ((((/* implicit */_Bool) -1266179863)) && (((/* implicit */_Bool) var_12)))))))));
        arr_5 [(signed char)17] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) ((arr_0 [3ULL] [i_1]) ? (-1) : (((/* implicit */int) arr_0 [i_1] [i_1]))))) ? (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) var_12)))));
        arr_6 [(unsigned char)17] [(unsigned char)17] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1 + 1])) ? (arr_1 [i_1 + 2]) : (arr_1 [i_1 + 3])))) ? (((((/* implicit */_Bool) arr_1 [i_1 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_1 [i_1 + 2]))) : ((-(arr_1 [i_1 - 2]))));
        /* LoopNest 3 */
        for (signed char i_2 = 2; i_2 < 20; i_2 += 2) 
        {
            for (short i_3 = 0; i_3 < 21; i_3 += 1) 
            {
                for (unsigned short i_4 = 1; i_4 < 19; i_4 += 4) 
                {
                    {
                        arr_15 [13ULL] [13ULL] [13ULL] [13ULL] = max((((/* implicit */int) var_4)), ((~(((((/* implicit */int) var_12)) ^ (((/* implicit */int) (unsigned char)255)))))));
                        var_16 = ((/* implicit */unsigned int) arr_10 [20ULL] [(unsigned char)1] [(unsigned char)1] [i_4]);
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) ((-1266179895) <= (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_0 [8U] [i_1])) : (var_5)))))) & (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_1] [12] [i_1 - 2])) || (((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_1 - 2])))))));
    }
    for (signed char i_5 = 4; i_5 < 7; i_5 += 1) 
    {
        arr_18 [i_5] = ((/* implicit */unsigned short) (+(((arr_0 [i_5] [i_5 + 4]) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_5 - 4] [(unsigned char)14]))) : (1207407447313448312LL)))));
        var_18 |= ((/* implicit */unsigned long long int) arr_0 [i_5] [i_5]);
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_5] [i_5])) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-126))) : (var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))));
        arr_19 [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((-1045271686582035488LL) + (((/* implicit */long long int) -1266179865))))) ? (max((2147483636), (((/* implicit */int) var_6)))) : (((/* implicit */int) arr_16 [i_5] [(unsigned char)8]))));
    }
    var_20 -= (!((!(((/* implicit */_Bool) (-2147483647 - 1))))));
    var_21 = ((/* implicit */unsigned char) max((((((/* implicit */long long int) ((/* implicit */int) var_2))) - (var_9))), (((/* implicit */long long int) var_0))));
}
