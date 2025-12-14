/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_2;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_16 += (1 ? (min(1482036344, (((arr_2 [i_0]) ? var_0 : (arr_2 [i_0]))))) : -0);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_1] [0] [9] [i_0] [i_0] = 3633841659;

                        for (int i_4 = 3; i_4 < 15;i_4 += 1)
                        {
                            var_17 *= (((arr_7 [i_1]) ? (((20919 + 20916) ? (arr_1 [i_4 - 1] [i_4 + 2]) : (arr_13 [2] [2] [i_2] [3] [i_4 + 2] [i_2]))) : var_11));
                            var_18 *= (max(((max((arr_8 [i_4 + 2] [12] [4] [12] [4]), (arr_8 [i_4 + 2] [i_1] [i_1] [15] [i_4 - 3])))), var_4));
                            var_19 = (max(var_19, var_0));
                            var_20 = (max(var_20, (((var_0 ? -6601331437774783358 : ((min((~24416), -120))))))));
                        }
                        /* vectorizable */
                        for (int i_5 = 2; i_5 < 17;i_5 += 1)
                        {
                            var_21 = (min(var_21, 20919));
                            var_22 = ((!(arr_13 [9] [i_5 + 1] [i_5 - 2] [i_5 + 1] [5] [5])));
                            var_23 = (arr_6 [i_5 - 1] [i_5 - 2] [i_5 - 1] [9]);
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        var_24 = ((var_6 >> (-6601331437774783358 + 6601331437774783389)));
        arr_20 [i_6] = arr_18 [i_6];
        arr_21 [i_6] [18] = ((!(((-6601331437774783358 ? 6601331437774783358 : 57823)))));
        arr_22 [i_6] = var_3;
    }
    for (int i_7 = 1; i_7 < 9;i_7 += 1)
    {
        arr_25 [2] [i_7] = ((0 ? (((arr_9 [i_7 + 1]) ? (arr_9 [i_7]) : (arr_19 [i_7 - 1]))) : (min((arr_15 [15] [i_7 - 1] [i_7 + 1] [i_7 + 1] [5] [5]), (arr_9 [i_7 + 1])))));
        arr_26 [i_7] = ((((130 ? (arr_8 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 - 1]) : (arr_8 [i_7 - 1] [i_7 - 1] [i_7 + 1] [i_7 + 1] [i_7 - 1]))) + ((((arr_9 [11]) ? var_7 : (arr_16 [i_7] [i_7 + 1] [i_7 + 1] [16] [i_7 + 1]))))));
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 9;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 8;i_10 += 1)
            {
                {
                    arr_36 [4] [i_9] [i_9] [i_10 - 2] = ((~(arr_13 [i_8 - 1] [i_8 - 1] [i_10 + 2] [i_10 + 2] [i_8 - 1] [i_8 + 1])));
                    var_25 = ((!(((var_12 ? 1489941924 : var_13)))));
                    arr_37 [i_8] [i_9] [4] = var_5;
                    var_26 = ((var_12 % (arr_10 [i_10 + 2] [1] [i_10 + 2] [i_10 - 2])));
                }
            }
        }
        var_27 = (arr_14 [2] [7] [i_8 - 1] [i_8 - 1] [i_8]);
    }
    #pragma endscop
}
