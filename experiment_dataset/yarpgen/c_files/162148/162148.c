/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_8;
    var_17 = ((((var_4 ^ ((-1 ? var_13 : 11160)))) == ((((var_15 ? 0 : var_10))))));
    var_18 = var_12;

    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_2 + 1] [i_1] [i_0] = 1300146706;
                        arr_12 [i_0] [i_3] [i_2] [17] [17] [i_0] = 1;
                        var_19 = (min(var_2, (arr_9 [i_0] [i_1])));
                        arr_13 [i_3] [i_0] [i_1] [i_0] [i_0 - 1] = ((0 ? 1 : 0));
                    }
                }
            }
        }
        var_20 = (max(var_20, (((((((arr_8 [i_0 - 2]) ? (arr_7 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 3]) : (arr_4 [i_0 - 3] [i_0 - 3])))) ? (((max((arr_4 [4] [i_0 - 1]), var_8)))) : (min(17087634286019206675, 1260446580368046551)))))));
        arr_14 [i_0] [i_0] = (-125 >= 1);
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        var_21 &= ((~(((((arr_15 [i_4] [i_4]) ? 2147483647 : 16809020431964767809)) >> (((min(var_14, (arr_10 [i_4] [i_4] [i_4] [16] [i_4]))) - 52294))))));
        var_22 = (min(var_22, (((((min(11387686290780423118, var_15))) >= ((((!((((arr_4 [i_4] [i_4]) ? (arr_6 [i_4] [19] [i_4] [i_4]) : var_13))))))))))));
        arr_17 [i_4] [1] = (max(var_9, 4202027626));
        var_23 = (min(var_23, ((((((0 ? 1 : (arr_7 [i_4] [i_4] [i_4] [i_4])))) ? ((28 ? 1 : 1)) : 129)))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        var_24 = var_12;
        var_25 = (((arr_2 [i_5] [i_5] [i_5]) ? (arr_2 [i_5] [i_5] [i_5]) : (arr_2 [i_5] [i_5] [i_5])));
        var_26 = -var_4;
        var_27 = ((((((arr_18 [i_5] [i_5]) - var_14))) ? (arr_10 [i_5] [i_5] [i_5] [i_5] [i_5]) : ((~(arr_10 [i_5] [i_5] [i_5] [i_5] [i_5])))));
    }
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        arr_23 [i_6] = (arr_20 [i_6] [i_6]);
        var_28 -= ((max(16869, -122)));
        var_29 = (min(var_29, 7));
        var_30 = (max((arr_8 [i_6]), (((arr_1 [i_6]) ? (min((arr_3 [17]), 3)) : (arr_4 [i_6] [i_6])))));
    }
    #pragma endscop
}
