/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += ((!((((((var_3 ? var_6 : var_13))) ? (max(39076, var_12)) : (((var_11 ? -1561535692 : var_4))))))));

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_21 = max(var_6, ((-1592677811 ? 1561535687 : 1561535692)));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_22 = (max((min(((var_18 ? var_0 : 602631455)), (max(-1561535692, var_17)))), (((var_6 ? var_5 : var_16)))));
            var_23 = var_9;
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        {
                            var_24 = ((~(((arr_7 [i_0 + 1] [i_0 - 1] [i_0]) ? -var_5 : ((max(-1561535688, (arr_4 [i_0] [i_0] [i_0]))))))));
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_3] [i_3] [i_4] = (max((max((((arr_1 [9]) ? var_17 : var_2)), 173352352)), ((max((!var_16), -108)))));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_5 = 1; i_5 < 16;i_5 += 1)
        {
            var_25 = (max(var_25, (((var_10 ? (~var_15) : (var_19 - 124))))));
            var_26 = -205413263;
            arr_19 [i_0] [i_0] [14] = (((arr_15 [i_0 - 2] [i_0 - 2] [i_5 - 1] [i_5 + 1]) | (17483694672565362271 / -1561535676)));
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    {
                        arr_25 [i_0] [i_6] [i_5] [i_0] = ((-(arr_14 [i_5 + 1] [i_0])));
                        arr_26 [i_0] [i_0] [i_7] [i_6] [i_7] &= (((arr_24 [i_0 + 1] [i_5] [i_5 - 1] [i_5] [i_6 - 1]) ? (arr_18 [i_6]) : -17483694672565362298));

                        for (int i_8 = 1; i_8 < 14;i_8 += 1) /* same iter space */
                        {
                            var_27 = (var_18 == var_4);
                            var_28 = (arr_9 [i_0 - 3] [i_5 - 1] [i_5 + 1]);
                            arr_31 [i_0] [12] [12] [12] [i_7] [i_8] = ((!(var_13 || 35777)));
                            arr_32 [i_0] [i_0] [i_6] [i_7] [i_8 - 1] = (arr_0 [i_0]);
                        }
                        for (int i_9 = 1; i_9 < 14;i_9 += 1) /* same iter space */
                        {
                            var_29 = (i_0 % 2 == zero) ? ((((arr_7 [i_6 - 1] [i_9 + 4] [i_0]) << (((arr_4 [i_0] [i_0] [i_9 + 1]) - 40614))))) : ((((arr_7 [i_6 - 1] [i_9 + 4] [i_0]) << (((((arr_4 [i_0] [i_0] [i_9 + 1]) - 40614)) - 10652)))));
                            var_30 = (max(var_30, (((var_0 ? (arr_9 [i_5 + 1] [i_5 + 1] [i_9 + 1]) : var_0)))));
                            arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = 1136540611;
                            arr_36 [i_0] [i_0] [i_6] [i_6] [i_0] [i_9] = (((arr_5 [i_5 + 2] [i_5 + 2] [12]) ? var_4 : var_4));
                            var_31 = 145;
                        }
                        for (int i_10 = 1; i_10 < 14;i_10 += 1) /* same iter space */
                        {
                            var_32 = 40680;
                            arr_40 [i_0] [i_0] [i_0] [4] = (arr_4 [i_0] [i_10 + 4] [i_0]);
                            var_33 = var_15;
                            arr_41 [i_0] [i_0] = ((arr_0 [i_0]) ? (arr_30 [i_0 - 2] [i_10 + 4] [i_10 + 4] [i_10] [i_10] [i_10] [1]) : var_3);
                            arr_42 [6] [6] [i_6] [i_0] [i_0] [6] = ((-1872596750 ? 65 : 173352358));
                        }
                        for (int i_11 = 1; i_11 < 14;i_11 += 1) /* same iter space */
                        {
                            var_34 = ((~((16107 ? var_15 : (arr_23 [5] [i_5] [i_5] [i_6] [i_6] [i_11])))));
                            arr_46 [i_0] [i_0] [i_0] [i_7] [i_0] = var_7;
                        }

                        for (int i_12 = 0; i_12 < 18;i_12 += 1)
                        {
                            arr_50 [i_0 - 3] [i_0 - 3] [i_0] [8] [8] [i_0] [i_0] = var_11;
                            arr_51 [i_0] [i_7] [i_6 - 1] [i_5] [i_0] = var_8;
                            var_35 = (((((var_1 ? var_10 : var_0))) ? 49429 : ((-1872596736 ? -414599966 : 1561535713))));
                        }
                    }
                }
            }
        }
        arr_52 [i_0] = (max((max((arr_14 [i_0 + 1] [i_0]), (var_19 < var_3))), (((~(217 || 963049401144189319))))));
        arr_53 [i_0] = (~13961500252511613228);

        /* vectorizable */
        for (int i_13 = 1; i_13 < 16;i_13 += 1)
        {
            arr_57 [i_0] [i_0] [i_0] = (arr_10 [i_0 - 2]);
            var_36 = ((~((592626626 ? var_0 : 63))));
            var_37 = (arr_6 [i_0]);
        }
        for (int i_14 = 3; i_14 < 15;i_14 += 1) /* same iter space */
        {
            arr_61 [i_0] = (((((-(84 * var_15)))) ? 29928 : (max(var_13, var_12))));
            var_38 = (min((var_4 - var_7), var_7));
            arr_62 [i_0] = (((((-((4232115100 ? 53397 : var_10))))) ? ((min(64816, 84))) : ((((arr_1 [i_0]) >= (arr_33 [i_0] [i_0] [i_14] [13] [i_14 - 1] [i_14] [i_14 - 1]))))));
            var_39 = (((((var_16 ? var_19 : (arr_22 [i_0 + 1] [i_0 - 2] [i_0] [i_0 + 1]))) ? var_3 : -var_5)));
        }
        /* vectorizable */
        for (int i_15 = 3; i_15 < 15;i_15 += 1) /* same iter space */
        {
            var_40 = 12201;
            arr_65 [i_0] [i_0] = ((var_0 ? var_11 : (arr_49 [i_0 - 2] [i_0] [i_0] [i_15] [i_15 + 2])));
        }
    }
    for (int i_16 = 0; i_16 < 11;i_16 += 1)
    {
        var_41 = (max((arr_64 [i_16] [i_16]), (((((-1653026034 ? -2729877595636796348 : var_4))) ? 1630404587 : 64816))));
        arr_69 [7] [7] = 1561535720;
    }
    /* vectorizable */
    for (int i_17 = 1; i_17 < 22;i_17 += 1)
    {
        var_42 = (min(var_42, (((arr_71 [i_17 + 1]) / (arr_72 [i_17 - 1])))));
        arr_73 [i_17] [i_17] = ((80 ? (arr_72 [i_17 + 1]) : 65440));
    }
    var_43 = 24868;
    #pragma endscop
}
