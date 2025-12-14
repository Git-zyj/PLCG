/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_4 [i_1] [i_1] = ((var_8 ? ((((arr_3 [i_0] [i_0] [i_1]) == var_1))) : (arr_1 [i_1] [i_1])));
            arr_5 [i_0] [i_1] = ((((-(arr_0 [i_1])))) ? ((779929646 ? (arr_1 [i_0] [i_1]) : var_3)) : ((var_12 ? 1 : 108)));
            var_15 = (arr_2 [i_0] [i_1]);
        }

        /* vectorizable */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_16 = var_13;
            arr_8 [i_0] = 4239301862;
            arr_9 [i_0] [i_0] = ((var_11 ? (arr_6 [i_0]) : (arr_7 [i_0])));
            /* LoopNest 3 */
            for (int i_3 = 1; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        {
                            var_17 = (min(var_17, (arr_10 [i_4 - 1] [i_2] [i_3 + 3] [i_4 - 1])));
                            var_18 = (min(var_18, -13072));
                            var_19 = ((var_13 >> (arr_10 [i_5] [1] [i_4] [i_3 + 2])));
                            var_20 = ((((67 ? 4391908205198439774 : -13072)) * var_3));
                            arr_16 [7] [i_2] [3] [i_3] [5] [i_5] = ((arr_14 [2] [i_4] [i_3] [i_4 + 1] [i_3 + 3]) ? var_9 : -67);
                        }
                    }
                }
            }
        }
        for (int i_6 = 2; i_6 < 9;i_6 += 1)
        {
            arr_19 [2] [i_0] = ((var_9 * (((-1 ? var_8 : 13072)))));
            var_21 = (((-((var_10 ? 13072 : (arr_0 [i_0]))))));
        }
        /* vectorizable */
        for (int i_7 = 4; i_7 < 11;i_7 += 1)
        {
            var_22 = (var_11 > -155072483);
            arr_23 [i_7] = (arr_18 [i_0] [i_0]);
            /* LoopNest 2 */
            for (int i_8 = 4; i_8 < 12;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 9;i_9 += 1)
                {
                    {
                        var_23 = (1 ? 15560097059640916877 : 2418359726);

                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            arr_31 [i_0] [1] [i_0] [i_7] [i_0] [4] [11] = (arr_30 [i_0] [i_7]);
                            arr_32 [i_0] [i_7] [i_7] [i_7] [i_8] [i_10] &= (arr_29 [i_8] [i_10] [i_10] [i_9 + 4] [6] [i_8]);
                        }
                        for (int i_11 = 0; i_11 < 13;i_11 += 1)
                        {
                            arr_35 [i_0] [i_7] [i_7] [i_9] = (-(!var_14));
                            var_24 = (-15023 + -13073);
                            var_25 += (!3235138207);
                        }
                        for (int i_12 = 0; i_12 < 13;i_12 += 1)
                        {
                            var_26 = ((!(arr_2 [i_8 - 2] [i_7 - 3])));
                            var_27 = -155072483;
                        }
                        var_28 = 15023;
                    }
                }
            }
            arr_39 [i_7] = (!var_2);

            for (int i_13 = 1; i_13 < 10;i_13 += 1)
            {
                var_29 += -31793;

                for (int i_14 = 0; i_14 < 13;i_14 += 1)
                {
                    arr_46 [i_14] [i_7] = (((((48 ? 258296127 : -13072))) ? -155072486 : (~-67)));
                    var_30 = 219;
                    arr_47 [i_7] [i_7 - 1] [i_7 - 1] [i_7] = ((-1202674617428350658 / (((13072 ? 4294967295 : 26124)))));
                }
                for (int i_15 = 0; i_15 < 13;i_15 += 1)
                {
                    var_31 = (((((108 - (arr_10 [i_0] [4] [i_13] [4])))) + 19));
                    var_32 = ((~(arr_25 [i_7] [i_7] [i_13 - 1] [i_15])));
                    var_33 = (min(var_33, 13071));

                    for (int i_16 = 0; i_16 < 13;i_16 += 1)
                    {
                        var_34 = (arr_43 [i_0] [i_7 - 4] [i_13] [i_15] [i_7]);
                        arr_52 [10] [i_7] [i_7] [1] [i_15] [i_16] = 61886;
                        var_35 = var_3;
                        var_36 = (min(var_36, -1988224624439418647));
                    }
                    for (int i_17 = 2; i_17 < 11;i_17 += 1)
                    {
                        var_37 = (arr_37 [i_15] [i_15] [i_15] [i_15]);
                        var_38 = (min(var_38, (arr_24 [i_0])));
                        arr_57 [i_7] [i_15] [i_13] [i_7] [i_7] = (arr_3 [i_17] [i_7] [i_0]);
                    }
                }
                for (int i_18 = 0; i_18 < 13;i_18 += 1)
                {
                    arr_62 [i_0] [i_13 - 1] [i_13] [i_0] [1] [i_7] = ((127 * ((var_14 ? var_6 : 51))));
                    var_39 &= -13085;
                    var_40 += ((!(var_0 || 2853068278)));
                }
                arr_63 [i_0] |= (((arr_59 [i_0] [i_13 + 3]) ? (arr_20 [i_7] [i_7 - 2] [i_13 + 3]) : 30141));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_19 = 0; i_19 < 11;i_19 += 1)
    {
        for (int i_20 = 0; i_20 < 11;i_20 += 1)
        {
            {
                var_41 = ((((3781912098 / (arr_21 [i_19] [i_19] [i_19]))) >> (min(18, 1541204332670278891))));
                var_42 = (!1);
            }
        }
    }
    #pragma endscop
}
