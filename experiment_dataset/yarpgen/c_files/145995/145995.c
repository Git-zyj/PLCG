/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_16, ((((((var_13 ? 9732070580938441301 : 0))) ? var_8 : -1423052670)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1 - 1] = (((-(arr_0 [i_0 + 1]))));
                arr_5 [i_0 - 1] [3] [i_1] = (min((max((max(9732070580938441301, var_0)), var_10)), (((((8714673492771110315 ? 130816 : 0)) / ((max(var_13, var_7))))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_19 = -23835;
        var_20 = ((~((min(23851, (arr_8 [i_2]))))));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 16;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            arr_15 [i_3] = ((~(arr_11 [i_3 + 2] [i_3 + 2])));
            /* LoopNest 2 */
            for (int i_5 = 2; i_5 < 17;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        var_21 = -12496495117846338949;
                        arr_22 [i_6] [1] [1] [1] = var_8;
                        var_22 = -var_7;
                    }
                }
            }
            arr_23 [i_4] = (((((9732070580938441321 ? 17128157372081343000 : var_4))) ? var_5 : (9732070580938441301 + 253)));
            var_23 = -90;
        }
        for (int i_7 = 2; i_7 < 16;i_7 += 1)
        {
            var_24 = (((arr_11 [i_3 + 2] [i_3 + 3]) ? (arr_11 [i_3 - 1] [i_3 + 1]) : var_15));
            var_25 = (((var_11 + 9223372036854775807) << (((arr_26 [i_7 + 1]) - 3624369942))));
            var_26 = ((-(~15)));
            var_27 = (~var_14);
        }
        var_28 = (max(var_28, ((((arr_2 [10]) | (arr_2 [2]))))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 18;i_9 += 1)
            {
                {
                    arr_31 [i_3 + 3] [i_3 + 3] [i_3 - 1] [i_3 + 3] = (((((arr_12 [i_3 + 1] [i_3 + 1] [i_3]) + 2147483647)) << (((((arr_21 [i_8] [i_3 + 1] [i_9 - 1]) + 8741)) - 31))));
                    arr_32 [i_8] [i_9 - 1] = (((((9732070580938441315 ? 136 : 0))) ? (arr_26 [i_9 - 1]) : (arr_17 [i_3 + 3] [i_3 + 1] [i_3 + 1] [i_3 + 1])));
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 23;i_10 += 1)
    {
        var_29 = (-((var_0 ? (arr_33 [i_10] [i_10]) : (arr_33 [i_10] [i_10]))));
        arr_35 [i_10] = (max(218, (arr_33 [i_10] [i_10])));
    }

    /* vectorizable */
    for (int i_11 = 0; i_11 < 13;i_11 += 1)
    {
        arr_39 [i_11] = ((+(((arr_8 [i_11]) ? var_3 : var_8))));
        var_30 = (~var_16);
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 22;i_12 += 1)
    {
        arr_42 [i_12] [i_12] = ((-(arr_33 [i_12] [i_12])));
        /* LoopNest 2 */
        for (int i_13 = 3; i_13 < 19;i_13 += 1)
        {
            for (int i_14 = 2; i_14 < 21;i_14 += 1)
            {
                {

                    for (int i_15 = 1; i_15 < 21;i_15 += 1)
                    {
                        arr_52 [i_12] [i_12] [i_15] = -17214952000466547528;
                        var_31 = (((arr_34 [i_13 + 3]) ? (arr_34 [i_13 - 1]) : (arr_34 [i_13 + 2])));
                    }
                    arr_53 [i_12] [i_13 + 1] [i_12] = ((-126 ? ((var_15 ? -85 : 2391592430)) : ((((var_9 && (arr_34 [i_12])))))));
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 22;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 22;i_17 += 1)
                        {
                            {
                                var_32 = -32765;
                                arr_58 [i_12] [i_13 - 2] [i_12] = (var_8 / 126);
                                var_33 = (((arr_33 [i_13 + 2] [i_14 - 1]) ? (var_0 * var_7) : (arr_40 [i_13 - 3])));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_18 = 0; i_18 < 1;i_18 += 1)
    {
        var_34 += ((!(arr_62 [i_18])));
        arr_63 [i_18] = (-((~((1 ? -120 : var_6)))));
        arr_64 [i_18] = (((((((var_3 ? var_1 : 1684876000))) ? ((var_7 ? (arr_59 [20]) : var_5)) : (((var_12 << (((arr_62 [i_18]) - 712850289))))))) % ((((((-1172632193 ? var_8 : (arr_61 [i_18] [i_18])))) ? -var_14 : (arr_60 [i_18] [i_18]))))));
    }
    #pragma endscop
}
