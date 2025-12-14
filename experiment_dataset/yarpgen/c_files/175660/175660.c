/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (~1);
    var_16 = (max(var_16, var_0));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_17 = ((((((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [19]) : (arr_1 [i_0] [i_0])))) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))) * (arr_1 [i_0] [i_0])));
        arr_2 [i_0] = ((((((((max(1, 1)))) * (-3252722938387420724 * 1)))) ? (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))) : ((((!var_12) * (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : 1)))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 = var_0;
                    var_19 = (((!((((arr_3 [1] [1] [i_1 - 1]) * 1))))));
                    var_20 = 1;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_17 [i_3] [17] [i_3] [2] &= (13992 * var_2);
                        var_21 = (arr_1 [i_4] [i_4]);
                    }
                    var_22 = (((~var_8) ? 1 : (min(var_7, (arr_6 [i_3])))));
                }
            }
        }
        var_23 = (max(var_23, (arr_4 [15])));
    }
    for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
    {
        var_24 = ((+(min(((1 ? (arr_18 [i_6]) : 1)), ((max(23130, (arr_18 [i_6]))))))));
        var_25 = (max(((-(arr_18 [i_6]))), ((var_4 * (arr_18 [i_6])))));
        var_26 = ((60814 ? (~1) : ((min(60815, (arr_19 [i_6]))))));
    }
    for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
    {
        var_27 = (min(-26, (((((7706587890178469781 ? 0 : var_0))) * 1048575))));
        arr_22 [6] |= (arr_20 [i_7]);
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        var_28 = (var_8 * 7706587890178469798);

        /* vectorizable */
        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            var_29 = (arr_4 [i_8]);
            var_30 = (min(var_30, (arr_16 [i_8] [1] [1] [19] [1] [1])));
            /* LoopNest 2 */
            for (int i_10 = 3; i_10 < 12;i_10 += 1)
            {
                for (int i_11 = 3; i_11 < 14;i_11 += 1)
                {
                    {
                        var_31 = (min(var_31, ((((var_12 ? 1 : (arr_0 [i_8])))))));
                        var_32 = (max(var_32, (!var_11)));
                    }
                }
            }
        }
        for (int i_12 = 1; i_12 < 15;i_12 += 1)
        {

            /* vectorizable */
            for (int i_13 = 0; i_13 < 16;i_13 += 1)
            {

                for (int i_14 = 0; i_14 < 16;i_14 += 1) /* same iter space */
                {

                    for (int i_15 = 0; i_15 < 16;i_15 += 1)
                    {
                        var_33 = (((arr_44 [i_8] [i_8] [i_8] [1] [i_12 + 1]) * (arr_36 [i_12 - 1] [i_12 + 1] [1])));
                        var_34 = ((((((arr_1 [i_13] [1]) * (arr_1 [i_8] [i_8])))) * (arr_36 [i_13] [i_13] [i_12 + 1])));
                        var_35 = (max(var_35, ((((arr_42 [i_12 - 1] [10] [i_12 + 1] [i_12] [i_12 + 1]) * (arr_9 [i_12 - 1] [i_12 + 1]))))));
                        var_36 = (-(arr_15 [i_8] [i_8] [1] [1] [i_12 + 1]));
                        var_37 = var_7;
                    }
                    var_38 = (((arr_10 [i_12 + 1] [i_12 + 1]) * 60815));
                }
                for (int i_16 = 0; i_16 < 16;i_16 += 1) /* same iter space */
                {
                    var_39 = (min(var_39, ((((arr_1 [i_12] [11]) * (arr_13 [i_12 + 1] [i_12 - 1] [i_12 + 1] [i_12] [i_12]))))));
                    var_40 += 186;
                    var_41 = (-82 * 123);
                }
                var_42 = ((-(arr_16 [i_12 + 1] [i_12 + 1] [i_12] [i_12 - 1] [1] [i_12])));
            }
            /* vectorizable */
            for (int i_17 = 1; i_17 < 14;i_17 += 1)
            {
                arr_51 [i_17 - 1] [i_12] [i_12] [i_8] = (-101 * (arr_12 [i_8] [i_8]));
                var_43 = (max(var_43, ((((arr_11 [i_8] [i_12 - 1] [i_17] [1]) * 0)))));
            }
            for (int i_18 = 0; i_18 < 16;i_18 += 1) /* same iter space */
            {
                var_44 += ((!(((0 ? ((var_9 * (arr_13 [i_8] [i_8] [i_12] [i_12] [i_8]))) : var_7)))));
                var_45 = (arr_32 [i_18] [i_18]);
                var_46 = (max(var_46, (((~(max((65523 * -1), ((min(var_0, (arr_3 [i_8] [i_12] [i_18])))))))))));
            }
            for (int i_19 = 0; i_19 < 16;i_19 += 1) /* same iter space */
            {
                var_47 |= ((((!((max(var_11, var_11))))) ? var_3 : ((65535 ? (arr_38 [i_12] [i_12 + 1] [i_12] [i_12 + 1]) : (((arr_29 [i_8] [i_8] [10]) ? 53886 : var_14))))));
                var_48 = (min(var_48, (((((arr_9 [i_12 + 1] [i_12 + 1]) * (arr_9 [i_12 - 1] [i_12 + 1])))))));
            }
            var_49 += ((-4954832187691170309 / (~1)));
        }
        for (int i_20 = 2; i_20 < 12;i_20 += 1)
        {
            var_50 = (min(var_50, 11655));
            var_51 = ((((((!(((4093659533 * (arr_27 [i_8] [i_8])))))))) * (max((max(var_3, (arr_10 [i_8] [3]))), ((((arr_13 [20] [16] [8] [i_20 + 3] [i_20 - 1]) * var_1)))))));
            var_52 += (~var_14);
        }
        /* LoopNest 3 */
        for (int i_21 = 1; i_21 < 1;i_21 += 1)
        {
            for (int i_22 = 4; i_22 < 15;i_22 += 1)
            {
                for (int i_23 = 0; i_23 < 16;i_23 += 1)
                {
                    {
                        arr_67 [i_8] [i_22 - 1] [i_21] = max(((+(((arr_37 [i_8] [i_21] [i_21]) * 4954832187691170309)))), (((!(arr_33 [i_21] [1] [1])))));
                        var_53 = (max((((arr_10 [i_8] [i_8]) * -4954832187691170326)), (32768 * var_7)));

                        for (int i_24 = 0; i_24 < 16;i_24 += 1)
                        {
                            var_54 = (min((((arr_37 [i_23] [i_23] [i_22]) * (~var_4))), (!var_1)));
                            var_55 = (max(var_55, 11654));
                        }
                    }
                }
            }
        }
        var_56 |= ((+(max((!1), (-4954832187691170331 / var_6)))));
    }
    var_57 = 57;
    #pragma endscop
}
