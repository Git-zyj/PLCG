/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0 + 1] = 970963966;
        var_16 = (min(var_16, (--1530547141297425493)));
        var_17 |= 14;
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 = ((-(((!(!var_11))))));
                    var_19 = ((~(((-(arr_6 [i_2 - 1] [16] [i_1] [i_0]))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 18;i_3 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 18;i_6 += 1)
                {
                    {
                        arr_17 [i_3 + 2] [i_5] [i_4] [i_5] [i_6] = var_1;
                        var_20 *= (--970963966);
                        var_21 = (max(var_21, (((!(((~(arr_0 [i_3] [i_4])))))))));
                        var_22 = ((!(!var_11)));
                        var_23 = (!var_4);
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                {
                    var_24 &= -970963971;
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            {
                                var_25 = (~var_8);
                                var_26 = 15;
                            }
                        }
                    }
                }
            }
        }
        var_27 = (max(var_27, (--1328249005582514235)));
        var_28 = -1;
    }
    var_29 = (min(var_29, (--var_7)));
    var_30 = (~(+-1328249005582514235));

    /* vectorizable */
    for (int i_11 = 0; i_11 < 17;i_11 += 1)
    {
        var_31 = 5733511373203240181;
        var_32 = 9237;
    }
    var_33 = (min(var_33, -2147482624));
    #pragma endscop
}
