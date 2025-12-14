/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17751
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 4; i_0 < 19; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_15 = ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)90)), (-1154971146)))) ? (((var_12) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0 - 1] [i_0])) : (((/* implicit */int) var_3)))) : (((/* implicit */int) (unsigned char)87)));
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        var_16 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_3 [i_0 + 2] [i_0 - 4] [i_0 - 1])) ? (((/* implicit */int) arr_3 [i_0 - 3] [i_0 - 2] [i_0 + 1])) : (((/* implicit */int) var_3)))) - (((((/* implicit */int) (unsigned short)0)) + (((/* implicit */int) (unsigned short)5642))))));
                        /* LoopSeq 3 */
                        for (short i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            var_17 = ((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)0)) || (((/* implicit */_Bool) 903206015U))))), (min((1154971145), (((/* implicit */int) arr_1 [i_0 + 2]))))));
                            var_18 = ((/* implicit */signed char) arr_9 [i_4] [i_3] [i_0] [i_2] [i_0] [i_0]);
                            var_19 = ((/* implicit */_Bool) ((799690246U) % (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
                            var_20 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_5 [i_0] [i_0 + 1] [i_0 - 4] [i_0 - 2])) ? (((/* implicit */int) arr_5 [i_0] [i_0 - 2] [i_0 - 2] [i_0 + 1])) : (((/* implicit */int) var_3))))));
                            arr_10 [i_2] [i_1] [i_1] [i_3] = ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_4 [i_0 - 3])) ^ (((/* implicit */int) (unsigned char)255))))));
                        }
                        for (unsigned char i_5 = 2; i_5 < 20; i_5 += 4) 
                        {
                            arr_13 [i_0] [i_1] [(unsigned char)18] [i_0] [i_2] = ((/* implicit */_Bool) min(((-(799690242U))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)90))) - (var_11)))));
                            arr_14 [i_2] [i_1] [i_2] [i_3] [i_5] = ((/* implicit */signed char) (((+(((((/* implicit */_Bool) (signed char)35)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned char)90)))))) < (max((((/* implicit */int) arr_5 [i_5] [i_5 - 1] [(unsigned char)19] [i_5 + 1])), ((+(((/* implicit */int) (short)6384))))))));
                            var_21 = ((/* implicit */unsigned char) var_8);
                            var_22 -= ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_3)) ? (arr_12 [i_0 - 1] [i_0 - 1] [i_5]) : (arr_12 [i_1] [i_1] [i_2]))), (min((arr_12 [i_2] [i_3] [i_5 - 2]), (((/* implicit */unsigned int) (unsigned char)255))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_6 = 0; i_6 < 21; i_6 += 2) 
                        {
                            var_23 *= arr_11 [i_0] [i_0] [i_0] [i_0] [i_6];
                            arr_17 [i_0] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)221)) <= (((/* implicit */int) (unsigned char)31))));
                            var_24 = ((/* implicit */unsigned char) var_0);
                            var_25 -= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)67))));
                            arr_18 [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) && (((/* implicit */_Bool) (unsigned char)248))));
                        }
                    }
                    var_26 = ((/* implicit */unsigned short) min((var_26), ((unsigned short)20335)));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned short) -1154971144);
}
