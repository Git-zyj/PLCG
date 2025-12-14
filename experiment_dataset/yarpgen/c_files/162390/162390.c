/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_6 [i_0 + 2] = (483728317 || 23656);
                    var_18 -= ((!((max(1, (((arr_4 [i_2] [i_1]) + (arr_5 [i_0]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_19 = (max(var_19, -8221364485262275421));
                                var_20 = (max(var_20, (+-1)));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            arr_16 [12] [i_5] [i_2] = (((var_2 >= 18) ? (((arr_13 [i_0] [i_5]) % 38)) : ((var_15 ? (arr_13 [i_0] [i_5]) : 0))));
                            arr_17 [i_2] &= ((((1 ? (arr_0 [i_1] [i_2]) : 1))) && (arr_13 [i_0] [i_2]));
                            arr_18 [i_5] = (arr_9 [i_5] [i_5] [i_5] [i_5] [i_6]);
                            arr_19 [i_6] [i_5] [i_2] [i_2] [i_5] [i_0] = (~var_9);
                        }
                        var_21 = (max(var_21, var_8));
                    }
                }
            }
        }
    }

    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        arr_22 [i_7] = ((((((arr_3 [i_7] [3] [i_7]) ? ((1 ? var_3 : (arr_5 [i_7]))) : (((var_11 ? (arr_2 [1] [i_7] [i_7]) : var_9)))))) ? (((~(arr_1 [i_7])))) : (((((arr_11 [i_7] [i_7] [i_7] [i_7] [5] [0]) * var_2))))));
        var_22 = ((!((!(((arr_21 [i_7] [i_7]) && 23674))))));
    }
    var_23 = ((~((((min(var_11, var_13))) | (~var_14)))));
    #pragma endscop
}
