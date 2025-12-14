/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167042
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
    var_16 = ((/* implicit */int) 2LL);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 2; i_2 < 16; i_2 += 4) 
                {
                    var_17 = ((/* implicit */int) max((((/* implicit */long long int) ((unsigned char) 5ULL))), ((((!(((/* implicit */_Bool) (unsigned char)38)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 284837934)))))) : (max((2LL), (((/* implicit */long long int) (short)-23179))))))));
                    arr_8 [i_2 - 1] [i_2] [i_0] [i_0] = ((/* implicit */signed char) max((((((/* implicit */_Bool) 3LL)) ? (((/* implicit */unsigned long long int) 284837934)) : (6855048783957933893ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) != (((/* implicit */int) arr_1 [i_0])))))));
                }
                for (short i_3 = 0; i_3 < 17; i_3 += 1) 
                {
                    arr_12 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_4 [i_0]))));
                    var_18 = ((signed char) arr_3 [i_3]);
                    /* LoopSeq 1 */
                    for (int i_4 = 4; i_4 < 15; i_4 += 3) 
                    {
                        arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) -3LL));
                        /* LoopSeq 1 */
                        for (int i_5 = 0; i_5 < 17; i_5 += 1) 
                        {
                            arr_18 [i_0] [i_1] [i_3] [i_4 - 1] [i_5] = ((/* implicit */unsigned char) max((((/* implicit */int) var_14)), (((int) (short)0))));
                            var_19 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) ((signed char) var_7)))))));
                            var_20 = ((((long long int) 16LL)) / (min((((/* implicit */long long int) max((var_8), (((/* implicit */unsigned int) (short)-22894))))), (((var_12) / (((/* implicit */long long int) var_5)))))));
                        }
                        var_21 -= ((/* implicit */int) (!((!(((/* implicit */_Bool) 17785232087891091568ULL))))));
                    }
                    /* LoopSeq 3 */
                    for (short i_6 = 0; i_6 < 17; i_6 += 4) 
                    {
                        arr_22 [i_6] [i_3] [i_1 - 2] [i_0] = min((var_4), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)11))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-65)))))))));
                        var_22 = ((/* implicit */unsigned char) (!(var_3)));
                        arr_23 [i_6] [i_3] [i_1 + 2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */short) (!(((/* implicit */_Bool) 6970167827749124312LL))))), (((short) 17938757577225999909ULL)))))));
                        var_23 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (signed char)82)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) 661511985818460065ULL))))) : (((/* implicit */int) var_2))));
                    }
                    /* vectorizable */
                    for (short i_7 = 2; i_7 < 15; i_7 += 4) 
                    {
                        arr_27 [i_0] [i_1 + 3] [i_1 - 3] [i_1] [i_3] [i_7 - 1] &= ((/* implicit */unsigned char) ((_Bool) (short)3));
                        arr_28 [i_0] [i_0] [i_0] [i_3] [i_7 + 2] [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)40216))));
                        arr_29 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((arr_16 [i_0] [i_7] [i_1 - 1] [i_7 + 2] [i_7 + 2] [i_7 - 1] [i_7 + 1]) + (2147483647))) << (((((arr_16 [i_0] [i_1 - 2] [i_1 - 3] [i_7] [i_7 - 2] [i_0] [i_1]) + (139274839))) - (3)))));
                        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_6 [i_7 + 2] [i_7 + 2] [i_1 + 2])) + (var_0)));
                    }
                    for (short i_8 = 1; i_8 < 14; i_8 += 4) 
                    {
                        arr_32 [i_3] [i_1] = ((/* implicit */long long int) min((max((min((18446744073709551614ULL), (((/* implicit */unsigned long long int) arr_20 [i_3] [i_1] [i_3] [i_8 + 1])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (2953679673U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0])))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_1 + 3] [i_1 + 3] [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (arr_24 [i_0] [i_1 - 2] [i_3]))))));
                        var_25 -= ((/* implicit */unsigned long long int) arr_11 [i_1 + 2]);
                        arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -284837936))));
                        arr_34 [i_8] [i_1 - 1] [i_3] = ((int) min((((/* implicit */short) (_Bool)1)), ((short)29012)));
                        var_26 = ((/* implicit */int) max((((unsigned long long int) 4570175924078886935ULL)), (((/* implicit */unsigned long long int) arr_4 [i_1 - 3]))));
                    }
                }
                arr_35 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) (signed char)82)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_0] [i_1 - 1])) || (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)78))) >= (4294967279U))))))) : (min((max((2LL), (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)166))))))));
            }
        } 
    } 
}
