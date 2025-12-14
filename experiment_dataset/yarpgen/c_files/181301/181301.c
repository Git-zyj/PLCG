/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_11 -= 29771;
                var_12 = (min(var_12, -5413208483630135876));
            }
        }
    }

    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            var_13 = (min(var_13, (arr_9 [i_2])));
            var_14 = ((5413208483630135875 >> (((arr_3 [10] [i_3] [i_2]) + 1523861842))));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
        {
            var_15 = (arr_6 [i_2] [i_4]);
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        {
                            var_16 = (arr_5 [i_4]);
                            var_17 = (((arr_5 [i_5]) & (arr_5 [i_4])));
                        }
                    }
                }
            }
            var_18 = 130816;
        }
        for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
        {
            var_19 += ((~(arr_5 [4])));
            var_20 = (max(var_20, ((((((arr_0 [9]) + 2147483647)) << (((((arr_20 [1] [13] [7] [i_2] [4] [7] [1]) | 338680456)) - 338680457)))))));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {
                    {
                        var_21 = ((min((arr_21 [i_8] [i_10]), (arr_21 [i_10] [i_9]))));
                        var_22 = (((((~((min((arr_15 [1] [5] [11] [1]), (arr_17 [6] [i_10] [2] [10] [i_10] [0]))))))) <= ((var_1 ? (((arr_10 [11] [5] [4]) / var_1)) : (arr_15 [3] [1] [i_9] [i_10])))));

                        for (int i_11 = 0; i_11 < 15;i_11 += 1) /* same iter space */
                        {
                            var_23 &= (!7115);
                            var_24 -= (max(7680, 456934930));
                            var_25 = (min((min(16200524549678708264, (arr_6 [7] [i_9]))), ((max(215, (arr_6 [i_10] [5]))))));
                            var_26 = (((arr_11 [i_11]) ? (arr_10 [11] [i_9] [3]) : (arr_11 [i_11])));
                            var_27 = (var_7 - 24);
                        }
                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 15;i_12 += 1) /* same iter space */
                        {
                            var_28 = 140052757149539902;
                            var_29 = (((arr_2 [i_12]) ? (arr_2 [i_2]) : (arr_2 [i_12])));
                            var_30 = (min(var_30, 125));
                            var_31 = ((30373 ? 76 : (arr_26 [11] [4] [i_9] [9] [14])));
                        }
                    }
                }
            }
            var_32 |= 19;
        }
        var_33 = (arr_1 [i_2]);
    }
    for (int i_13 = 0; i_13 < 19;i_13 += 1)
    {
        var_34 ^= (arr_36 [18]);
        var_35 = (min(var_35, 508));
    }
    for (int i_14 = 0; i_14 < 16;i_14 += 1)
    {
        var_36 += ((-76 < ((~(arr_0 [i_14])))));
        var_37 = (min((((arr_3 [16] [9] [i_14]) ? ((1599528578 ? -21282 : (arr_36 [9]))) : (arr_4 [5]))), var_8));
        var_38 = 58430;
    }
    #pragma endscop
}
