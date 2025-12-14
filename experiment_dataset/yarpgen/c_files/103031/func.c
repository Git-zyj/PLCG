/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103031
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    var_10 = var_0;
                    var_11 = ((/* implicit */_Bool) max((((/* implicit */int) ((short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5)))))), (((((/* implicit */_Bool) 2056998838)) ? ((-(((/* implicit */int) var_0)))) : (((/* implicit */int) ((short) var_5)))))));
                    var_12 = (+((+(arr_4 [i_0 - 1] [i_0 + 1]))));
                }
                for (long long int i_3 = 2; i_3 < 24; i_3 += 2) 
                {
                    arr_10 [i_0 - 1] = ((/* implicit */int) (!(((/* implicit */_Bool) 2036829726))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_4 = 0; i_4 < 25; i_4 += 4) 
                    {
                        var_13 = ((/* implicit */_Bool) arr_12 [i_0 - 1] [i_1 + 1] [i_3 - 2] [i_4] [i_4] [i_4]);
                        arr_13 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 + 1] = (~(((/* implicit */int) var_3)));
                        var_14 = ((/* implicit */long long int) (-((+(((/* implicit */int) var_9))))));
                        var_15 = (!(((/* implicit */_Bool) arr_6 [i_0 - 1] [i_1 + 1] [i_3 - 1] [i_4])));
                        var_16 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (1079251459) : (2056998838)));
                    }
                    for (long long int i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        arr_18 [i_0 + 1] [i_0 + 1] [i_1 + 1] [i_3 - 1] [i_5] = ((/* implicit */_Bool) var_5);
                        var_17 = ((/* implicit */unsigned long long int) min((((((/* implicit */int) (short)30864)) * (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)30872))))));
                        arr_19 [i_0 - 1] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_0 - 1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0 + 1] [i_1 + 1] [i_5] [i_0 - 1] [i_3 - 2] [i_1 + 1]))) : (3218579832U)))));
                    }
                }
                /* LoopSeq 1 */
                for (int i_6 = 0; i_6 < 25; i_6 += 4) 
                {
                    var_18 = ((/* implicit */signed char) ((((/* implicit */int) var_5)) & (min((((int) var_4)), (((/* implicit */int) min((var_7), (((/* implicit */unsigned short) (_Bool)1)))))))));
                    arr_22 [i_6] [i_1 + 1] [i_0 - 1] [i_0 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(6166738646035194415ULL)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((/* implicit */unsigned short) (short)30847)), (var_2))))))) : (arr_21 [i_0 + 1] [i_1 + 1])));
                    var_19 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) arr_17 [i_1 + 1] [i_0 + 1] [i_6] [i_6])) ? (((/* implicit */long long int) arr_20 [i_1 + 1] [i_0 + 1] [i_6])) : (arr_17 [i_1 + 1] [i_0 + 1] [i_6] [i_1 - 2]))));
                    var_20 = ((/* implicit */_Bool) arr_4 [i_6] [i_1 - 2]);
                }
                var_21 = ((/* implicit */unsigned short) (signed char)0);
            }
        } 
    } 
    var_22 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) min((((/* implicit */int) var_4)), (740981836))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7))));
}
