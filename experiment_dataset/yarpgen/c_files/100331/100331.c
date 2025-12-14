/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100331
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            arr_8 [i_0] [i_1] [i_1] = ((57788 ? 63 : var_4));
            var_20 = var_18;

            for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
            {
                var_21 -= (arr_6 [i_2]);
                arr_11 [i_1] [i_1] = (((((((-127 - 1) == 63)))) < ((10 ? (arr_9 [20] [i_1 + 3] [i_2]) : 511))));

                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    arr_14 [i_0] [i_3] [5] [i_1] [i_2] [i_3] = (63 ? 193 : 1);

                    for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
                    {
                        arr_17 [i_3] [i_3] [13] [3] [i_3] = (arr_13 [i_0] [i_3] [21]);
                        arr_18 [i_3] [i_2] [i_2] [i_1 + 2] [i_4] [i_4] = -2968;
                        arr_19 [i_0] [i_1 + 2] [i_3] [i_2] [i_3] [8] = ((((var_9 ? 2967 : (arr_9 [i_0] [i_0] [i_2]))) >= (((var_10 ? 119 : 2968)))));
                        var_22 = (~-90);
                        arr_20 [i_0] [18] [i_3] [i_1] [19] [i_3] [i_4] = (((arr_3 [i_0]) ? (arr_3 [i_3]) : var_18));
                    }
                    for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                    {
                        arr_23 [i_3] [i_3] [i_2] [i_2] [i_2] [i_2] [i_2] = -42;
                        var_23 = ((var_15 != (arr_15 [i_1 - 1] [i_1 + 1] [i_3] [i_3] [i_1 - 1] [20])));
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_24 = (0 - -26003);
                        var_25 = (min(var_25, (((248 || (-127 - 1))))));
                    }
                    arr_27 [i_3] = (((var_9 || -2984) ? -2968 : ((4294966797 ? var_15 : -1))));
                    var_26 = (((var_0 ^ var_7) ? var_15 : (-128745361 < 2967)));
                }
            }
            for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
            {
                arr_31 [i_0] [1] [6] = var_16;

                for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
                {
                    var_27 ^= ((var_0 ? ((109 ? 0 : 5665471695443381108)) : var_7));
                    arr_34 [1] = (~3948699709);
                }
                for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
                {
                    arr_37 [i_1] [2] [i_7] [i_9] [15] [i_9] = (((arr_35 [i_9] [i_1 - 1] [i_1] [i_1] [i_0]) / (arr_35 [i_9] [i_1 - 2] [i_1] [18] [i_1 - 1])));
                    arr_38 [i_0] [i_1] [i_7] [i_9] = (var_16 << (((arr_6 [i_1 + 3]) - 20687)));

                    for (int i_10 = 3; i_10 < 22;i_10 += 1)
                    {
                        arr_41 [i_10] [i_9] [i_7] [i_1] [11] [i_1 - 2] [i_0] = (arr_5 [15] [i_9] [i_7]);
                        arr_42 [i_10 + 1] [i_9] [i_7] [i_1 - 1] [i_0] = arr_36 [i_10] [i_7] [i_1 - 1] [21];
                        arr_43 [14] [14] = (((arr_15 [i_0] [12] [i_9] [i_9] [i_10] [i_1 + 2]) >> var_9));
                    }
                    for (int i_11 = 0; i_11 < 23;i_11 += 1) /* same iter space */
                    {
                        var_28 = (((arr_6 [i_9]) || 0));
                        arr_47 [i_11] [i_0] [i_7] [i_1 + 1] [i_0] = ((((var_13 ? 10 : 248)) ^ -30));
                        var_29 = var_18;
                        var_30 = ((var_1 != (arr_33 [i_1 + 1] [i_1 + 1] [i_0])));
                        arr_48 [18] [i_7] [i_1 - 2] [i_0] = var_11;
                    }
                    for (int i_12 = 0; i_12 < 23;i_12 += 1) /* same iter space */
                    {
                        arr_52 [i_0] [i_1] [i_7] [i_12] [i_12] = (((arr_7 [3] [i_1 - 1] [i_0]) * (arr_22 [i_12] [i_7] [i_7] [i_7] [i_12])));
                        var_31 ^= (arr_35 [i_1 + 1] [i_1 - 2] [i_1 - 1] [i_1 - 1] [i_1]);
                    }
                }
                arr_53 [i_0] [i_1 + 3] [i_7] = -504;
            }
            arr_54 [i_0] [i_0] [i_1] = ((var_0 >= (((-9223372036854775807 - 1) ? (arr_21 [i_1] [i_1] [i_1] [i_0] [i_0]) : (arr_5 [i_1 + 2] [i_0] [i_0])))));
        }

        for (int i_13 = 0; i_13 < 23;i_13 += 1)
        {
            var_32 = (118 + -128745371);
            arr_57 [17] [i_13] [i_13] = -96;
            var_33 = ((((max(119, -96))) >= var_14));
            arr_58 [i_13] = ((+(((arr_21 [i_0] [i_0] [i_13] [i_13] [i_13]) ? (arr_4 [4] [i_13]) : var_0))));
            arr_59 [i_13] [i_13] = (0 == 65535);
        }
        /* vectorizable */
        for (int i_14 = 0; i_14 < 23;i_14 += 1)
        {
            arr_62 [i_0] = ((2282050439553994588 ? -2982 : 32767));
            arr_63 [i_0] = 65970697666560;

            for (int i_15 = 0; i_15 < 23;i_15 += 1)
            {
                var_34 = ((arr_21 [i_0] [i_15] [i_15] [i_15] [i_0]) ? (arr_30 [i_14]) : var_15);
                arr_67 [i_15] [i_14] [i_15] [i_15] = var_4;
                arr_68 [12] [i_14] [i_15] [i_15] = (103 <= -65535);
                arr_69 [i_15] [i_14] [i_14] [i_0] = (((arr_21 [i_0] [i_0] [i_0] [i_0] [i_0]) > (arr_21 [i_15] [i_15] [i_14] [i_0] [9])));
            }
        }
        arr_70 [i_0] [i_0] = (!0);
    }
    var_35 = ((var_0 <= ((((max(var_14, -126))) ? var_8 : ((min(var_10, 5)))))));
    var_36 = (((((!((max(0, 127)))))) <= var_14));
    var_37 = ((((min(var_16, var_9))) ? var_9 : ((((min(67108864, var_18))) ? (14700162353149319139 > 121) : var_17))));
    #pragma endscop
}
