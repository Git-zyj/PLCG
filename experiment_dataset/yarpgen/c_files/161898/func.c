/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161898
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
    var_19 += ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */long long int) min((((/* implicit */signed char) var_1)), (var_14)))), (var_3))))));
    var_20 -= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_1) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_3)))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_13))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) arr_3 [(unsigned char)0] [i_0 + 1]);
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) + (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) arr_1 [i_0]))));
        var_22 = arr_0 [i_0 + 1];
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            arr_8 [i_0] [i_1 + 1] [i_1 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_17)) ? (((((/* implicit */_Bool) arr_7 [i_1])) ? (var_11) : (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_2 [i_0] [i_0])))))));
            var_23 = var_13;
        }
    }
    for (unsigned int i_2 = 3; i_2 < 16; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 17; i_3 += 3) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_24 = ((/* implicit */short) ((min((((long long int) arr_7 [i_3])), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_4] [i_3])) ? (((/* implicit */int) arr_3 [i_2 - 1] [i_2])) : (((/* implicit */int) arr_1 [i_3]))))))) | (((/* implicit */long long int) ((/* implicit */int) min((arr_0 [i_2 - 2]), (arr_0 [i_2 - 2])))))));
                    var_25 = ((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_3])) & (((/* implicit */int) ((unsigned char) var_10)))));
                    var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) var_5))));
                    var_27 ^= ((/* implicit */unsigned long long int) ((short) ((_Bool) arr_17 [i_3] [i_3] [i_2])));
                }
            } 
        } 
        var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_14 [(unsigned char)2]) ? (((/* implicit */int) arr_14 [4U])) : (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) var_10)) : ((+(((/* implicit */int) arr_6 [i_2])))))) : ((-(((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) arr_3 [i_2] [i_2])) : (((/* implicit */int) var_9)))))))))));
        arr_20 [i_2] = ((/* implicit */_Bool) max(((-(((/* implicit */int) var_7)))), (((/* implicit */int) var_0))));
    }
    for (unsigned char i_5 = 4; i_5 < 13; i_5 += 3) 
    {
        var_29 -= ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_12 [10ULL])))) >> (((/* implicit */int) ((((/* implicit */int) arr_9 [i_5 + 2])) < (((/* implicit */int) arr_9 [i_5 + 2])))))));
        var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) min((min((arr_7 [i_5 + 2]), (arr_7 [i_5 + 1]))), (((((/* implicit */_Bool) arr_7 [i_5 - 3])) ? (arr_7 [i_5 + 2]) : (arr_7 [i_5 - 1]))))))));
        arr_24 [i_5] = ((((/* implicit */_Bool) arr_2 [i_5] [i_5])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned short) var_1))))) ? (((((/* implicit */_Bool) arr_9 [0LL])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_19 [i_5]))) : (var_18)))) : ((-((~(arr_10 [12LL]))))));
    }
    var_31 = ((/* implicit */long long int) var_1);
}
