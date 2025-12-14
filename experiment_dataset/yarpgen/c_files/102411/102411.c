/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_19 += ((max(11460, -11460)));
        var_20 = (max(var_20, var_7));
        var_21 *= -11462;
        arr_4 [i_0] [i_0] = (!11460);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    arr_13 [i_1] = (arr_1 [i_1] [i_3]);
                    var_22 = (min(var_22, (max((min((arr_2 [i_3]), (arr_2 [i_1]))), (arr_5 [i_1] [i_2])))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            {
                                var_23 = arr_7 [i_1];
                                var_24 = ((var_7 * (arr_14 [i_1] [i_2] [i_3] [i_5])));
                                var_25 = (min((((arr_0 [1] [i_2]) + (arr_0 [1] [1]))), (arr_0 [i_2] [i_2])));
                                arr_19 [i_1] [i_2] [i_3] [i_4] [i_5] |= ((-11454 * (((arr_12 [i_3] [i_2] [i_2]) ? ((var_0 ^ (arr_17 [i_1] [i_2] [0] [i_3] [i_3] [1] [i_5]))) : (((arr_17 [i_1] [1] [i_3] [1] [i_4] [i_5] [i_5]) ? var_7 : var_15))))));
                            }
                        }
                    }
                }
            }
        }
        var_26 = (min(var_26, ((((arr_11 [1] [1] [8]) ? ((((arr_11 [i_1] [i_1] [1]) && (arr_11 [1] [i_1] [1])))) : (((arr_11 [4] [i_1] [1]) ? var_18 : (arr_11 [i_1] [i_1] [6]))))))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        arr_22 [i_6] = (((((-2873 ? 1 : 1))) ? var_12 : (((((arr_6 [1]) + 2147483647)) >> var_18))));
        var_27 -= 0;
    }
    var_28 = min(var_18, (!-var_11));
    var_29 = ((var_8 ? var_3 : var_10));
    #pragma endscop
}
