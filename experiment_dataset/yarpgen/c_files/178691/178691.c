/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178691
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_11 = (~-1);

                    for (int i_3 = 2; i_3 < 14;i_3 += 1) /* same iter space */
                    {
                        arr_11 [i_2] = ((-(min((arr_5 [i_2] [i_3] [i_2]), 242))));
                        var_12 = (i_2 % 2 == 0) ? ((min((((-(arr_9 [i_3 + 3] [i_3 + 2] [i_3 - 2] [i_3])))), ((1 >> (((arr_10 [i_2] [i_3]) - 40))))))) : ((min((((-(arr_9 [i_3 + 3] [i_3 + 2] [i_3 - 2] [i_3])))), ((1 >> (((((arr_10 [i_2] [i_3]) - 40)) + 88)))))));
                    }
                    for (int i_4 = 2; i_4 < 14;i_4 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_5 = 2; i_5 < 16;i_5 += 1)
                        {
                            var_13 = ((32768 + ((1 >> (var_4 - 222)))));
                            var_14 = 18446744073709551615;
                        }
                        for (int i_6 = 3; i_6 < 14;i_6 += 1)
                        {
                            arr_18 [i_0] [i_1] [i_0] [i_2] [i_2] = (min((arr_16 [i_0] [i_1] [i_1] [i_0] [8] [i_2]), (1 * var_0)));
                            var_15 = (min(((max(var_5, (((var_0 + 9223372036854775807) << (4294967291 - 4294967291)))))), (max(4294967291, 0))));
                            var_16 = (min(var_16, (arr_6 [11] [i_2] [11])));
                            var_17 -= (arr_9 [i_0] [i_1] [i_1] [i_1]);
                        }
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            var_18 = 255;
                            var_19 = -1;
                            var_20 = 0;
                        }
                        for (int i_8 = 2; i_8 < 16;i_8 += 1)
                        {
                            var_21 = (((((arr_20 [12] [12]) | (min(var_5, 18446744073709551615)))) ^ (arr_20 [i_0] [i_0])));
                            var_22 -= 18446744073709551615;
                            var_23 = (~-1);
                        }
                        var_24 = ((!(~2)));
                    }
                    for (int i_9 = 2; i_9 < 14;i_9 += 1) /* same iter space */
                    {
                        var_25 = (min(var_25, var_9));
                        var_26 = max((arr_21 [i_0] [i_1] [i_2] [i_2] [i_9]), ((((65535 + var_2) / var_3))));
                    }
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        var_27 = (~32767);

                        for (int i_11 = 1; i_11 < 16;i_11 += 1)
                        {
                            var_28 -= ((!((min(var_7, 3)))));
                            arr_34 [i_1] [i_2] [i_1] [i_10] [i_10] = (((~18446744073709551615) <= var_7));
                        }
                        for (int i_12 = 2; i_12 < 14;i_12 += 1)
                        {
                            var_29 -= (max(((max(8, (((0 || (arr_26 [i_0]))))))), (max(var_1, (-9223372036854775807 - 1)))));
                            var_30 -= ((-((0 << (2147483647 - 2147483643)))));
                            var_31 -= var_7;
                        }
                        for (int i_13 = 4; i_13 < 14;i_13 += 1)
                        {
                            arr_41 [i_13 + 3] [i_2] [i_2] [i_2] [i_0] = 32768;
                            arr_42 [i_13] [i_2] [i_2] [i_2] [i_0] = var_4;
                            var_32 = ((-(((min(var_6, 4294967295)) & (arr_23 [i_13 + 2] [i_2] [i_2] [i_1 + 1] [i_2] [i_1] [i_1])))));
                        }
                    }
                    var_33 = ((116 || (-9223372036854775807 - 1)));
                    arr_43 [i_2] = (var_4 > var_3);
                    arr_44 [i_2] = var_5;
                }
            }
        }
        arr_45 [i_0] [0] = (arr_33 [i_0] [i_0] [i_0] [i_0] [i_0]);
        var_34 = arr_31 [i_0] [i_0];
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 17;i_14 += 1)
        {
            for (int i_15 = 2; i_15 < 15;i_15 += 1)
            {
                {
                    arr_50 [i_0] [i_14] = (max((((-(var_1 <= var_0)))), (((4194048 % var_1) ^ (((arr_49 [i_15]) * 1))))));
                    var_35 = 9223372036854775807;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 17;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 17;i_17 += 1)
            {
                {
                    arr_55 [i_17] [i_17] [i_17] = (min(var_10, (~var_5)));
                    var_36 -= ((~(((!(arr_40 [i_16] [i_16] [i_16] [i_16] [i_0] [i_0]))))));
                    var_37 = 1;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_18 = 0; i_18 < 17;i_18 += 1) /* same iter space */
    {
        arr_59 [i_18] [i_18] = (~(~0));
        /* LoopNest 2 */
        for (int i_19 = 3; i_19 < 16;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 17;i_20 += 1)
            {
                {
                    var_38 = arr_25 [i_19 - 1] [i_19 - 2] [i_19 - 2] [i_19 - 3];
                    arr_67 [i_20] [0] [10] [5] = (arr_49 [i_18]);
                }
            }
        }
        var_39 -= (~18446744073709551598);
        arr_68 [i_18] [i_18] = (((18446744073709551601 <= (arr_64 [9] [3] [i_18] [i_18]))));
        var_40 -= var_0;
    }
    var_41 = max(var_2, (((((max(var_4, 1))) < 0))));
    #pragma endscop
}
