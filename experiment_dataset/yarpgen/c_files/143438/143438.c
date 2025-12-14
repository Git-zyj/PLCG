/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((((var_9 ? var_4 : var_8))) ? (((var_2 ? var_1 : var_7))) : var_10))) ? (((((var_10 ? var_8 : var_9))) ? var_11 : var_15)) : ((var_3 ? ((var_15 ? var_11 : var_13)) : var_12)));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_6 [i_0] = ((((var_10 ? var_1 : var_14))) ? ((var_3 ? var_15 : var_5)) : ((var_15 ? var_9 : var_8)));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        {
                            var_17 -= ((((var_13 ? var_12 : var_6))) ? var_8 : ((var_11 ? var_8 : var_1)));
                            var_18 = (min(var_18, ((((((28868 ? -1808438390 : -1808438394))) ? ((1808438393 ? var_14 : -72604959)) : 72604959)))));
                            arr_15 [i_0] [i_4] [i_2] [i_3] [i_3] = (((((var_10 ? var_5 : var_8))) ? (((var_11 ? var_2 : var_7))) : ((-1808438399 ? 4097949943 : 72604957))));
                        }
                    }
                }
            }

            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                arr_18 [i_0] [i_1] [i_5] = (((((var_3 ? var_1 : var_0))) ? (((((var_4 ? var_6 : var_7))) ? var_15 : var_6)) : (((var_12 ? var_7 : var_9)))));
                var_19 -= (((((var_11 ? var_12 : var_8))) ? ((var_7 ? var_14 : var_15)) : ((var_9 ? var_14 : var_7))));
            }
        }
        /* vectorizable */
        for (int i_6 = 1; i_6 < 21;i_6 += 1)
        {
            var_20 = ((var_8 ? ((var_8 ? var_7 : var_15)) : var_5));
            arr_22 [i_6] [i_6] = var_11;
        }
        arr_23 [i_0] [i_0] = (((((var_4 ? var_12 : var_12))) ? ((var_1 ? var_3 : var_15)) : ((var_2 ? var_13 : var_3))));
        var_21 -= ((var_15 ? ((var_14 ? var_14 : var_12)) : ((var_15 ? var_7 : var_11))));
        var_22 += (((((var_5 ? var_7 : var_13))) ? ((var_10 ? var_12 : var_0)) : ((((((1808438413 ? -1 : var_2))) ? ((var_11 ? var_5 : var_15)) : var_7)))));
    }
    #pragma endscop
}
