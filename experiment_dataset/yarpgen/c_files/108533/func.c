/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108533
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
    var_19 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-9259)) || ((_Bool)1)));
    var_20 = ((/* implicit */_Bool) ((((/* implicit */int) var_15)) >> (((((/* implicit */_Bool) ((signed char) var_7))) ? (((/* implicit */int) max((var_14), (var_8)))) : (((var_16) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_14))))))));
    var_21 &= ((/* implicit */unsigned long long int) max((((/* implicit */int) var_5)), (((((/* implicit */int) (short)9259)) + (((/* implicit */int) ((short) var_8)))))));
    var_22 = ((/* implicit */unsigned int) var_17);
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) arr_2 [i_0 - 2] [i_1]))));
                    var_24 = var_12;
                    var_25 &= ((/* implicit */unsigned long long int) arr_4 [i_0 - 2] [i_1 + 1] [(_Bool)1]);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)9276)) ? (((/* implicit */int) (short)-9259)) : (((/* implicit */int) var_1))));
                        arr_12 [i_0] [i_2] = ((/* implicit */_Bool) var_13);
                        var_27 = ((/* implicit */short) ((arr_11 [i_0 + 1] [i_1 + 1] [i_2] [i_2]) | (arr_6 [i_0 - 1] [(unsigned short)5] [(unsigned short)5] [i_0])));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_17 [i_0] = ((/* implicit */_Bool) ((arr_0 [i_0]) + (((arr_2 [i_1] [i_4]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_1 - 2] [i_1 + 1] [i_0 - 3] [i_0 - 1] [i_0 - 1] [i_0 - 3])))))));
                        var_28 = ((/* implicit */_Bool) min((var_28), (var_14)));
                    }
                }
                arr_18 [i_0] = ((/* implicit */unsigned short) arr_1 [i_0]);
                /* LoopNest 3 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (short i_6 = 1; i_6 < 18; i_6 += 1) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_26 [i_7] [i_6] = ((/* implicit */short) var_18);
                                var_29 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_5] [i_1 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [(signed char)16] [(signed char)16] [i_0]))) : (712747801239043430ULL)))) ? (((/* implicit */int) ((_Bool) var_5))) : (((/* implicit */int) arr_19 [i_1] [i_1 - 1] [i_1 - 2])))), (((/* implicit */int) (short)23))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
