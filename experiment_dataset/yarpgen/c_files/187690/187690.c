/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_18 = var_9;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_12 [i_4] [i_3] [i_3] [i_2] [i_1] [i_0] [i_0] = (min(12288, 690627723));
                                arr_13 [i_2] = (min((((-(arr_11 [i_1] [i_2] [i_4 + 2] [i_2] [i_1])))), ((2146130649 ? var_6 : var_16))));
                                arr_14 [i_0] [i_2] [i_0] [i_3] [i_3] [i_4] = (((-(arr_6 [i_0] [i_1] [i_2] [i_0]))));
                                var_19 = ((((((104 >= -2146130650) ? 96 : 0))) ? ((((!(!8555374848188922738))))) : 12563269682283100883));
                                arr_15 [i_2] [i_2] = var_12;
                            }
                        }
                    }
                }
                var_20 = (1 % 9223372036854775807);
                var_21 = (((min((min(var_2, (arr_2 [i_1] [i_1] [i_0]))), var_13)) | var_4));
            }
        }
    }
    var_22 = (min((min(((var_1 ? 0 : var_14)), (~var_0))), ((~(max(var_2, -2146130650))))));
    var_23 = (max((min(47, 0)), var_0));
    var_24 = (min(var_24, ((((61873 / var_1) > 122)))));
    #pragma endscop
}
