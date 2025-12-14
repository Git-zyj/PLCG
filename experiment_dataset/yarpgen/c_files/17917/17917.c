/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_12 = ((~0) <= var_3);
                                var_13 = var_4;
                                var_14 += (((-((-(arr_7 [i_0]))))));
                                var_15 = ((((((((var_9 ? 216 : var_4))) ? 59 : (var_3 || var_1)))) ? (arr_6 [i_3 - 2]) : (~var_10)));
                            }
                        }
                    }
                    arr_13 [i_0 - 1] [i_0] [i_0 - 3] [19] = (arr_8 [i_0] [i_1] [i_2] [i_1]);
                    arr_14 [i_2] [i_1] [i_0 - 3] = ((40 % (arr_4 [i_0])));
                    var_16 = (min(var_16, (((((min((max(var_10, (arr_12 [i_1] [i_1]))), 229))) ? (((arr_10 [12] [i_1] [i_2] [12] [i_1] [i_0] [12]) & (((min((arr_8 [i_0] [i_1] [i_1] [i_2]), (arr_2 [i_1] [i_1]))))))) : var_7)))));
                }
            }
        }
        var_17 = (max((((!(arr_0 [i_0 - 3])))), (min((arr_0 [i_0 - 3]), var_10))));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    {
                        var_18 = ((var_3 ? (((1 - (arr_0 [i_7])))) : (((var_8 ? -1 : (((arr_21 [i_0] [i_5]) & var_4)))))));
                        arr_23 [i_5] [i_5] [i_5] [i_5] = (max(((-(229 / var_6))), (((arr_6 [i_0 - 3]) * (arr_6 [i_0 - 1])))));
                    }
                }
            }
        }
    }
    for (int i_8 = 1; i_8 < 23;i_8 += 1)
    {
        var_19 = (~var_10);
        arr_26 [18] &= var_0;
    }
    for (int i_9 = 3; i_9 < 10;i_9 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 11;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 11;i_11 += 1)
            {
                {
                    arr_36 [3] [i_10] [i_9] = ((max((~var_5), (((arr_20 [i_11] [i_10] [i_10]) ^ (arr_32 [i_10]))))));
                    arr_37 [i_9 - 3] [i_10] [i_11] [i_11] = -var_10;
                }
            }
        }
        var_20 = (((((207 ? (arr_30 [i_9 - 3]) : (arr_30 [i_9 - 3])))) && ((((arr_30 [i_9 - 2]) - (arr_30 [i_9 - 2]))))));
        var_21 += ((+(((arr_17 [i_9 - 3] [i_9 - 3] [13]) * (arr_22 [10])))));
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 11;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 11;i_13 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 11;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 11;i_15 += 1)
                        {
                            {
                                var_22 = (((((((((arr_15 [i_9]) ? (arr_19 [i_13] [i_13] [i_9]) : (arr_34 [i_9 - 2] [i_9] [i_9 + 1] [i_9])))) ? (min((arr_18 [i_12] [i_12]), 3604554889854538185)) : (((arr_0 [i_9]) / (arr_42 [3] [i_13] [i_15])))))) ? (((((8675 ? var_0 : 234)) * var_9))) : (max(((0 ? (arr_42 [8] [i_12] [i_9]) : 3604554889854538185)), (arr_18 [i_12] [i_9 - 2])))));
                                arr_48 [i_9] [i_9 - 3] [i_12] [i_12] [i_9 - 3] = -var_3;
                            }
                        }
                    }
                    arr_49 [i_12] = (min(((min(var_2, (arr_35 [i_9 - 1] [i_9] [i_9 + 1])))), (((arr_2 [i_13] [i_12]) ? (arr_2 [5] [i_12]) : (arr_19 [i_9 - 3] [i_9 - 2] [i_9 - 2])))));
                    arr_50 [i_9] [i_12] [7] [8] = (((arr_45 [0] [i_12] [i_12] [i_12] [i_12]) ^ var_0));
                }
            }
        }
    }
    for (int i_16 = 3; i_16 < 10;i_16 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 11;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 11;i_18 += 1)
            {
                {
                    arr_59 [10] = (max(62800, -6871815238152494338));
                    arr_60 [4] [i_17] = (~-6871815238152494349);
                    arr_61 [i_16] [i_17] [i_18] = ((-(((3604554889854538191 - 212) ? var_3 : 64))));
                }
            }
        }
        var_23 += ((((((65535 ? (arr_54 [i_16 + 1]) : var_5))) ? ((-(arr_18 [1] [i_16]))) : (arr_17 [i_16 - 2] [i_16 - 1] [i_16 - 1]))));
        var_24 = (((27 || -6224421795661886090) ? (((arr_8 [i_16] [i_16 + 1] [i_16 - 1] [i_16]) ? var_6 : var_8)) : (((((arr_8 [i_16] [i_16 - 2] [10] [i_16 - 2]) < (arr_8 [i_16] [i_16 - 3] [i_16] [i_16])))))));
    }
    var_25 = ((-(max(var_8, var_6))));
    var_26 = var_2;
    #pragma endscop
}
