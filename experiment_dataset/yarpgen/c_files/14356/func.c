/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14356
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
    var_20 = ((((var_10) + (2147483647))) << (((var_0) - (1230274061U))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            arr_13 [i_0] [i_1] [i_2] [i_4] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) 739373231U)) == (arr_4 [i_0 + 2] [i_0 + 2])));
                            var_21 = ((2975879524U) - (((/* implicit */unsigned int) arr_10 [i_0 - 1] [i_0 + 1] [i_4 - 1])));
                        }
                        /* vectorizable */
                        for (int i_5 = 4; i_5 < 13; i_5 += 4) 
                        {
                            var_22 = ((/* implicit */int) ((unsigned short) (short)-1));
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) var_18)) - (var_1)));
                        }
                        var_24 = ((/* implicit */long long int) max(((~(-2018420161))), (((arr_10 [4LL] [i_0 - 1] [i_1 - 1]) * (((/* implicit */int) (_Bool)1))))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 14; i_6 += 1) 
                    {
                        var_25 += ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4218542241U)) ? (((/* implicit */int) arr_3 [i_1 + 2] [i_1 - 2] [i_2])) : (arr_0 [i_0 - 1] [i_0 - 1]))))));
                        var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) arr_9 [i_1 - 1] [i_6] [i_0] [i_0 + 1] [i_0]))));
                    }
                    for (unsigned int i_7 = 0; i_7 < 14; i_7 += 4) 
                    {
                        arr_22 [i_0] [i_1] [i_1] [i_2] [i_2] [i_7] = ((/* implicit */signed char) max((((/* implicit */long long int) 4294967295U)), (((long long int) ((((/* implicit */_Bool) 4494803534348288LL)) ? (2147483647) : (((/* implicit */int) var_8)))))));
                        var_27 = ((/* implicit */int) (((-(4074295402U))) > (((/* implicit */unsigned int) max((((/* implicit */int) arr_21 [12])), (0))))));
                        arr_23 [i_2] [4U] [i_7] [i_7] [10] [(short)3] = ((/* implicit */short) arr_12 [i_0] [i_0 + 1] [10LL] [i_0 - 1] [10LL] [i_0 - 1] [i_0 + 2]);
                    }
                    var_28 = ((/* implicit */unsigned long long int) min((var_28), ((-(max((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) (short)30421)) ? (18446744073709551603ULL) : (((/* implicit */unsigned long long int) var_7))))))))));
                    var_29 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) max((var_11), (((/* implicit */int) arr_17 [i_2] [i_2] [i_1] [i_0]))))) ? (max((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), (1156995819617606439ULL))) : (max((((/* implicit */unsigned long long int) -1)), (18446744073709551605ULL))))), (((/* implicit */unsigned long long int) (-(min((((/* implicit */unsigned int) arr_0 [i_0] [i_0])), (3398244836U))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 14; i_8 += 4) 
                    {
                        for (long long int i_9 = 2; i_9 < 12; i_9 += 3) 
                        {
                            {
                                arr_31 [i_9] [i_0] [i_9] [i_2] [i_9] [i_0] [i_0] = (~(var_18));
                                var_30 = ((/* implicit */unsigned int) max((arr_12 [i_9 - 2] [12U] [i_9 - 1] [i_9 + 1] [i_9 - 2] [i_9 + 2] [i_9 - 1]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 8865923996418084181ULL)))))));
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */short) ((1346967689147838498LL) < (((/* implicit */long long int) (-(((/* implicit */int) (short)32767)))))));
                }
            } 
        } 
    } 
    var_32 = var_14;
}
