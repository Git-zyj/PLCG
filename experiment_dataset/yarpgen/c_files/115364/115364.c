/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_11 = ((-(arr_1 [i_0] [i_0])));
        var_12 = -1942181378;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_13 = (min(var_13, ((((arr_3 [i_1] [i_1]) && -5865238250996301654)))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 10;i_3 += 1)
            {
                {
                    var_14 = (((arr_6 [i_1] [i_1] [i_2] [i_3 + 1]) / var_8));

                    for (int i_4 = 1; i_4 < 13;i_4 += 1)
                    {

                        for (int i_5 = 3; i_5 < 11;i_5 += 1)
                        {
                            var_15 = (min(var_15, ((~(arr_8 [i_4 + 1] [i_4 - 1] [i_4] [i_4 - 1] [i_4] [i_1])))));
                            var_16 = (1 && -729);
                        }
                        var_17 = (((((var_2 - (arr_10 [i_3])))) ? var_1 : var_8));
                    }
                    for (int i_6 = 1; i_6 < 13;i_6 += 1)
                    {
                        var_18 = (((((arr_8 [i_3] [i_6 + 1] [9] [i_6 + 1] [i_6 - 1] [i_3]) + 2147483647)) >> 3));
                        var_19 = (((-1 == 252) ? var_6 : (1 / -119)));
                        var_20 *= (arr_13 [i_3] [i_2] [i_1]);
                        var_21 = (min(var_21, -1));
                    }
                    var_22 = (arr_1 [i_2] [i_3]);
                }
            }
        }
    }
    var_23 = (var_1 % ((4504 ? var_1 : (min(var_1, var_6)))));
    #pragma endscop
}
