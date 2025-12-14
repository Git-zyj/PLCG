/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((-(var_13 / var_2))) & ((((var_12 + var_11) * (!var_5))))));

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_18 = ((~((~(-1480070647 & var_6)))));
            var_19 = (-731613471 != -325240442);

            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                var_20 -= (((~(var_5 | var_6))) << ((((~((var_9 << (var_9 - 3653029891314415003))))) + 3653029891314415038)));
                var_21 = var_11;
            }
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 7;i_5 += 1)
                    {
                        {
                            var_22 = (min(var_22, var_2));
                            arr_17 [i_0] [i_4] [i_0] &= var_13;
                            arr_18 [i_4] [i_1] [i_0] [i_4] [0] = var_0;
                            var_23 = ((var_9 != (!var_12)));
                            var_24 = -var_7;
                        }
                    }
                }

                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        var_25 = -1;
                        arr_23 [i_0] [4] [i_3] [i_6] [i_6] [i_7] = var_11;
                        var_26 = (((~var_8) | (!var_4)));
                    }
                    var_27 = var_7;
                    var_28 = var_15;
                }
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    var_29 = (max(var_29, (!-1067037238404534874)));
                    var_30 = var_15;
                    var_31 = (~1);
                    var_32 = var_7;
                }
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    arr_29 [i_0] [i_1] [i_0] [i_0] = -511;

                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        var_33 = (((var_1 + var_13) < (var_12 != var_2)));
                        var_34 = (((((-512 + 2147483647) << (3802315741 - 3802315741))) < -var_11));
                    }
                    for (int i_11 = 0; i_11 < 10;i_11 += 1) /* same iter space */
                    {
                        var_35 ^= (!var_12);
                        var_36 += var_12;
                        var_37 = (max(var_37, var_11));
                        var_38 = var_14;
                        arr_35 [i_9] [i_9] [i_0] [i_9] = ((-(((var_13 > (var_13 && var_5))))));
                    }
                    for (int i_12 = 0; i_12 < 10;i_12 += 1) /* same iter space */
                    {
                        var_39 = ((var_11 | (!var_9)));
                        arr_39 [i_0] [i_0] [i_0] [i_0] [1] = ((-(((var_11 >= var_5) * var_0))));
                    }
                    /* vectorizable */
                    for (int i_13 = 2; i_13 < 7;i_13 += 1)
                    {
                        var_40 = (((~877243694) + (var_14 != var_3)));
                        var_41 = (max(var_41, (var_4 % 1)));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 10;i_14 += 1)
        {
            for (int i_15 = 1; i_15 < 9;i_15 += 1)
            {
                {
                    var_42 = (~var_16);
                    var_43 = var_12;
                    arr_51 [i_0] [8] [i_0] [i_15] = (~-var_5);
                    var_44 = var_11;
                }
            }
        }
    }
    var_45 = (-1109397378 > 1);
    var_46 = ((var_2 << ((-(var_8 > var_10)))));
    #pragma endscop
}
