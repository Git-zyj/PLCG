/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163902
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 2; i_2 < 17; i_2 += 4) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 3; i_3 < 19; i_3 += 4) 
                    {
                        var_11 = ((/* implicit */unsigned short) max((max((arr_6 [i_3 - 2] [i_2 - 1] [i_2]), (0ULL))), (((/* implicit */unsigned long long int) max((arr_5 [i_3 - 1] [i_2 + 4] [12U]), (arr_5 [i_3 - 2] [i_2 + 4] [i_2]))))));
                        arr_9 [i_3] [(signed char)17] [(_Bool)1] [i_1] [i_3] = ((/* implicit */signed char) (~((~(((/* implicit */int) arr_8 [i_2 + 1] [i_2 - 1] [i_3] [i_3 - 1]))))));
                        var_12 -= ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)198))));
                        var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((unsigned short) var_3)))));
                        var_14 = ((/* implicit */short) max(((+(((/* implicit */int) (unsigned short)1)))), (((/* implicit */int) arr_2 [i_0] [i_0]))));
                    }
                    arr_10 [i_0] [i_1] [i_2 + 1] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_2 + 1])), (arr_6 [i_0] [i_1] [i_2 - 2])));
                    /* LoopSeq 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_15 = ((/* implicit */signed char) arr_0 [i_0] [i_0]);
                        arr_13 [i_4] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) var_0);
                        var_16 = ((unsigned int) (signed char)64);
                        arr_14 [i_0] [i_0] [i_2] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) <= (max((var_5), (((/* implicit */long long int) max((var_9), (((/* implicit */short) var_7)))))))));
                    }
                    /* vectorizable */
                    for (short i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        arr_19 [(_Bool)1] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_2))));
                        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) 18446744073709551605ULL))));
                        arr_20 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_2 + 4] [i_2 + 4] [i_2 + 4] [i_2 - 1] [i_2 - 2])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_15 [i_2 - 1] [i_2 - 1] [i_2 + 2] [i_2 + 2] [i_2 - 2]))));
                    }
                }
                for (int i_6 = 0; i_6 < 21; i_6 += 1) 
                {
                    arr_23 [14LL] [i_6] [i_6] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((unsigned char) 1126980578))), (((unsigned long long int) arr_5 [(short)10] [i_1] [(short)10]))));
                    arr_24 [i_0] [(unsigned short)4] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) -1796379874351898855LL)) || (((/* implicit */_Bool) (short)-1))));
                    arr_25 [(signed char)13] [(signed char)13] [(signed char)13] [i_6] = ((/* implicit */unsigned int) (-(((int) 18446744073709551605ULL))));
                    arr_26 [(signed char)12] = ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_0]))) * (18446744073709551609ULL))), (((/* implicit */unsigned long long int) max((arr_1 [i_0]), (arr_1 [i_0]))))));
                }
                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((((/* implicit */_Bool) 3971472687U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-21717))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (1796379874351898855LL))))) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                arr_27 [(unsigned char)6] [(unsigned char)6] [(unsigned char)6] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)120)) && (((/* implicit */_Bool) var_8)))))) >= (10ULL))))));
                var_19 = ((/* implicit */unsigned int) var_7);
            }
        } 
    } 
    var_20 -= ((/* implicit */unsigned int) var_5);
    var_21 *= ((/* implicit */signed char) ((unsigned short) var_0));
    var_22 = ((/* implicit */unsigned char) ((int) max(((unsigned short)1), (((/* implicit */unsigned short) (short)-13650)))));
}
