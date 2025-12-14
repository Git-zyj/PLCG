/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_10 = (min(((13825036106204418196 ? 245 : 3460382729717932358)), ((((arr_2 [i_0 - 1]) ? (arr_3 [i_0 - 1] [i_0 - 1]) : (arr_0 [i_0 - 1] [i_0 - 1]))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 8;i_3 += 1)
                {
                    {
                        var_11 &= 63;
                        var_12 = ((-(arr_5 [i_1] [i_0])));
                    }
                }
            }
        }
        var_13 = (min(var_13, (((-(((((arr_13 [i_0] [i_0 - 1] [i_0] [i_0] [0]) && var_7)) ? (((-732985027 ? (arr_3 [i_0] [i_0 - 1]) : -732985051))) : (3460382729717932342 & -732985051))))))));
    }
    var_14 += ((((((min(var_7, 55337))) ? (!-21312) : (var_8 == var_4))) <= ((((30385 || 4141710075) != (min(498378584, 10181)))))));
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                {
                    arr_22 [5] [i_6] = (((((18446744073709551613 ? 7606 : ((55021 - (arr_18 [i_4] [i_4] [i_4])))))) ? (max((arr_18 [i_6] [i_4] [i_4]), (15428 + 7729184490828309125))) : ((((((arr_17 [i_4]) - (arr_20 [i_6])))) | -16390257334107651235))));

                    for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
                    {
                        var_15 = 1027254365;
                        var_16 = (min(var_16, (-732985062 - 55331)));
                        var_17 = ((~(((((10205 + (arr_19 [i_7])))) + ((var_5 ? (arr_24 [i_4]) : (arr_20 [i_5])))))));
                        var_18 &= 127;
                        var_19 = ((-(((max((arr_18 [4] [i_5] [i_5]), (arr_16 [i_4]))) & (arr_18 [2] [i_5] [8])))));
                    }
                    for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
                    {
                        var_20 = (~13825036106204418194);
                        var_21 = (min(var_21, (arr_23 [i_8] [i_6] [i_5] [i_4])));
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
                    {
                        var_22 = ((-(var_1 != 29784)));
                        var_23 &= ((((var_4 ? (arr_31 [i_6] [i_5] [i_6] [i_9] [i_9]) : (arr_20 [10]))) - ((var_8 ? 65506 : 0))));
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 13;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 15;i_11 += 1)
                        {
                            {
                                arr_36 [i_6] [7] [i_6] [i_5] [3] &= 3460382729717932358;
                                arr_37 [i_4] [i_5] [i_6] [i_11] [i_11] [1] [14] = (((((((1 * (arr_28 [i_5] [i_6] [i_11]))) * 51084))) ? ((-((2301181304 ? 10486 : (arr_18 [i_4] [i_4] [i_11]))))) : ((-(((arr_29 [i_5] [i_6] [i_10] [i_11]) ? (arr_18 [i_5] [1] [i_10]) : var_0))))));
                            }
                        }
                    }
                    arr_38 [i_6] [i_5] [i_4] &= (arr_19 [i_4]);
                    var_24 &= (min(((-(arr_35 [i_4] [i_5] [i_6] [i_6]))), (arr_29 [i_4] [i_4] [i_4] [i_4])));
                }
            }
        }
    }
    var_25 += ((((((3460382729717932358 ? 55323 : var_6) != 24)))));
    #pragma endscop
}
