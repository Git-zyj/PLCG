/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= -var_12;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((arr_0 [i_0]) ? (arr_0 [i_0]) : (!var_1)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1] [i_1] [i_2] = var_16;
                    arr_8 [i_0] [i_1] [i_1] [i_2] = (((arr_4 [i_1]) ? -14539 : (((!(arr_1 [i_0]))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        var_21 -= (((arr_11 [i_3]) && 1657692620));
        arr_12 [i_3] = (((arr_10 [i_3] [i_3]) | (arr_9 [i_3])));

        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            arr_16 [i_4] = (arr_15 [i_3] [i_3]);
            var_22 ^= 3687262015558876284;
        }
        for (int i_5 = 1; i_5 < 22;i_5 += 1)
        {
            arr_21 [i_5] = (~3687262015558876284);
            arr_22 [i_5] = (arr_20 [i_5 + 2] [i_5 - 1] [i_5 + 3]);
            arr_23 [i_5] = ((19 ? 1 : -6637));
        }
    }
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        var_23 -= (min(127, 1));
        arr_26 [i_6] = ((!((((arr_25 [i_6] [i_6]) ? (arr_25 [i_6] [i_6]) : var_10)))));
    }
    for (int i_7 = 2; i_7 < 11;i_7 += 1)
    {
        arr_31 [10] |= ((!(((var_11 ? (arr_29 [i_7] [i_7 + 1]) : 0)))));
        var_24 -= (min(((max((arr_13 [1]), (arr_19 [12] [i_7 - 1] [12])))), (min(15169, var_0))));
        arr_32 [i_7] = arr_0 [i_7 + 1];
        arr_33 [i_7] [i_7] = min((arr_20 [i_7] [i_7 + 1] [i_7 - 2]), (arr_25 [i_7 - 1] [i_7]));
    }
    var_25 = min(var_11, ((((min(0, 50366))) * (max(16788036213110148421, var_0)))));
    var_26 |= var_14;
    #pragma endscop
}
