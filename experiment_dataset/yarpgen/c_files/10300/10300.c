/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10300
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 16;i_2 += 1) /* same iter space */
                {
                    arr_8 [i_0] [i_0] [i_2] [i_0] = ((((((var_12 ? var_17 : var_16)))) || (((var_5 / var_5) && (var_18 <= var_19)))));
                    var_20 = (~var_12);
                }
                /* vectorizable */
                for (int i_3 = 2; i_3 < 16;i_3 += 1) /* same iter space */
                {
                    var_21 = -6303296164475273385;
                    arr_11 [15] [15] [i_3 + 1] = (~var_3);
                    var_22 |= (~var_0);
                    var_23 = (((((var_15 ? var_11 : var_10))) ? (var_6 / var_9) : (((var_10 ? var_16 : var_0)))));
                }
                arr_12 [i_0] [i_1] [i_1] = ((~var_12) ? (~var_10) : ((((var_9 + 2147483647) >> (var_9 + 26954)))));
                var_24 = ((var_18 - ((25453 ? -var_1 : (var_15 + var_9)))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                {

                    for (int i_7 = 1; i_7 < 18;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            var_25 = 0;
                            arr_23 [i_8] [i_4] [i_4] [i_4] = -var_17;
                        }
                        for (int i_9 = 2; i_9 < 21;i_9 += 1)
                        {
                            var_26 = (var_10 & var_11);
                            var_27 = ((((var_14 < -329726699) << (((~414341748) + 414341773)))));
                        }
                        /* vectorizable */
                        for (int i_10 = 3; i_10 < 21;i_10 += 1)
                        {
                            var_28 = ((((((var_16 + 2147483647) << (((var_7 + 3337606768252388865) - 27))))) ? (~var_8) : var_5));
                            var_29 = (max(var_29, ((((var_10 ? var_13 : var_7))))));
                            var_30 = (var_4 ? var_1 : var_12);
                            var_31 = (max(var_31, var_5));
                        }
                        var_32 = var_16;
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        var_33 = ((~(var_0 < var_11)));
                        arr_32 [i_4] [i_4] [i_5] [i_4] = (((var_7 + var_16) ? ((var_5 ? var_16 : var_2)) : ((var_14 ? var_13 : var_12))));
                    }
                    for (int i_12 = 0; i_12 < 22;i_12 += 1)
                    {
                        var_34 = ((var_6 ? (var_5 / var_13) : ((var_1 ? ((var_15 ? var_17 : var_13)) : var_1))));
                        arr_37 [i_5] [20] [i_6] [i_5] [i_4] = ((((-(!var_3))) | ((((var_7 ? var_2 : var_6))))));
                    }
                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 22;i_13 += 1)
                    {
                        arr_40 [i_4] = ((var_6 / (~var_10)));
                        var_35 = ((!(~var_12)));
                    }
                    arr_41 [i_6] [i_4] [i_4] = var_9;
                }
            }
        }
    }
    var_36 = ((((var_3 * var_17) != 20013)));
    #pragma endscop
}
