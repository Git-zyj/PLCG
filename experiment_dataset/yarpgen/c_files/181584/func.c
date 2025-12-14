/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181584
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_3 [i_2 - 1] [i_2 + 2] [i_2 - 2]), (arr_3 [i_2 + 1] [i_2 + 2] [i_2 + 1])))) ? (((((/* implicit */_Bool) arr_5 [i_2 - 1] [i_2 - 1] [i_2 - 1])) ? (arr_3 [i_2 - 2] [i_2 + 2] [i_2 + 2]) : (((/* implicit */int) (unsigned char)238)))) : (((((/* implicit */_Bool) arr_3 [i_2 + 2] [i_2 - 1] [i_2 - 2])) ? (((/* implicit */int) var_8)) : (arr_3 [i_2 - 1] [i_2 + 1] [i_2 + 2])))));
                    arr_9 [3ULL] [i_1] [i_1] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_1] [i_2])) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (max((arr_6 [i_1]), (((/* implicit */unsigned long long int) var_15))))));
                    var_16 *= ((/* implicit */short) ((unsigned long long int) max((arr_5 [i_2 - 2] [i_2 + 2] [i_2 + 1]), (var_0))));
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned short) (+(max(((((-2147483647 - 1)) / (arr_2 [i_0] [i_0]))), (((/* implicit */int) var_10))))));
        /* LoopNest 2 */
        for (unsigned int i_3 = 2; i_3 < 13; i_3 += 3) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 2) 
            {
                {
                    arr_14 [i_3] [i_3] [i_3] = min((((((/* implicit */_Bool) var_1)) ? (min((var_13), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_3] [i_4])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3 - 1]))))), (((/* implicit */unsigned long long int) 2147483647)));
                    var_18 ^= ((/* implicit */unsigned int) arr_2 [i_0] [(signed char)13]);
                    arr_15 [i_0] [i_3] [i_3] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_2 [i_0] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_14)) != (var_11))))) : (((((/* implicit */_Bool) arr_10 [i_0] [i_0])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(2147483647)))) ? (((((/* implicit */_Bool) arr_4 [(signed char)2] [i_4])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7)))) : (((var_11) + (((/* implicit */int) var_0)))))))));
                    arr_16 [i_3] [i_4] [i_3 - 2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((var_6) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_4]))))) - (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)11011)), (arr_2 [6U] [i_0]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) var_8)), (arr_3 [7U] [i_3] [i_4])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_0] [i_3] [i_4])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_5))))) : (max((arr_12 [(short)2] [0] [i_4] [i_4]), (((/* implicit */unsigned int) (signed char)114))))))) : (((((/* implicit */_Bool) ((2147483644) - (var_11)))) ? (((arr_10 [(short)6] [i_4]) - (arr_6 [(signed char)9]))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) var_3)) : (arr_10 [i_3 - 1] [i_3 - 1])))))));
                    arr_17 [i_0] [i_0] [i_4] [i_3] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_12 [i_0] [i_3 + 2] [i_4] [i_4])) - (var_4)));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_5 = 1; i_5 < 19; i_5 += 2) 
    {
        arr_22 [i_5 + 4] [i_5] = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_19 [i_5 + 1])) + (16744251411195420448ULL)));
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) - (var_1)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_18 [i_5 + 2])))) : ((+(((/* implicit */int) var_5))))));
    }
    for (unsigned int i_6 = 0; i_6 < 12; i_6 += 2) 
    {
        var_20 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((arr_6 [i_6]) << (((((/* implicit */int) arr_25 [i_6])) + (92)))))) ? (arr_13 [i_6] [i_6] [i_6]) : (((((/* implicit */_Bool) arr_21 [18ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_6))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) min(((unsigned short)11011), (var_0)))))))));
        arr_27 [i_6] = ((/* implicit */signed char) arr_0 [i_6]);
    }
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? ((+(((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_12))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-91))))) ? (var_4) : (min((((/* implicit */unsigned long long int) var_10)), (var_6)))))));
    var_22 = var_6;
}
