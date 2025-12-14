/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [1] [1] [i_0] [3] = (((arr_6 [i_0] [i_0] [i_1] [i_0]) ? var_11 : (arr_6 [i_1 - 1] [i_1 + 1] [9] [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_2] [i_2] [i_4] = -1432548076;
                                arr_15 [7] [i_0] [i_0] = ((var_6 ? (arr_12 [11] [11] [i_2] [4] [i_2]) : (arr_12 [i_0] [i_0] [i_2] [i_2] [i_4])));
                            }
                        }
                    }
                    arr_16 [i_0] = (((3319163195 ^ 2205631811511809) >= 3));
                }
            }
        }
        var_14 += var_11;
        arr_17 [i_0] = 165;
        var_15 = (var_6 ? (arr_4 [i_0]) : (arr_4 [i_0]));
        arr_18 [i_0] [i_0] = (3712 & 165400011);
    }
    var_16 = 2649013995918839953;
    var_17 -= ((-582524214 | ((~(var_11 || -122)))));

    for (int i_5 = 2; i_5 < 12;i_5 += 1)
    {
        arr_21 [i_5] &= (min(7, 33));
        var_18 = ((!(((139 ? (arr_9 [i_5 - 2] [i_5 - 1] [i_5 + 1] [i_5]) : ((max((arr_5 [11] [i_5 - 2]), 253))))))));
        var_19 = (max(var_19, 165400011));
    }
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        arr_24 [i_6] &= (arr_9 [i_6] [13] [i_6] [i_6]);
        arr_25 [1] = var_6;
        var_20 = (min(var_20, ((((((arr_7 [i_6]) - (arr_7 [i_6]))) - (((arr_7 [i_6]) ? (arr_7 [i_6]) : (arr_7 [i_6]))))))));
        var_21 = (arr_4 [i_6]);
        var_22 = 2147483584;
    }
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        arr_30 [1] &= (min(((~(arr_27 [12]))), var_10));
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 13;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {
                    {
                        arr_37 [i_7] = (((((!((min((arr_29 [i_7] [i_9 - 2]), 202)))))) | 202));
                        arr_38 [1] [i_7] [i_7] [i_7] = (((((((var_4 ? 1 : (arr_31 [i_8] [i_9] [i_7]))) == 212))) % 224));
                    }
                }
            }
        }
    }
    #pragma endscop
}
