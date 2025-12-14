/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181584
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_0] = ((((min((arr_3 [i_2 - 1] [i_2 + 2] [i_2 - 2]), (arr_3 [i_2 + 1] [i_2 + 2] [i_2 + 1])))) ? (((arr_5 [i_2 - 1] [i_2 - 1] [i_2 - 1]) ? (arr_3 [i_2 - 2] [i_2 + 2] [i_2 + 2]) : 238)) : (((arr_3 [i_2 + 2] [i_2 - 1] [i_2 - 2]) ? var_8 : (arr_3 [i_2 - 1] [i_2 + 1] [i_2 + 2])))));
                    arr_9 [3] [i_1] [i_1] [i_0] |= (((arr_7 [i_1] [i_2]) ? (-2147483647 - 1) : (max((arr_6 [i_1]), var_15))));
                    var_16 *= ((max((arr_5 [i_2 - 2] [i_2 + 2] [i_2 + 1]), var_0)));
                }
            }
        }
        var_17 = ((+(max((((-2147483647 - 1) / (arr_2 [i_0] [i_0]))), var_10))));
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {
                    arr_14 [i_3] [i_3] [i_3] = min(((var_1 ? (min(var_13, (arr_5 [i_0] [i_3] [i_4]))) : (arr_1 [i_3 - 1]))), 2147483647);
                    var_18 ^= (arr_2 [i_0] [13]);
                    arr_15 [i_0] [i_3] [i_3] = (max((((arr_2 [i_0] [i_4]) ? (var_14 != var_11) : (((arr_10 [i_0] [i_0]) ? var_1 : var_0)))), (((-2147483647 ? (((arr_4 [2] [i_4]) ? var_9 : var_7)) : (var_11 + var_0))))));
                    arr_16 [i_3] [i_4] [i_3 - 2] [i_3] = (((((((var_6 + (arr_0 [i_4]))) - ((min(11011, (arr_2 [6] [i_0]))))))) ? (((((max(var_8, (arr_3 [7] [i_3] [i_4])))) ? ((((arr_11 [i_0] [i_3] [i_4]) ? var_10 : var_5))) : (max((arr_12 [2] [0] [i_4] [i_4]), 114))))) : (((2147483644 - var_11) ? (((arr_10 [6] [i_4]) - (arr_6 [9]))) : ((var_15 ? var_3 : (arr_10 [i_3 - 1] [i_3 - 1])))))));
                    arr_17 [i_0] [i_0] [i_4] [i_3] = (((arr_12 [i_0] [i_3 + 2] [i_4] [i_4]) - var_4));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 19;i_5 += 1)
    {
        arr_22 [i_5 + 4] [i_5] = (((arr_19 [i_5 + 1]) + 16744251411195420448));
        var_19 = (((var_2 - var_1) ? ((var_10 ? var_2 : (arr_18 [i_5 + 2]))) : var_5));
    }
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        var_20 = (min(((((((arr_6 [i_6]) << (((arr_25 [i_6]) + 92))))) ? (arr_13 [i_6] [i_6] [i_6]) : (((arr_21 [18]) ? var_8 : var_6)))), (((-((min(11011, var_0))))))));
        arr_27 [i_6] = (arr_0 [i_6]);
    }
    var_21 = ((var_5 ? (((0 ? var_0 : var_12))) : ((-91 ? var_4 : (min(var_10, var_6))))));
    var_22 = var_6;
    #pragma endscop
}
