/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161074
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
    var_18 = max((((/* implicit */unsigned long long int) ((unsigned short) min((((/* implicit */unsigned int) var_15)), (var_2))))), (max((0ULL), (((/* implicit */unsigned long long int) (unsigned short)51252)))));
    var_19 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((4294967290U), (((/* implicit */unsigned int) 2147483647))))))))) + (var_9)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 17; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((arr_2 [i_2 - 1]), (arr_2 [i_2 + 1])))))))));
                    var_21 = ((/* implicit */unsigned short) arr_8 [i_2] [11U] [i_2]);
                    arr_9 [i_2] [i_2] [i_0] = ((/* implicit */int) ((((1822932727U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51233))))) ? (max((((((/* implicit */_Bool) var_2)) ? (var_11) : (((/* implicit */long long int) arr_7 [i_2] [i_2] [i_1] [i_2])))), (((/* implicit */long long int) var_17)))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                    var_22 = ((/* implicit */signed char) arr_1 [i_1 - 1] [i_2 - 2]);
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) min((var_8), (((/* implicit */unsigned int) var_10)))))));
                        var_24 = ((/* implicit */short) ((((arr_7 [i_2] [i_2] [i_2] [i_1 - 1]) > (arr_7 [i_2] [i_1] [i_2] [i_3]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_10 [i_1 - 1] [i_1] [i_2] [i_0] [i_2] [i_2 - 1]), (arr_10 [i_1 - 2] [i_2] [i_2] [i_3] [i_1 - 2] [i_2 + 1]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) - (18446744073709551615ULL)))));
                        arr_12 [i_0] [i_0] [i_2] [i_2] |= ((/* implicit */signed char) arr_8 [i_3] [i_1 - 2] [i_0]);
                    }
                    for (int i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_10 [i_2] [i_2] [i_2] [i_2 - 2] [i_2] [i_2 - 2]), (arr_10 [i_1] [i_2] [i_2] [(unsigned char)6] [i_2] [i_2 - 1]))))) & (arr_7 [i_2] [i_1] [(unsigned short)11] [i_4])));
                        /* LoopSeq 1 */
                        for (long long int i_5 = 0; i_5 < 18; i_5 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned short) min((max((((arr_15 [i_0] [i_1 + 1] [i_2] [i_0] [i_0] [i_1 + 1] [i_4]) ? (arr_1 [i_0] [i_0]) : (arr_8 [i_2] [i_2] [i_2]))), (((/* implicit */unsigned int) arr_6 [i_0] [i_2] [i_2])))), (((/* implicit */unsigned int) ((min((((/* implicit */unsigned int) arr_10 [i_0] [i_1 + 1] [i_2] [i_2] [i_4] [i_4])), (arr_5 [i_0]))) != (((((/* implicit */_Bool) arr_5 [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (arr_14 [i_2]))))))));
                            var_27 -= ((/* implicit */long long int) ((_Bool) min((18446744073709551600ULL), (((/* implicit */unsigned long long int) 3464296738400007902LL)))));
                            arr_17 [i_2] [i_1 - 2] = ((/* implicit */unsigned short) ((min((arr_11 [i_0] [i_2 + 1] [i_2] [i_0]), (((/* implicit */long long int) ((arr_13 [i_5] [i_2] [i_2] [i_1]) ? (arr_7 [i_2] [i_1] [i_2] [i_4]) : (arr_7 [i_2] [i_1] [i_2 - 1] [i_4])))))) & (((/* implicit */long long int) arr_7 [i_2] [i_1] [i_1] [i_4]))));
                            arr_18 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */_Bool) ((max((((14U) >> (((262144) - (262128))))), (var_8))) / (max((((/* implicit */unsigned int) var_13)), (arr_8 [i_2] [i_2] [i_2])))));
                        }
                        arr_19 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) (!(((/* implicit */_Bool) arr_11 [14ULL] [i_1 - 2] [9LL] [i_2 - 2])))));
                        arr_20 [i_0] [i_1 + 1] [i_2] = (+(((/* implicit */int) ((arr_15 [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_4] [(unsigned short)3] [i_1] [i_2 + 1]) && (((/* implicit */_Bool) arr_10 [i_1 - 1] [i_1 - 2] [i_2] [i_1 + 1] [i_1 + 1] [i_1 + 1]))))));
                    }
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) max((((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (var_8))), (((/* implicit */unsigned int) ((2472034568U) <= (1822932703U)))))))));
}
