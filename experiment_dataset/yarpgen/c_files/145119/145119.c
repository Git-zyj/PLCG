/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_7 [1] [i_1] = var_10;

            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                var_13 *= ((var_6 ? -26797 : var_3));
                var_14 ^= (arr_0 [i_2]);

                for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
                {

                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        var_15 = var_3;
                        arr_17 [i_4] [i_4] [0] [i_2] [i_1] [i_0] = -390484467;
                        var_16 = 341693144;
                        arr_18 [i_4] [i_3] [i_1] [i_0] = (~49);
                        arr_19 [i_4] [i_3] [i_2] [i_1] = -390484467;
                    }
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        var_17 = (((arr_23 [i_0] [i_1] [1] [i_3] [i_5]) ? var_11 : 18446744073709551615));
                        var_18 = 44;
                        arr_24 [i_0] [i_0] = (~70);
                        var_19 = (arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                        var_20 = 1;
                    }

                    for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
                    {
                        var_21 = (max(var_21, ((((arr_0 [i_0]) ? var_4 : (arr_6 [i_3]))))));
                        var_22 = (arr_5 [i_0]);
                    }
                    for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
                    {
                        var_23 ^= var_10;
                        var_24 = -1493432872;
                    }

                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        var_25 = 3189976125964119942;
                        arr_33 [i_0] [i_0] [i_2] [1] [i_8] = var_12;
                    }
                }
                for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
                {
                    var_26 = (max(var_26, -240));
                    arr_37 [i_9] [i_2] [i_2] [i_1] [i_1] [i_9] = ((390484451 ? -390484460 : 1));
                    var_27 = (((var_5 ? 6239777687281047709 : var_6)));
                }

                for (int i_10 = 1; i_10 < 1;i_10 += 1)
                {

                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        arr_44 [i_10] [i_11] [i_11] [i_0] = ((-((var_7 ? -390484492 : var_8))));
                        var_28 = -2147483647;
                        var_29 = var_2;
                    }
                    for (int i_12 = 3; i_12 < 15;i_12 += 1)
                    {
                        var_30 = 390484450;
                        arr_47 [i_0] [i_1] [i_2] [i_10] = 20729;
                        var_31 = (min(var_31, -1059732033749231594));
                        var_32 = 23137;
                        var_33 = -var_6;
                    }
                    arr_48 [i_10] [1] [1] = -11;
                    var_34 = (arr_39 [i_10 - 1] [i_1] [i_0]);
                }
            }

            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                var_35 &= (arr_38 [i_0] [i_0] [i_0] [i_0] [i_0]);

                for (int i_14 = 1; i_14 < 18;i_14 += 1)
                {
                    arr_55 [i_14] [i_13] [i_1] [i_1] [i_13] [i_0] = (arr_42 [0] [0] [i_13] [i_13] [4]);

                    for (int i_15 = 0; i_15 < 19;i_15 += 1)
                    {
                        var_36 = (!390484450);
                        var_37 = (arr_1 [i_15]);
                    }

                    for (int i_16 = 0; i_16 < 19;i_16 += 1)
                    {
                        var_38 = (var_7 ? var_11 : 11);
                        var_39 = (arr_58 [i_16] [17] [i_13] [i_0] [i_1] [i_0]);
                        var_40 = 2097152;
                        arr_61 [i_13] [i_14] [i_13] = var_8;
                    }
                    for (int i_17 = 4; i_17 < 18;i_17 += 1)
                    {
                        arr_64 [i_13] [i_1] [i_1] [i_14] [1] = var_3;
                        arr_65 [i_13] [i_1] [i_13] [i_13] [i_13] = (!var_10);
                    }
                }

                for (int i_18 = 0; i_18 < 19;i_18 += 1)
                {
                    arr_68 [2] [i_1] [i_1] [i_13] [1] [i_13] = -6390758689666955846;

                    for (int i_19 = 0; i_19 < 19;i_19 += 1)
                    {
                        var_41 = (min(var_41, 42));
                        var_42 = (arr_66 [i_19] [i_18]);
                        arr_71 [i_0] [i_1] [6] [i_13] [12] [i_1] [7] = var_0;
                        var_43 = 1;
                    }
                    for (int i_20 = 4; i_20 < 17;i_20 += 1)
                    {
                        arr_74 [i_0] [i_13] [i_1] [i_13] [i_18] [i_20] = var_6;
                        arr_75 [i_20 - 2] [i_18] [i_13] [i_13] [i_0] [i_0] = ((var_6 ? var_11 : (~0)));
                    }
                    for (int i_21 = 0; i_21 < 19;i_21 += 1)
                    {
                        var_44 = 1;
                        var_45 &= (arr_14 [i_18] [i_13] [i_1]);
                    }
                    for (int i_22 = 0; i_22 < 1;i_22 += 1)
                    {
                        var_46 = (arr_58 [i_1] [i_1] [i_13] [i_18] [i_22] [i_0]);
                        var_47 = 1;
                    }
                }
            }
        }
        var_48 = (((-5161519521071118613 ? 1772297785 : 58551)));
        var_49 = (arr_62 [i_0] [i_0] [i_0] [i_0] [i_0]);
    }
    var_50 = 2776912569;
    #pragma endscop
}
