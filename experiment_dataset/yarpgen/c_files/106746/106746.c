/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106746
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        var_14 = (max(var_14, ((max((max(255, (arr_7 [i_0] [i_1] [i_0] [i_3]))), ((max((arr_2 [i_0]), (arr_2 [i_0])))))))));
                        var_15 = (min((((var_2 - 15025212186664511948) + 17300)), (((-9694 >> (((arr_0 [i_2] [i_3]) - 47679)))))));
                        arr_10 [i_3] [i_2] [i_1] [i_1] [i_1] [i_0] = ((-var_11 ? (((arr_2 [i_3]) + (arr_1 [i_0]))) : (arr_1 [i_2])));
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            var_16 = (min(var_16, (!720778942)));

            for (int i_5 = 2; i_5 < 12;i_5 += 1)
            {
                arr_17 [14] [i_4] [6] [i_0] = (((4628219557041665234 ? 215 : 9976)));
                var_17 = ((!(!var_4)));
                var_18 |= ((var_6 ? (arr_3 [i_0] [i_5 - 1] [i_0]) : var_9));
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        {
                            arr_24 [i_0] [10] [i_5] [i_5] [i_5] = (((arr_20 [i_0] [i_4] [i_0] [i_0] [i_7]) <= (arr_18 [i_0] [i_4] [i_0] [i_6] [i_7] [i_0])));
                            var_19 = (max(var_19, (!13292788943713886349)));
                            arr_25 [7] [i_4] = (232 & 0);
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    {

                        for (int i_10 = 0; i_10 < 16;i_10 += 1)
                        {
                            var_20 = 1320098327;
                            arr_33 [i_0] [7] [i_0] [i_8] [i_0] = (arr_16 [i_10] [i_9] [i_4] [i_0]);
                            var_21 = (max(var_21, (((4451125310246409157 >> ((((var_6 ? var_5 : var_10)) - 18446744072298352511)))))));
                            var_22 = (max(var_22, (-6852947154177945071 / 3962)));
                            arr_34 [i_0] [i_4] [i_8] [11] [i_10] = (41197 ? 23 : -58);
                        }
                        for (int i_11 = 0; i_11 < 16;i_11 += 1)
                        {
                            var_23 = (((arr_20 [i_4] [3] [i_4] [i_4] [i_4]) * (arr_7 [i_8] [i_8] [i_9] [3])));
                            var_24 &= 1039815531;
                            var_25 = var_2;
                            var_26 = (min(var_26, (((var_0 | (arr_18 [5] [i_4] [i_4] [i_4] [i_4] [i_4]))))));
                        }
                        var_27 = arr_1 [i_8];
                        var_28 = (((arr_0 [i_4] [i_8]) ? (arr_0 [i_4] [i_9]) : (arr_0 [i_0] [i_0])));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_12 = 1; i_12 < 15;i_12 += 1)
        {
            var_29 = (min(var_29, (arr_29 [i_12 + 1] [i_12 + 1])));
            var_30 += var_5;
        }

        /* vectorizable */
        for (int i_13 = 0; i_13 < 16;i_13 += 1)
        {
            var_31 ^= (arr_36 [i_13] [i_13] [4] [i_0] [i_13]);
            var_32 = ((arr_7 [i_13] [i_0] [i_13] [i_13]) ^ 29331);
        }
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 16;i_14 += 1) /* same iter space */
    {
        var_33 = (((208 << (((arr_6 [15] [i_14]) - 8242036867164562003)))));
        var_34 = (min(var_34, (arr_19 [i_14] [i_14])));
    }
    var_35 = (max(var_35, ((max(((139 & ((var_2 ? -1172541501 : var_6)))), (((((max(215, 0))) ? (min(62890, var_0)) : var_5))))))));
    /* LoopNest 3 */
    for (int i_15 = 0; i_15 < 15;i_15 += 1)
    {
        for (int i_16 = 4; i_16 < 14;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 15;i_17 += 1)
            {
                {
                    var_36 = 6513283388634750918;
                    var_37 = (arr_27 [i_17] [i_16] [i_15]);
                }
            }
        }
    }
    #pragma endscop
}
