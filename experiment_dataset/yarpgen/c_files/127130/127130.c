/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= var_11;
    var_16 = ((!((max(((-8 ? var_8 : var_11)), (((-127 - 1) + (-127 - 1))))))));
    var_17 = var_11;
    var_18 = (min(var_18, var_5));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_19 &= (((((-((max((arr_4 [i_1 + 1]), 0)))))) ? ((var_3 ? 0 : -var_4)) : (arr_7 [i_0] [i_2] [i_2])));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_20 = 36;
                        arr_11 [i_0] [i_0] [i_1] = (--1);
                    }
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        var_21 = (((122 * -109) * (arr_12 [i_0] [i_1] [i_0] [i_1])));
                        var_22 &= arr_12 [6] [i_0] [i_0] [i_2];
                        var_23 = (max(var_23, (arr_12 [i_2] [i_2] [i_2] [i_2])));
                    }
                    arr_14 [i_0] [i_1] [i_2] = ((-(((var_8 || (((~(arr_10 [i_0] [i_0] [i_1] [i_1])))))))));
                    var_24 = 1;
                    var_25 = ((((arr_12 [i_1 + 1] [i_2] [17] [i_1]) ? (arr_10 [i_1 + 1] [i_1] [i_1] [i_0]) : var_1)));
                }
            }
        }
    }
    #pragma endscop
}
