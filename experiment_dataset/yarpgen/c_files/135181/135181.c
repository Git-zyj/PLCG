/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] |= ((-(((!(!-136409482990310130))))));
        var_17 = 62;
        var_18 = var_9;
        var_19 = (max(var_19, -var_13));
        var_20 = var_11;
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 16;i_4 += 1)
                {
                    {
                        var_21 += var_14;

                        for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
                        {
                            var_22 = ((~((-(!var_3)))));
                            var_23 = var_16;
                            var_24 *= (!var_4);
                            arr_22 [i_1] [i_2] [4] [i_4] [i_4] = var_1;
                        }
                        for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
                        {
                            var_25 = var_13;
                            var_26 *= var_7;
                            var_27 = ((~(~98)));
                            var_28 = (~var_5);
                        }
                        arr_25 [i_1] [i_2] [i_1] [i_4] [1] |= (!var_6);
                        var_29 = var_15;
                        var_30 = (min(var_30, var_5));
                    }
                }
            }
        }
        var_31 *= -var_5;
        arr_26 [1] = var_9;
    }
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 12;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 13;i_8 += 1)
        {
            {
                var_32 = (~var_6);
                var_33 |= -var_14;
            }
        }
    }
    var_34 = (!var_0);
    var_35 = var_9;
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        for (int i_10 = 3; i_10 < 9;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 9;i_11 += 1)
            {
                {
                    arr_41 [i_9] = var_2;
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 13;i_12 += 1)
                    {
                        for (int i_13 = 3; i_13 < 12;i_13 += 1)
                        {
                            {
                                arr_48 [i_9] [i_10] [i_11] [1] [i_13] [i_9] = var_10;
                                arr_49 [i_9] [2] &= var_11;
                                var_36 += var_4;
                            }
                        }
                    }
                    arr_50 [i_9] = (!-var_7);
                }
            }
        }
    }
    #pragma endscop
}
