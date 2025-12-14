/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = max((arr_1 [23] [i_0]), 32402);
        arr_3 [i_0] = ((~(min((arr_1 [i_0] [i_0]), (min((arr_1 [i_0] [i_0]), (arr_0 [i_0] [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_20 = (max(var_20, 65535));
            var_21 *= var_15;
            var_22 = (max(var_22, (arr_8 [i_1] [i_1])));
            arr_9 [i_2] [i_1] = ((((min(var_3, (arr_7 [i_2])))) ? (arr_7 [i_1]) : (((arr_7 [i_1]) ? (arr_7 [i_1]) : (arr_7 [i_1])))));
            var_23 = 1;
        }
        var_24 ^= ((+((2749661206318919941 ? ((((arr_4 [i_1] [i_1]) <= var_9))) : ((31033 * (arr_8 [i_1] [16])))))));
        var_25 ^= ((-(((arr_1 [i_1] [i_1]) / ((max(120, (arr_7 [i_1]))))))));
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    arr_14 [i_1] [i_1] [i_4] [i_1] = (arr_11 [15] [i_4]);
                    var_26 -= (max((((arr_10 [i_4] [i_3] [i_1]) ? (arr_10 [i_4] [i_3 - 2] [i_1]) : (arr_10 [i_1] [i_3 + 1] [i_4]))), (((arr_10 [i_4] [i_3] [i_1]) ? 1 : (arr_10 [i_4] [5] [i_1])))));
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 20;i_7 += 1)
            {
                {
                    var_27 = 36614;
                    var_28 = (arr_18 [i_6] [i_6] [i_7]);
                    arr_23 [i_5] [i_5] [i_5] = (min((((((var_15 * (arr_0 [i_5] [i_6])))) ? (min((arr_15 [i_5] [i_5]), var_15)) : (((max((arr_21 [3]), var_18)))))), (153 & var_0)));
                    var_29 = (min(var_29, var_16));
                    arr_24 [i_5] [i_6] [7] [i_7] = (min((((arr_18 [14] [i_6] [i_6]) ? 1927926452 : (((arr_22 [i_6] [i_5]) >> (var_1 - 50))))), ((max(1927926452, (var_5 >= var_9))))));
                }
            }
        }
        var_30 = ((((((18365688174078208938 * (arr_15 [i_5] [5]))) != (arr_16 [11]))) ? (((((min((arr_20 [i_5] [i_5] [i_5] [i_5]), 0))) ? (((arr_16 [10]) + var_4)) : (-4096 < var_6)))) : ((-(min(var_0, 31))))));
    }
    #pragma endscop
}
