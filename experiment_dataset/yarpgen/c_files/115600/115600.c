/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((var_10 || var_3) > ((var_9 ? var_2 : var_3))));
        var_14 = ((-((-var_0 ? -1362137160 : -var_11))));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_10 [i_0] = ((-var_11 ^ (!9887282161150050249)));

                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            var_15 = (((((!var_5) && (!var_11))) && (!1026598508)));
                            arr_14 [i_0] [i_0] [i_0] [i_3] [i_0] [i_4] = ((-(!var_2)));
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = -var_13;
                        }
                        for (int i_5 = 2; i_5 < 19;i_5 += 1)
                        {
                            var_16 &= (var_7 >= -var_12);
                            var_17 -= (var_10 ? (var_10 && var_6) : var_5);
                            arr_18 [i_0] [i_1] [i_1] [i_0] [i_5] = (!2048);
                        }
                        var_18 = ((-((((((var_7 + 2147483647) << var_10))) ? ((((-95 + 2147483647) >> (2932830111 - 2932830080)))) : -var_9))));
                        var_19 = ((((~(var_6 + var_9)))) != (((var_8 - var_10) * (var_3 || var_4))));
                    }
                }
            }
        }
        var_20 = -var_9;
        var_21 = ((!((!(~var_4)))));
    }
    /* vectorizable */
    for (int i_6 = 2; i_6 < 21;i_6 += 1) /* same iter space */
    {
        arr_21 [i_6] = (((var_8 * var_12) * (var_6 / var_6)));
        var_22 = var_9;
        arr_22 [i_6] = var_7;
    }
    for (int i_7 = 2; i_7 < 21;i_7 += 1) /* same iter space */
    {
        var_23 = var_1;
        var_24 = (((var_8 && var_4) ? (((-(var_6 ^ var_13)))) : (((!var_10) - (var_5 * var_12)))));
        var_25 = ((~(!-var_11)));
    }
    var_26 = (var_7 & var_6);
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 24;i_9 += 1)
        {
            {
                arr_30 [i_9 + 1] = var_9;
                /* LoopNest 2 */
                for (int i_10 = 4; i_10 < 22;i_10 += 1)
                {
                    for (int i_11 = 3; i_11 < 23;i_11 += 1)
                    {
                        {
                            arr_36 [i_8] [i_10 + 2] [1] [i_8] = (-1026598526 || 2932830125);
                            arr_37 [i_8] [i_9] [22] [19] = ((+(((var_9 - var_13) * var_6))));
                            arr_38 [i_8] [i_8] [i_10 - 3] [i_11] = ((+((((var_8 && var_1) && var_9)))));
                            var_27 = (((var_2 ? var_9 : var_2)));
                        }
                    }
                }
                var_28 = ((!((!(!var_2)))));
                var_29 = var_9;
                arr_39 [i_8] [i_8] [i_8] = (((((var_5 * var_1) != (~var_10))) || -var_11));
            }
        }
    }
    #pragma endscop
}
