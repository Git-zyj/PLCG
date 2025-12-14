/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114230
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, var_10));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (~var_6);

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_5 [i_0] [18] = (arr_4 [i_0]);
            var_12 = 219832409;

            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        {
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_3] = ((!(arr_13 [i_3 - 1] [i_3 - 1] [i_3 - 1] [17] [i_3 - 1] [i_3 - 1] [i_1])));
                            var_13 = (!-0);
                            arr_15 [i_4] [i_3] [1] [i_0] [i_0] = ((-(((0 != (arr_7 [3] [i_2] [12] [i_1]))))));
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    var_14 = 1;
                    var_15 = (min(var_15, (arr_13 [i_0] [i_2] [i_2] [i_5] [i_2] [i_5] [i_0])));
                    var_16 = ((+(((arr_12 [17] [i_1] [0] [i_1] [i_1] [i_1]) - var_6))));
                    arr_19 [i_0] [i_5] [i_1] [i_5] [i_0] = ((var_0 ? (arr_1 [i_0]) : 65520));
                }
                arr_20 [i_0] [i_0] = ((~(~65520)));

                for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                {
                    var_17 ^= ((1 ? (arr_7 [i_0] [i_0] [i_2] [i_6]) : (arr_0 [i_0])));
                    arr_24 [i_0] [i_1] [5] [i_1] &= var_10;
                }
                for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                {

                    for (int i_8 = 1; i_8 < 18;i_8 += 1)
                    {
                        var_18 = ((41 && (((1966080 ? (arr_17 [i_8] [i_7] [i_1] [i_0]) : 554153860399104)))));
                        arr_31 [i_0] [i_8] = ((var_4 ? ((var_8 ? (arr_27 [0]) : (arr_6 [i_0] [i_0] [i_0] [i_0]))) : 1));
                    }

                    for (int i_9 = 1; i_9 < 19;i_9 += 1)
                    {
                        arr_34 [i_2] [i_2] [i_9] [i_2] [i_2] = 4305108275137382326;
                        arr_35 [i_9] [i_9] [i_9] [12] [i_9] [i_9] [i_9] = -0;
                    }
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        arr_38 [i_10] = (arr_25 [i_0] [i_0] [i_0] [i_0] [i_0]);
                        var_19 = (min(var_19, (var_9 <= 1069547520)));
                    }
                    arr_39 [i_0] [i_2] [i_0] = 416171279;
                    var_20 = -var_6;
                }
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    var_21 *= (arr_18 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]);
                    arr_43 [i_0] [i_1] [i_2] [i_11] [i_11] [i_11] = (arr_8 [i_11] [i_1] [i_0]);
                }
            }
            /* LoopNest 2 */
            for (int i_12 = 3; i_12 < 18;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 20;i_13 += 1)
                {
                    {
                        var_22 = (min(var_22, (((-(arr_0 [i_12 - 1]))))));
                        var_23 *= (arr_41 [6] [i_0] [17] [i_12 - 3] [i_12 + 1]);
                    }
                }
            }
            var_24 = (min(var_24, -17043));
        }
        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {
            var_25 = (((arr_50 [i_14] [i_14]) ? 0 : (arr_26 [i_14] [i_14] [1] [i_14])));

            for (int i_15 = 0; i_15 < 20;i_15 += 1)
            {
                var_26 = ((var_2 << (var_5 - 1191915650460983208)));
                var_27 = (max(var_27, (!5893)));
                var_28 = ((-98 ? (arr_26 [i_0] [i_14] [17] [i_15]) : (arr_26 [i_0] [i_14] [i_15] [i_14])));

                for (int i_16 = 2; i_16 < 19;i_16 += 1)
                {
                    var_29 -= (((arr_48 [i_0]) != var_10));

                    for (int i_17 = 0; i_17 < 20;i_17 += 1)
                    {
                        arr_60 [14] [14] [i_15] [14] [i_15] = (arr_16 [i_0] [2]);
                        var_30 = (max(var_30, -var_0));
                        arr_61 [i_14] [i_14] [i_14] [i_14] [i_17] [8] [i_14] = (((arr_0 [i_0]) >= var_0));
                    }
                    for (int i_18 = 0; i_18 < 20;i_18 += 1)
                    {
                        var_31 = ((-(arr_0 [i_16 - 2])));
                        var_32 = (554153860399096 >= var_9);
                        var_33 += var_6;
                        arr_65 [1] [1] [i_18] = arr_49 [i_0] [i_0];
                    }
                }
                var_34 += -504;
            }
            arr_66 [i_14] = ((!(((-(arr_53 [i_14] [1]))))));
        }
        for (int i_19 = 3; i_19 < 18;i_19 += 1)
        {
            arr_69 [i_0] &= (((~var_4) ? (76 != 56402) : (arr_49 [i_19 - 2] [i_19 - 1])));
            var_35 = (var_9 * 2562418816);
        }
        var_36 ^= 56;
        var_37 -= arr_18 [i_0] [9] [i_0] [i_0] [i_0] [7];
    }
    #pragma endscop
}
