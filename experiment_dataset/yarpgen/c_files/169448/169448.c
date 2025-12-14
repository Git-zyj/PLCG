/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169448
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_12 = var_10;
                    var_13 = (((((var_10 & var_10) || (!var_5))) ? ((-var_4 ? var_2 : ((var_5 ? var_8 : var_5)))) : var_11));
                }
            }
        }
    }
    var_14 = ((((-((var_9 ? var_3 : var_9))))) ? var_9 : ((-var_5 ? (var_3 % var_3) : (max(var_5, var_11)))));

    /* vectorizable */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                var_15 = (var_6 > var_8);
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 12;i_7 += 1)
                    {
                        {
                            arr_25 [i_3] [i_4] [i_4] [i_5] [1] [i_7] = -var_7;
                            var_16 -= (!var_11);
                        }
                    }
                }

                for (int i_8 = 3; i_8 < 10;i_8 += 1)
                {
                    arr_28 [i_4] [i_3] [i_4] [i_5] [i_4] = (~var_6);

                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        arr_33 [i_4] [i_4] [i_5] [i_8 + 4] [i_9] = (((((var_7 ? var_11 : var_10))) < var_6));
                        var_17 = var_9;
                    }
                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        var_18 *= (1 < 46);
                        var_19 = (max(var_19, (~var_0)));
                    }
                    for (int i_11 = 3; i_11 < 11;i_11 += 1)
                    {
                        var_20 = ((((var_2 ? var_10 : var_2)) + -var_1));
                        var_21 ^= var_5;
                    }
                    var_22 = (((!var_9) ? ((var_10 ? var_0 : var_2)) : (!var_5)));
                }
                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {
                    arr_42 [i_4] [i_12] [i_5] [i_12] [i_4] = (~-var_4);
                    arr_43 [i_3] [i_4] [i_4] [i_12] [1] = (((var_11 - var_0) * ((5 ? 511 : -1463777704))));
                    var_23 = 1;
                }
            }

            for (int i_13 = 0; i_13 < 14;i_13 += 1)
            {
                arr_46 [i_13] [i_4] [4] [i_4] = (var_3 < var_9);

                for (int i_14 = 0; i_14 < 14;i_14 += 1)
                {
                    var_24 = ((var_4 ? var_7 : var_10));
                    var_25 = (~var_4);
                }
                for (int i_15 = 3; i_15 < 13;i_15 += 1)
                {
                    var_26 ^= (~var_6);
                    arr_53 [i_3] [i_4] [i_13] [i_3] [i_3] [i_4] = ((var_1 ? var_1 : var_4));
                }
            }
            var_27 |= (var_7 - var_9);
            arr_54 [i_4] = (((var_3 <= var_6) ? ((var_9 ? var_4 : var_9)) : var_7));
        }
        for (int i_16 = 0; i_16 < 14;i_16 += 1)
        {
            var_28 = ((var_2 + 2147483647) << (((((var_8 + var_4) + 1161491173)) - 6)));
            arr_59 [i_16] [i_3] [i_3] = ((-((var_9 ? var_3 : var_10))));
        }
        var_29 ^= var_8;
        arr_60 [i_3] = (((var_3 ^ var_2) + (var_5 < var_4)));
    }
    #pragma endscop
}
