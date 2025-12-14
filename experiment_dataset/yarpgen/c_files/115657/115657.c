/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_10 = (max((((((arr_3 [i_0] [i_1]) ? (arr_1 [i_0]) : (arr_2 [i_0] [i_0]))))), ((max(1, var_1)))));
                var_11 = (arr_0 [i_0]);
            }
        }
    }

    for (int i_2 = 2; i_2 < 23;i_2 += 1)
    {
        arr_7 [i_2 + 1] [i_2] = ((16777152 == ((1 ? (max((arr_4 [i_2]), 1)) : (var_8 * 85)))));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            var_12 = (var_2 >= (arr_8 [i_2] [i_2 + 1]));
            var_13 = 970392935;
        }
        /* vectorizable */
        for (int i_4 = 2; i_4 < 24;i_4 += 1)
        {
            arr_14 [i_2] [i_4] = (var_3 ? var_1 : (arr_5 [i_2 + 2] [i_4 - 2]));
            var_14 = ((~(arr_4 [i_4])));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        var_15 += (((arr_5 [i_2 - 2] [i_4]) >> (((var_6 + 2013265920) - 1010769605))));
                        var_16 += (((arr_20 [i_2 + 1] [i_2 + 1]) && (arr_20 [i_2 + 1] [i_2 - 1])));
                    }
                }
            }
            arr_21 [i_2 - 1] [i_2] [i_2 - 1] = (((arr_17 [i_2 - 2] [i_2 - 2] [i_2 + 2]) ? (arr_8 [9] [i_2 + 2]) : var_9));
        }
        /* vectorizable */
        for (int i_7 = 1; i_7 < 24;i_7 += 1)
        {
            arr_25 [i_2] [i_2] = -2013265920;
            arr_26 [i_2] [i_2] = -96;
        }
        for (int i_8 = 3; i_8 < 23;i_8 += 1)
        {
            arr_29 [i_2] [i_8] [i_2] = (arr_4 [i_2 + 1]);
            var_17 = (arr_18 [i_2 - 2] [i_8] [i_8 + 2] [i_2 - 2]);
        }
        var_18 |= ((!((!(((-86 ? var_7 : var_4)))))));
        arr_30 [10] &= var_0;
    }
    var_19 = 2013265920;
    var_20 = var_2;
    var_21 = (min(var_21, (1032192 * 0)));
    #pragma endscop
}
