/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160005
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 1;
    var_20 = 1;
    var_21 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_0] = 17919;
                    var_22 = -1;
                    var_23 = (max((min((-127 - 1), -6504478369816127162)), ((max((-127 - 1), 127)))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 18;i_5 += 1)
            {
                {
                    var_24 |= ((-6504478369816127162 ? ((1 ? 6504478369816127152 : 182)) : 1));
                    var_25 = 31;
                    var_26 -= ((!(!127)));
                    var_27 = -6504478369816127163;
                    var_28 += (~139);
                }
            }
        }
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 19;i_8 += 1)
                {
                    {
                        var_29 = (min(var_29, (-127 - 1)));
                        var_30 = (max((max(178, 17919)), 6365));
                    }
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 0;i_9 += 1)
    {
        var_31 = -59171;
        var_32 = 182;
    }
    /* vectorizable */
    for (int i_10 = 1; i_10 < 1;i_10 += 1)
    {
        var_33 = (min(var_33, (!1020)));
        /* LoopNest 3 */
        for (int i_11 = 2; i_11 < 15;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 18;i_12 += 1)
            {
                for (int i_13 = 2; i_13 < 16;i_13 += 1)
                {
                    {
                        var_34 = 1;
                        var_35 = -64;
                        var_36 = ((152 ? 1 : 31));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_14 = 4; i_14 < 18;i_14 += 1)
        {
            for (int i_15 = 2; i_15 < 18;i_15 += 1)
            {
                for (int i_16 = 1; i_16 < 16;i_16 += 1)
                {
                    {
                        var_37 = 12;
                        var_38 = ((-3862596368655112757 ? -86 : -6504478369816127152));

                        for (int i_17 = 0; i_17 < 19;i_17 += 1) /* same iter space */
                        {
                            var_39 = -0;
                            var_40 = 1;
                            var_41 = ((64 ? 1 : 0));
                            arr_54 [i_10] [i_10] [i_10] [i_17] = 0;
                            var_42 = (~1);
                        }
                        for (int i_18 = 0; i_18 < 19;i_18 += 1) /* same iter space */
                        {
                            arr_58 [i_10] [i_14 + 1] = ((-127 ? 89 : 65535));
                            var_43 = 255;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
