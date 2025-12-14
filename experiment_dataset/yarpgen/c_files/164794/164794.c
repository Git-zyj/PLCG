/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((var_7 * 0) ? var_3 : var_2));

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_13 += var_0;
                        var_14 = ((var_4 ? var_9 : (arr_1 [i_1 - 2])));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 18;i_5 += 1)
                {
                    {

                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            var_15 = ((0 ? 0 : (-127 - 1)));
                            var_16 = (((arr_1 [i_5 + 1]) ? (arr_1 [i_5 - 1]) : (arr_1 [i_5 + 1])));
                            var_17 -= (arr_5 [i_1] [i_1 + 2] [13]);
                        }

                        for (int i_7 = 4; i_7 < 15;i_7 += 1)
                        {
                            var_18 = (min(var_18, 1));
                            arr_23 [i_0] [5] [5] [i_5] [1] [i_0] [i_0] = (((arr_18 [i_5 + 1] [i_5 + 1] [i_7] [i_7] [i_7] [i_7] [i_7 + 4]) ? (arr_5 [i_1 - 1] [i_5 - 1] [i_7 + 1]) : var_5));
                            var_19 = (max(var_19, ((!(arr_20 [i_1] [i_1 - 1] [9] [3] [3])))));
                            var_20 = ((var_8 ? (arr_6 [i_4] [i_5 - 1] [i_5]) : var_8));
                        }
                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            var_21 = ((0 ? 2612118283 : 3435708410583176401));
                            var_22 = (max(var_22, (((var_11 ? var_10 : (arr_22 [i_0] [i_1] [i_4]))))));
                        }
                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            var_23 &= (!var_9);
                            var_24 = ((arr_18 [i_0] [i_0] [4] [i_0 - 1] [i_1 + 1] [4] [i_5 - 1]) << (var_7 - 2421752491));
                            arr_31 [8] [6] [8] [15] = (~6651330447305170621);
                        }
                        var_25 = var_6;
                        var_26 = (18446744073709551615 ? (arr_24 [i_0 + 1] [i_0 + 1] [i_0 - 2] [i_0 - 3] [i_0 - 3]) : (arr_5 [i_0] [i_0 - 1] [i_0]));
                    }
                }
            }
        }
        var_27 = ((!(var_2 && var_3)));
        var_28 = ((!(((((min(var_1, var_9))) ? (arr_27 [i_0] [i_0] [i_0] [i_0] [i_0 - 3] [6] [i_0 - 2]) : var_5)))));
    }

    /* vectorizable */
    for (int i_10 = 0; i_10 < 23;i_10 += 1)
    {
        arr_35 [i_10] [2] = ((var_7 ? var_5 : var_11));
        var_29 = (!var_3);

        for (int i_11 = 0; i_11 < 23;i_11 += 1)
        {
            arr_40 [i_10] [19] [i_10] = var_5;
            var_30 = 1;
            var_31 = (((arr_37 [i_10] [i_10] [i_11]) ? (arr_37 [i_11] [i_10] [i_10]) : (arr_37 [i_10] [i_11] [i_10])));
        }
        for (int i_12 = 1; i_12 < 20;i_12 += 1)
        {

            for (int i_13 = 0; i_13 < 23;i_13 += 1)
            {

                for (int i_14 = 0; i_14 < 23;i_14 += 1)
                {
                    arr_49 [i_10] [i_13] [i_14] &= ((9 ? (arr_36 [13] [i_12 + 2]) : 0));
                    var_32 = (((arr_48 [i_12] [i_12] [8]) ? var_0 : var_5));
                    var_33 = (((!268435455) | var_2));
                }

                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    var_34 = ((((((arr_46 [i_10] [i_10] [i_10] [i_10]) ? var_2 : (arr_45 [i_15] [i_13] [i_12 - 1] [i_10])))) ? (~var_3) : (arr_39 [i_10] [i_12 - 1])));
                    var_35 = (max(var_35, (((var_11 ? (var_4 != var_9) : ((-864066930 ? 18446744073709551608 : 1)))))));
                    var_36 = ((var_11 ? var_6 : (arr_47 [i_12 + 3] [i_12 + 1] [i_12 - 1] [5] [i_10] [i_10])));

                    for (int i_16 = 0; i_16 < 23;i_16 += 1)
                    {
                        var_37 &= var_4;
                        var_38 -= (!(arr_48 [i_15] [i_12 + 2] [i_12]));
                    }
                    for (int i_17 = 0; i_17 < 23;i_17 += 1)
                    {
                        arr_59 [1] [i_10] [i_10] [i_10] [i_10] [9] = (~var_7);
                        arr_60 [i_12] [i_12] [i_12] [i_15] [i_17] [i_17] [i_13] = (-(!var_9));
                    }
                }
                for (int i_18 = 0; i_18 < 23;i_18 += 1)
                {
                    var_39 = (min(var_39, var_8));
                    var_40 = (min(var_40, (((var_3 ? var_10 : var_1)))));
                    var_41 *= ((!(arr_39 [i_10] [i_10])));
                }
            }
            var_42 = (min(var_42, var_11));
            var_43 = (min(var_43, var_3));
            var_44 = ((1107184470 ? var_1 : 79));
        }
    }
    var_45 = var_1;
    #pragma endscop
}
