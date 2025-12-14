/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((!(~1)));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_20 &= -234;
            var_21 = var_3;
            var_22 = (~var_18);
        }
        for (int i_2 = 1; i_2 < 8;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                var_23 -= ((~(!-var_10)));

                for (int i_4 = 1; i_4 < 8;i_4 += 1)
                {

                    for (int i_5 = 1; i_5 < 10;i_5 += 1)
                    {
                        var_24 -= (!0);
                        var_25 = ((!(!var_16)));
                        var_26 = (!var_9);
                        var_27 = (~var_5);
                        var_28 &= var_5;
                    }
                    var_29 |= var_2;
                    var_30 = var_9;
                }
                var_31 = var_11;
                var_32 = var_15;
            }
            var_33 |= var_7;
            var_34 = var_11;
            var_35 = var_18;
        }
        /* vectorizable */
        for (int i_6 = 1; i_6 < 11;i_6 += 1)
        {
            var_36 ^= var_14;
            var_37 &= var_9;
        }
        var_38 = (~-var_18);
    }
    for (int i_7 = 3; i_7 < 16;i_7 += 1) /* same iter space */
    {
        var_39 = var_0;
        var_40 = var_15;
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 16;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 18;i_10 += 1)
                {
                    {
                        var_41 = var_3;
                        var_42 = var_15;
                        var_43 = var_2;
                        var_44 = (~-var_6);
                    }
                }
            }
        }
    }
    for (int i_11 = 3; i_11 < 16;i_11 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 17;i_13 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 18;i_14 += 1)
                    {
                        for (int i_15 = 1; i_15 < 1;i_15 += 1)
                        {
                            {
                                var_45 = var_11;
                                var_46 = (!var_15);
                                var_47 = (~((-(~0))));
                                var_48 = 230;
                            }
                        }
                    }
                    var_49 = ((!((!(~var_3)))));
                }
            }
        }
        var_50 = var_4;
        var_51 = var_3;
    }
    #pragma endscop
}
