/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127127
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        var_14 = ((/* implicit */int) ((unsigned int) arr_1 [i_0 + 1]));
        /* LoopNest 2 */
        for (unsigned short i_1 = 4; i_1 < 15; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_9 [i_1] = ((((/* implicit */int) arr_5 [i_1 - 2] [(short)8] [i_2])) - (((/* implicit */int) arr_5 [i_1 - 3] [(unsigned char)6] [i_1])));
                    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (-(((/* implicit */int) var_5)))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 1; i_3 < 14; i_3 += 3) 
                    {
                        arr_14 [i_0] [(short)9] [(short)1] [i_2] [i_0] = ((/* implicit */unsigned short) arr_6 [i_1] [i_2]);
                        var_16 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */int) (unsigned char)163)) | (((/* implicit */int) (unsigned char)163)))));
                        arr_15 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((short) arr_12 [i_0] [i_3 + 1] [i_1 - 2] [i_0 - 1]));
                    }
                    for (int i_4 = 4; i_4 < 14; i_4 += 3) 
                    {
                        arr_19 [i_4] [i_2] [i_1] [(short)3] = ((/* implicit */unsigned short) ((long long int) arr_17 [i_0] [i_0] [i_2] [i_4] [i_4 - 1]));
                        arr_20 [i_4 - 2] [i_4] [i_2] [i_2] [i_1 - 2] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_8 [i_0 + 1] [i_0 + 2] [(short)3]))));
                    }
                    for (unsigned int i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */int) arr_17 [i_0 - 1] [i_0 + 2] [i_0 - 1] [i_0 + 1] [i_0 - 1])) >= (((/* implicit */int) arr_17 [i_0] [i_0 + 2] [i_0 + 2] [(unsigned short)14] [(short)6])))))));
                        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((signed char) 355981170)))));
                        arr_25 [i_5] [i_1] [i_5] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_8 [i_5] [i_0 - 1] [i_0]))));
                    }
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_6 = 0; i_6 < 12; i_6 += 3) 
    {
        var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 111651887))));
        var_20 = arr_7 [i_6] [i_6];
        var_21 = ((/* implicit */short) ((((/* implicit */int) arr_5 [10U] [(short)6] [i_6])) + (((/* implicit */int) ((((/* implicit */unsigned int) arr_23 [i_6] [i_6] [(unsigned char)10] [i_6])) <= (5U))))));
        arr_28 [i_6] = ((/* implicit */int) arr_8 [i_6] [i_6] [i_6]);
        arr_29 [i_6] = ((/* implicit */unsigned long long int) ((arr_7 [i_6] [i_6]) != (arr_7 [i_6] [i_6])));
    }
    var_22 = var_1;
    /* LoopSeq 1 */
    for (int i_7 = 1; i_7 < 22; i_7 += 3) 
    {
        arr_34 [i_7] = ((/* implicit */int) max((((/* implicit */unsigned int) -111651902)), (((((((/* implicit */_Bool) arr_30 [i_7])) ? (arr_30 [i_7 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_7]))))) | (((/* implicit */unsigned int) arr_33 [i_7 - 1]))))));
        var_23 = ((/* implicit */_Bool) min((((unsigned long long int) var_6)), (((/* implicit */unsigned long long int) (-(-111651883))))));
    }
    var_24 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) var_12)), (var_2)))) < (((/* implicit */int) var_2))))), (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 63)))))) | (((long long int) (short)-22936))))));
}
