/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171694
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (var_3 <= var_4);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_0] = (max(var_9, (((arr_3 [i_0] [i_0] [i_1]) << (((var_7 + 34) - 7))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_12 = (min(var_12, 47536));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_13 += ((var_8 ? (arr_1 [21] [i_2]) : 18024));
                                var_14 += (arr_3 [i_3] [3] [i_0]);
                            }
                        }
                    }
                }
                for (int i_5 = 3; i_5 < 21;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            {
                                var_15 += ((11 ? (((arr_14 [i_0] [i_5 - 2] [i_0]) ? (arr_7 [i_7] [i_5 - 1] [i_5]) : (arr_14 [i_5] [i_5 - 3] [i_5]))) : (arr_14 [16] [i_5 - 1] [i_5])));
                                var_16 = (arr_14 [i_0] [i_0] [i_0]);
                            }
                        }
                    }
                    var_17 = max(-1, var_8);
                    var_18 = (((((!((max(var_3, var_8)))))) <= (~-109)));
                }
                for (int i_8 = 2; i_8 < 21;i_8 += 1)
                {
                    arr_25 [i_0] [i_1] = var_3;
                    arr_26 [i_8] [i_1] [i_0] [i_0] = (!-79);
                    arr_27 [i_0] [i_0] [i_0] = (arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]);
                    var_19 = (max(var_19, ((min(var_8, (!9))))));
                }
                var_20 += ((((((arr_13 [i_0] [i_1]) ? 45802 : (arr_2 [i_0])))) ? (arr_13 [i_1] [5]) : var_6));
                var_21 += (((18980 >= -1) < (((((var_0 ? var_1 : var_10)) < (arr_23 [i_0] [i_0] [i_0] [i_1]))))));
            }
        }
    }
    #pragma endscop
}
