/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 23;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        {
                            var_20 &= 1424949353;
                            var_21 *= 124;
                        }
                    }
                }
            }
            var_22 = arr_2 [i_0] [i_0 - 3];
            var_23 = (~2704065129);
            var_24 = (((arr_9 [i_0 + 1] [i_1]) ? (arr_4 [i_0 + 1] [i_0] [i_0 - 3]) : (((-(arr_8 [i_0 - 3] [12] [i_0] [i_0] [17]))))));

            for (int i_5 = 2; i_5 < 22;i_5 += 1)
            {
                var_25 = (~120);
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        {
                            arr_22 [11] [i_1] [i_7] [11] [i_1] [i_1] = (((var_14 * 212) || (var_7 | 45326)));
                            arr_23 [i_0] [i_0] [i_7] [i_0] [i_7] = ((arr_8 [i_0] [18] [i_0 - 3] [i_5 + 3] [i_7]) < (arr_8 [i_0] [14] [i_0 + 1] [i_5 + 2] [14]));
                        }
                    }
                }
            }
            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 23;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        {
                            var_26 = (-32779342541843916 <= 8);
                            var_27 = ((45326 ? var_8 : ((var_14 << (((arr_4 [i_8] [i_9] [21]) - 7010136635738707317))))));
                            var_28 = (arr_7 [13] [i_9] [i_9 + 2]);
                            arr_30 [i_0 - 3] [10] [i_0] = (((((2079863490 ? 2147483647 : 129090688))) ? ((var_7 ? var_13 : 85)) : (arr_9 [i_9 + 1] [i_0 - 2])));
                            arr_31 [i_0] [i_0] [i_0] [i_0 - 2] [i_0] = (((arr_10 [i_0 - 1] [i_0] [i_1] [i_0 - 2]) & (arr_13 [i_0] [i_1] [i_8] [i_9 + 1] [i_0])));
                        }
                    }
                }
                var_29 = (((-(arr_14 [i_1] [1] [15]))));
            }
        }
        for (int i_11 = 0; i_11 < 25;i_11 += 1) /* same iter space */
        {
            arr_35 [i_0] [i_11] = ((~(arr_3 [i_0 - 1] [i_0] [i_0 + 1])));
            arr_36 [i_0] [i_11] [i_0] = var_12;
        }

        for (int i_12 = 3; i_12 < 24;i_12 += 1)
        {
            var_30 = 10131773683877131239;
            var_31 = (min(var_31, (~111)));
            /* LoopNest 2 */
            for (int i_13 = 1; i_13 < 23;i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 21;i_14 += 1)
                {
                    {
                        var_32 = 0;
                        arr_46 [i_0] [i_12] [i_0 - 2] = ((67 ? -74 : 5693274939296707087));
                    }
                }
            }
            var_33 = ((-(((arr_17 [i_0]) ? (arr_17 [i_0]) : 73))));
        }
        for (int i_15 = 2; i_15 < 24;i_15 += 1) /* same iter space */
        {
            arr_49 [i_0] [i_15 - 1] = (arr_29 [i_0] [i_0 - 2] [i_0] [19] [4]);
            var_34 -= (-1239580951 & ((-(arr_44 [8] [i_15]))));
            var_35 = (max(var_35, (((124 / ((3166054089 ? (arr_37 [16] [16]) : var_8)))))));
        }
        for (int i_16 = 2; i_16 < 24;i_16 += 1) /* same iter space */
        {
            var_36 = ((((arr_26 [15] [i_16]) ? -32747 : 96)));
            var_37 = (min(var_37, 3065045433));
        }
    }
    /* vectorizable */
    for (int i_17 = 0; i_17 < 23;i_17 += 1)
    {
        var_38 = ((61 < (-60 < 805306368)));
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 23;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 23;i_19 += 1)
            {
                {
                    arr_59 [i_17] [i_18] = ((var_5 ? ((var_19 ? var_3 : (arr_27 [i_17] [i_17] [i_18] [i_18] [i_17]))) : var_14));
                    arr_60 [i_17] = ((-var_17 ? (arr_29 [i_17] [8] [i_18] [5] [i_19]) : ((-(arr_42 [16] [i_18] [i_18])))));
                    arr_61 [i_17] [i_17] = var_12;
                }
            }
        }
        arr_62 [i_17] = (((var_18 ? 120 : (arr_18 [5] [i_17] [20] [i_17]))) & (arr_45 [i_17] [0] [i_17]));
    }
    var_39 = (max(var_39, var_19));
    #pragma endscop
}
