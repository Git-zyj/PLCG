/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10025
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((!(var_2 ^ var_5)));

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_16 = (min(var_16, (((-((7 ? 18 : 7)))))));
        var_17 = (max(var_10, ((min(var_3, var_14)))));
        arr_2 [i_0] = min((max(var_7, var_1)), ((min(var_1, var_10))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            arr_10 [i_2] [i_2] [i_1] = var_4;
            var_18 = (max(var_18, (!-5448348914566654836)));
            var_19 = (min(var_19, (~var_0)));
        }
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {

                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        arr_18 [i_3] [i_3] [i_3] [13] = (~var_14);
                        var_20 = -var_2;
                    }
                    var_21 = -var_1;
                    arr_19 [i_1] [i_3] [i_3] [i_4] = var_0;
                    var_22 = ((~(!var_14)));

                    for (int i_6 = 2; i_6 < 15;i_6 += 1)
                    {
                        var_23 = var_9;
                        arr_22 [i_1] [i_3] = var_2;
                        var_24 = ((var_10 ? var_11 : var_4));
                    }
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        var_25 = (((!var_14) > var_6));
                        arr_27 [i_3] = ((((var_6 ? var_2 : var_11)) >> (var_5 - 6905284743926566284)));

                        for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
                        {
                            var_26 = ((0 << (30773 - 30756)));
                            arr_30 [i_1] [i_3] [1] = (((~var_7) ? (~var_12) : (!var_12)));
                            arr_31 [i_3] = ((!(!7)));
                        }
                        for (int i_9 = 0; i_9 < 17;i_9 += 1) /* same iter space */
                        {
                            arr_34 [i_1] [i_3] [i_4] [i_7] [i_3] = ((!(((var_1 ? var_9 : var_8)))));
                            var_27 = ((!((((-9223372036854775807 - 1) - 18446744073709551598)))));
                            arr_35 [i_3] [i_7] [i_4] [0] [i_3] = var_1;
                            var_28 += var_8;
                            arr_36 [i_1] [i_3] [i_4] [1] [i_3] = (~var_6);
                        }
                        for (int i_10 = 0; i_10 < 17;i_10 += 1) /* same iter space */
                        {
                            var_29 &= (var_10 / -var_1);
                            arr_40 [i_3] [i_3] [i_7] [i_7] [i_4] = (((((var_9 ? var_13 : var_9))) == var_11));
                        }
                        for (int i_11 = 0; i_11 < 17;i_11 += 1)
                        {
                            var_30 = (max(var_30, (~var_5)));
                            arr_44 [i_3] [i_7] [i_3] = (~var_5);
                        }
                    }
                }
            }
        }
    }
    for (int i_12 = 0; i_12 < 23;i_12 += 1)
    {
        var_31 = (min(((max(var_13, var_12))), (min(var_5, var_6))));
        arr_47 [20] [20] = ((!(!var_3)));
    }
    for (int i_13 = 0; i_13 < 21;i_13 += 1)
    {
        var_32 = (max(var_32, (((!((((min(var_6, var_3))))))))));
        var_33 = (((-9223372036854775807 - 1) ? ((((((var_0 + 9223372036854775807) >> var_8))) * (max(var_11, var_4)))) : (~var_5)));
    }
    var_34 = ((min(var_14, var_4)));
    #pragma endscop
}
