/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        arr_14 [i_0] [i_1 + 3] [i_1] [14] [i_2 - 2] [i_3] = ((var_3 ? -var_1 : ((var_7 ? var_6 : var_9))));
                        arr_15 [18] [i_3] [i_3] [i_3] = ((((var_1 ? var_2 : var_1)) + var_7));
                        var_11 = (24498 ^ -765739958);
                        arr_16 [i_0] [i_0] [i_1 + 1] [i_0] [i_3] = ((!(((var_5 ? var_2 : var_1)))));
                    }
                    for (int i_4 = 2; i_4 < 19;i_4 += 1)
                    {
                        arr_19 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_0] &= var_2;
                        arr_20 [i_0] [2] [i_0] [i_4 - 1] = (((var_4 | var_3) & (~var_3)));
                        arr_21 [i_0] [i_0] [i_4] = (((((((var_4 ? var_9 : -765739958))) ? ((765739972 ? 61 : -765739958)) : ((194 << (33951 - 33928))))) >> var_3));
                    }
                    arr_22 [i_0] [i_1] [i_2 - 1] [i_1 + 4] = ((-(var_8 && var_5)));
                    var_12 = (~var_4);
                    arr_23 [i_0] [i_0] [i_0] [i_0] = var_5;
                    var_13 = ((+((((var_6 == var_6) != -var_3)))));
                }
            }
        }
    }
    var_14 = (min(var_14, var_7));
    #pragma endscop
}
