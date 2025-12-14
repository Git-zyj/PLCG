/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((var_4 / var_3) ? var_1 : (((~var_10) & (var_14 < 18446744073709551612)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_18 += var_3;
                var_19 = (((((71 == (arr_0 [i_0])))) <= (min((min(687197165, 687197159)), (((arr_0 [i_0]) ? (arr_2 [i_0]) : (arr_5 [i_0])))))));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 12;i_5 += 1)
                {
                    {
                        arr_17 [i_2] [i_4] [6] [i_2] = (arr_13 [1] [0]);
                        var_20 = arr_13 [14] [i_3];
                        var_21 = (min(var_21, (((arr_6 [i_3 - 1]) ? (((arr_6 [10]) ? (arr_15 [i_5]) : (arr_15 [i_3]))) : (arr_6 [i_3 + 1])))));
                    }
                }
            }
        }
        var_22 = (((arr_9 [i_2] [i_2] [i_2]) == var_8));
        var_23 = (((arr_9 [i_2] [i_2] [i_2]) ? (((arr_12 [i_2]) >> (var_15 - 33))) : ((((arr_13 [14] [i_2]) - var_16)))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
    {
        var_24 = ((var_5 == (-9 < -120)));
        arr_20 [2] = (arr_6 [9]);
    }
    #pragma endscop
}
