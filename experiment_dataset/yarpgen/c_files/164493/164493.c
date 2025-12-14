/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164493
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((min(var_4, (-2 ^ var_1)))) ? var_5 : var_5));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0 + 1] = ((~(((arr_0 [i_0 + 1] [i_0 + 1]) ? (arr_0 [i_0 + 1] [i_0 + 1]) : (arr_0 [i_0 + 1] [i_0 + 1])))));
        arr_3 [i_0] = var_14;
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {

            for (int i_3 = 1; i_3 < 22;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
                {
                    var_21 = (-(arr_15 [i_3] [i_3 - 1] [i_3 + 1] [i_3 + 2] [i_3]));

                    for (int i_5 = 2; i_5 < 20;i_5 += 1)
                    {
                        arr_18 [i_1] [1] [i_2] [i_3 + 1] [i_4] [i_5 - 2] [i_5] = 26350;
                        var_22 *= (((var_19 ? 4294967295 : (arr_12 [i_2] [i_4]))));
                    }
                    arr_19 [i_1] [1] [i_1] [i_1] = ((-((-(arr_16 [i_1] [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1])))));
                }
                for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
                {
                    arr_22 [i_1] [i_3 - 1] [0] = (((arr_4 [i_1 + 2]) * 17063948331949732411));
                    arr_23 [i_1] [13] [i_2] [1] [i_3] [i_6] = (!var_2);
                }
                for (int i_7 = 2; i_7 < 22;i_7 += 1)
                {
                    var_23 = (max(var_23, 30427));
                    arr_28 [6] [i_3 + 2] [i_7] [i_7] = -26503;
                }
                for (int i_8 = 4; i_8 < 23;i_8 += 1)
                {
                    var_24 |= (arr_11 [i_1] [i_1] [i_1 + 2]);
                    var_25 = (arr_21 [i_1 + 3] [i_1 + 3] [i_1 + 1] [i_3 + 1] [i_3 + 2]);
                    arr_31 [i_3] [15] [i_1] [i_2] = (arr_7 [i_1 - 1]);

                    for (int i_9 = 4; i_9 < 23;i_9 += 1) /* same iter space */
                    {
                        arr_35 [i_2] |= (((~1382795741759819209) % var_7));
                        var_26 = (!(arr_24 [i_1 - 2] [i_2] [i_3 + 1] [i_8] [i_9 - 3]));
                        var_27 = (((17063948331949732395 ? 5688 : 6405486865363418359)));
                        arr_36 [i_8 + 1] [i_8 + 1] [i_8] [i_8 - 3] [i_8] = (((arr_34 [1] [14] [i_3] [i_2] [i_1]) ? (arr_21 [i_3 + 2] [i_3] [i_3 + 2] [i_3 + 2] [i_3 + 1]) : 0));
                    }
                    for (int i_10 = 4; i_10 < 23;i_10 += 1) /* same iter space */
                    {
                        var_28 = 1;
                        var_29 = (((arr_26 [i_1] [i_2] [i_3 - 1] [i_10 + 1]) - (arr_8 [i_10] [i_10])));
                        var_30 = (arr_9 [i_10 - 1] [i_10 - 1] [i_10] [i_10 - 2]);
                        var_31 += ((var_1 * (arr_9 [i_8 - 1] [i_8] [i_8 - 4] [i_8])));
                    }
                }
                arr_39 [6] [i_1] [i_1] = (arr_29 [i_2] [i_3 - 1] [i_3 - 1] [i_1] [i_3 - 1]);
                arr_40 [i_1 - 1] [i_3 + 2] [i_3 + 2] = 17;
                arr_41 [i_3 - 1] [i_2] [i_1 + 3] = ((var_16 ^ (arr_32 [i_1] [i_1 + 4] [i_3 + 1])));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 22;i_12 += 1)
                    {
                        {
                            arr_46 [i_1 + 2] [i_1] [i_1] [i_1 + 4] [i_1] = 314474713;
                            arr_47 [i_1] [23] = ((~(arr_4 [i_12])));
                            arr_48 [i_1] [i_2] [i_2] [i_3] [23] [i_12] = ((!(arr_13 [i_1 + 4] [i_2] [i_3 + 2] [i_11] [1] [i_12 - 2])));
                            arr_49 [i_12] [i_11] [i_3] [i_2] [i_1] = -2378231878971473134;
                        }
                    }
                }
            }
            arr_50 [i_2] = (arr_45 [i_1] [i_1 - 2] [i_1 + 4] [i_1] [i_1] [i_1 + 4] [i_1 + 4]);
        }
        for (int i_13 = 0; i_13 < 24;i_13 += 1)
        {
            var_32 = (max(var_32, ((+(((arr_44 [i_1] [1] [i_1] [12] [20] [i_13]) ? var_13 : (arr_10 [i_13] [19] [i_13] [i_13])))))));
            var_33 = (~var_6);
        }
        arr_53 [5] = ((var_12 ? (arr_17 [i_1 + 3] [i_1 + 3] [i_1 + 1] [i_1 - 1] [i_1] [i_1 + 3]) : var_19));
    }
    for (int i_14 = 1; i_14 < 7;i_14 += 1)
    {
        var_34 = ((var_15 != (arr_5 [i_14 + 2])));
        var_35 = (max(var_35, (arr_15 [i_14 - 1] [i_14] [i_14] [i_14] [i_14])));
    }
    #pragma endscop
}
