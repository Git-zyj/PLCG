/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_13 = (max(4, 18446744073709551611));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_15 [10] [i_0] [12] [i_3] [12] = (((((min(-4194304, 3))) ? 1 : 255)));
                                arr_16 [i_0] [i_0] [1] [10] [i_2] [i_0] [i_4 - 1] = ((5404711296185446679 ? var_11 : ((((min(var_1, var_8))) ? (((arr_2 [i_1]) ? (arr_6 [i_0] [15] [i_0] [i_0]) : var_5)) : var_11))));
                                var_14 = (arr_13 [i_0] [i_0] [15]);
                                var_15 = (((((((32767 ? 0 : 12))) ? (arr_2 [i_2]) : var_11)) >> (((((max(-32762, (arr_8 [15] [11] [i_3] [i_4 - 1]))) << (((((arr_13 [i_0] [i_3] [i_4 - 1]) ? 3536330588 : (arr_7 [i_0] [i_2] [i_2]))) - 3536330569)))) - 3145725))));
                            }
                        }
                    }
                    var_16 -= (arr_11 [i_0] [i_0] [i_0] [1] [i_2]);
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        var_17 = ((~(((0 || (~0))))));
        var_18 += (arr_17 [i_5] [i_5]);
    }
    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        arr_24 [i_6] [2] = (arr_20 [i_6]);
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                {
                    arr_29 [i_6] [i_6] [i_6] = (arr_23 [5] [i_8]);
                    arr_30 [i_6] [0] [0] = var_5;
                }
            }
        }
    }
    var_19 = (max(var_19, (((-(max(((var_11 ? var_10 : var_5)), ((min(var_2, var_9))))))))));
    var_20 = (max(var_20, ((max(var_5, var_11)))));
    #pragma endscop
}
