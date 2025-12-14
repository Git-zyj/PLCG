/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_18 = ((!(((((arr_5 [i_1 + 3]) ? -69 : (arr_5 [i_1])))))));
                    var_19 += ((~((-(arr_1 [i_1 + 1] [i_1])))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        arr_10 [i_1] [i_2] = (((var_1 ? 37 : (arr_2 [i_1]))));
                        var_20 = (max(var_20, ((((arr_1 [i_0] [i_0]) > (!37))))));
                        var_21 = (min(var_21, ((((arr_4 [7] [7] [7]) ? 1 : (arr_4 [i_0] [i_1] [i_2]))))));
                        arr_11 [1] = -32;
                        arr_12 [i_1] = (arr_3 [i_1 + 4] [i_1 + 4] [2]);
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    var_22 = (((-41 % 1) ? (arr_5 [i_0]) : ((var_15 ? -188084819 : (arr_18 [i_0] [i_0] [i_0] [4])))));
                    arr_21 [i_0] [i_4] [i_5] [i_4] = (((arr_9 [2] [i_5]) ? ((2147483647 ? 93 : 39)) : (arr_15 [i_0] [i_0] [i_6])));
                    arr_22 [i_0] [i_0] [i_0] [i_0] [3] [i_0] = (~((9282871 ? (arr_8 [i_0] [i_4] [15] [i_6]) : (arr_13 [i_0] [i_4] [i_4]))));
                    arr_23 [i_5] [i_5] [i_5] = (arr_14 [i_5] [i_4]);
                }
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    var_23 += ((~(arr_4 [0] [4] [4])));
                    arr_27 [7] [7] [i_5] [7] [i_0] = (arr_7 [i_5] [11] [11]);
                }
                var_24 = -42;
                arr_28 [i_0] [i_0] [7] = 4;
            }
            for (int i_8 = 3; i_8 < 16;i_8 += 1)
            {
                arr_31 [i_8 - 3] [i_8] = var_5;
                arr_32 [5] [i_8] = (~16944584752007398277);
                arr_33 [i_0] [i_8] [i_0] [i_8] = var_2;
            }
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                var_25 += (arr_29 [i_0] [i_4] [i_9]);
                arr_37 [i_9] [i_9] [i_9] [i_9] = arr_4 [i_0] [i_4] [i_0];
            }

            for (int i_10 = 3; i_10 < 13;i_10 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_11 = 2; i_11 < 14;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 17;i_12 += 1)
                    {
                        {
                            arr_46 [i_10] = (arr_15 [i_10 + 1] [i_10 - 1] [i_10 - 2]);
                            var_26 = -17;
                            arr_47 [i_10] [i_4] [i_4] [i_4] [14] [14] [i_4] = arr_15 [i_0] [i_4] [i_0];
                            arr_48 [i_10] [i_4] [i_10] = var_2;
                        }
                    }
                }
                arr_49 [i_0] [i_0] [i_10] = (arr_36 [i_0]);
            }
            for (int i_13 = 3; i_13 < 13;i_13 += 1) /* same iter space */
            {
                var_27 += (((((1 ? (arr_24 [i_0] [2] [4] [2] [0]) : (arr_38 [i_13] [i_0] [i_0])))) ? (((arr_51 [i_0] [i_13 + 3]) ? 1 : (arr_2 [i_0]))) : ((-62 ? 118 : 77))));
                var_28 = -94;
            }
            for (int i_14 = 3; i_14 < 13;i_14 += 1) /* same iter space */
            {
                arr_55 [i_14] [i_14] [i_14] = (((arr_45 [i_0]) ? ((48121 ? (arr_6 [i_0]) : (arr_15 [i_0] [10] [10]))) : ((-79 ? 1 : (arr_26 [i_0] [i_0] [i_0] [8])))));
                arr_56 [i_14] = (arr_6 [1]);
            }
            for (int i_15 = 3; i_15 < 13;i_15 += 1) /* same iter space */
            {
                var_29 = (((arr_8 [i_0] [i_0] [i_4] [i_0]) ? (!35) : ((108 ? var_15 : (arr_15 [i_4] [i_4] [i_4])))));
                var_30 = ((((((arr_34 [i_0]) ? (arr_38 [i_0] [i_15] [6]) : 956288092))) ? (!2712) : (!40)));
            }
        }
        var_31 += ((!((!(arr_41 [i_0] [5] [i_0] [5])))));
        arr_59 [i_0] = (arr_52 [i_0] [i_0] [i_0] [i_0]);
        arr_60 [15] = (((((((((arr_13 [9] [6] [9]) ? (arr_19 [i_0] [0] [i_0] [i_0] [10] [i_0]) : 39))) ? 58 : ((((arr_35 [i_0] [i_0] [i_0]) == 1781239842010982425)))))) ? (arr_39 [i_0]) : ((101 ? -1 : 4096))));
    }
    /* LoopNest 2 */
    for (int i_16 = 4; i_16 < 21;i_16 += 1)
    {
        for (int i_17 = 0; i_17 < 24;i_17 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_18 = 4; i_18 < 23;i_18 += 1)
                {
                    for (int i_19 = 2; i_19 < 22;i_19 += 1)
                    {
                        {
                            arr_71 [i_16] [11] [i_17] [11] [11] [18] = ((((((var_17 ? (arr_62 [i_16] [15]) : (arr_65 [i_16] [i_18] [5])))) ? (arr_69 [i_18]) : (((arr_63 [i_19]) ? 79 : -106767141)))));
                            arr_72 [i_17] = 16665504231698569190;
                        }
                    }
                }
                var_32 = ((((((arr_65 [i_16] [i_16] [i_16]) ? (((arr_61 [i_16]) ? 115 : (arr_69 [i_16]))) : ((var_0 ? 1 : 2))))) ? (arr_69 [i_16 + 1]) : 477605756));
            }
        }
    }
    #pragma endscop
}
