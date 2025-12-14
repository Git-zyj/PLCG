/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((((!var_2) ? (max(var_11, var_4)) : (!var_12))), var_0));
    var_15 = var_0;
    var_16 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_17 = (!-1);
                    var_18 = (min(var_18, (((~(!var_1))))));
                    var_19 = (max(var_19, var_2));
                    var_20 = (min(var_6, (~var_11)));

                    for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
                    {
                        var_21 = ((!((((var_9 ? var_7 : var_3))))));
                        arr_12 [i_1] [i_1] [i_2] = (max(((var_11 ? -21329 : var_1)), 293146401));
                    }
                    for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_0] [i_2] = (max(((max((max(var_9, var_1)), (min(var_9, var_8))))), (max(((max(var_9, var_1))), (max(18110, -5049470530947276369))))));
                        var_22 ^= (max(((min(47486, 1))), ((((max(var_3, var_12))) ? (~var_11) : (((max(var_2, var_3))))))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                    {
                        var_23 = (min(var_23, (((var_6 ? var_5 : var_12)))));
                        arr_20 [15] [i_1] [i_2] [i_2] [i_2] [i_1] = -var_6;
                        arr_21 [i_2] [i_1] [i_2] = ((var_6 ? var_2 : var_4));
                    }
                }
            }
        }
    }
    #pragma endscop
}
