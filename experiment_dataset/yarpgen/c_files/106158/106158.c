/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 14878086361648816669;

    /* vectorizable */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (arr_1 [i_0]);
        arr_4 [15] [i_0 - 1] = (arr_2 [i_0]);
        arr_5 [i_0] &= ((14878086361648816649 ? -122 : 3568657712060734940));
    }
    for (int i_1 = 4; i_1 < 16;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    {
                        var_16 |= ((~((-18 ? 4294967279 : 234))));
                        arr_16 [i_2] [i_2] [i_3] [i_4] = (((arr_6 [i_1]) ? (((~((~(arr_7 [i_1] [i_1])))))) : (((((~(arr_2 [i_1])))) ? (arr_13 [i_1] [14] [i_4]) : (arr_7 [i_1] [i_2])))));
                        var_17 = (arr_13 [i_2] [i_3] [i_4]);
                    }
                }
            }
        }
        arr_17 [i_1 + 2] = ((-554971461927302825 ? 18446744073709551594 : -1297935330));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        var_18 |= ((!((!(arr_12 [i_5] [i_5] [18])))));
        var_19 = (max(var_19, (arr_12 [i_5] [i_5] [i_5])));
        arr_20 [i_5] = ((!(arr_18 [5])));
    }
    for (int i_6 = 1; i_6 < 1;i_6 += 1)
    {

        /* vectorizable */
        for (int i_7 = 2; i_7 < 8;i_7 += 1) /* same iter space */
        {
            arr_25 [i_6] [i_7] [i_6] = arr_15 [i_6] [i_6];

            for (int i_8 = 2; i_8 < 11;i_8 += 1)
            {
                var_20 = (min(var_20, (((!(arr_27 [i_6 - 1] [8]))))));

                for (int i_9 = 1; i_9 < 11;i_9 += 1)
                {
                    var_21 &= (arr_21 [i_7 + 3] [i_7 + 3]);
                    arr_31 [i_6] [i_9] [i_8] [i_7] [i_6] [i_6] = ((((((arr_21 [i_7] [i_7]) ? (arr_11 [i_6] [6] [i_8]) : (arr_1 [i_6])))) ? (((!(arr_13 [i_9 - 1] [i_8] [i_6])))) : (arr_15 [i_6] [i_6])));
                    var_22 = ((261465093 ? 4294967295 : 20192));
                    var_23 += (arr_22 [1]);
                }
                for (int i_10 = 3; i_10 < 10;i_10 += 1)
                {
                    var_24 = (arr_22 [i_6]);
                    var_25 = ((!(arr_15 [i_8] [i_6])));
                }
                for (int i_11 = 2; i_11 < 9;i_11 += 1)
                {
                    var_26 = (arr_8 [i_6]);
                    arr_37 [i_6] [i_7] [2] [i_11] = ((!((((arr_35 [i_6] [5] [0] [i_11 + 2]) ? (arr_27 [i_6] [i_6]) : (arr_9 [i_6] [i_7]))))));
                    arr_38 [i_6 - 1] [i_6] [2] [i_8 + 1] [i_6 - 1] [i_8 + 1] = ((((((arr_11 [i_6] [i_7] [i_8]) ? (arr_8 [i_8 - 1]) : (arr_9 [i_6] [i_6])))) ? ((((arr_23 [i_6] [i_7]) ? (arr_23 [i_6] [6]) : (arr_36 [i_7 - 1] [3] [i_8] [6] [i_8])))) : (~4597275713030624682)));
                }
                var_27 = ((((!(arr_27 [i_7 + 2] [i_6]))) ? (arr_8 [i_7]) : (arr_9 [i_6] [18])));
            }
            for (int i_12 = 1; i_12 < 11;i_12 += 1)
            {
                /* LoopNest 2 */
                for (int i_13 = 3; i_13 < 11;i_13 += 1)
                {
                    for (int i_14 = 1; i_14 < 8;i_14 += 1)
                    {
                        {
                            var_28 = (min(var_28, (arr_43 [i_7] [i_7] [i_7 - 1] [1])));
                            var_29 = ((!((((arr_12 [i_7] [i_6] [i_14]) ? (arr_9 [i_6] [i_6]) : (arr_12 [i_7] [i_6] [i_13]))))));
                            var_30 |= (arr_32 [8] [0]);
                            var_31 = (arr_0 [i_12] [i_14 + 4]);
                            var_32 = arr_9 [i_6] [i_6];
                        }
                    }
                }
                arr_47 [i_6 - 1] [i_6 - 1] [i_6] = (arr_33 [9] [i_6] [i_6] [i_12]);
            }
            var_33 += ((!(arr_27 [i_6] [4])));
        }
        for (int i_15 = 2; i_15 < 8;i_15 += 1) /* same iter space */
        {
            arr_51 [i_6] = ((!(((22 ? -20217 : 75)))));
            arr_52 [i_6 - 1] [i_6] [i_15] = (((((((((arr_7 [i_6] [i_15]) ? (arr_45 [4] [i_15] [i_6] [i_15] [3] [7] [i_6]) : (arr_8 [i_6 - 1])))) ? ((((arr_48 [i_6] [i_15] [i_6]) ? (arr_30 [i_6] [i_6] [i_6 - 1] [10] [i_6]) : (arr_41 [i_6 - 1] [i_6])))) : (arr_40 [i_6] [i_15] [i_6] [i_15])))) ? ((((arr_15 [i_6] [i_6]) ? (arr_9 [i_6] [i_15 + 2]) : (arr_23 [i_6 - 1] [3])))) : (arr_36 [i_6] [i_6 - 1] [i_6 - 1] [i_15] [i_15])));
        }
        var_34 = (arr_36 [2] [i_6] [i_6] [i_6 - 1] [2]);
    }
    #pragma endscop
}
