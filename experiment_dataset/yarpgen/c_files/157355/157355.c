/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_14 [12] [i_1] [3] [1] [i_1] [0] = (((((min(0, var_0)) >> (703330700 - 703330674))) >> (((((((17592186044415 ? (arr_1 [5]) : (arr_0 [15])))) ? var_7 : (arr_1 [i_2]))) - 7594941813019973792))));
                                arr_15 [i_1] [13] [1] [3] [20] = (max(((703330698 >> (175 - 150))), 703330716));
                                var_20 = ((((max(43, (arr_1 [i_2])))) ? (arr_1 [i_3]) : ((((arr_1 [i_3]) ? 1 : var_9)))));
                            }
                        }
                    }
                    var_21 = var_0;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            {
                arr_22 [8] [7] = ((+(((arr_12 [i_5 - 1]) ? (arr_12 [i_5 - 1]) : 1))));
                /* LoopNest 2 */
                for (int i_7 = 3; i_7 < 8;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        {
                            arr_29 [4] [i_7] [4] [10] = (max((-var_11 / var_3), (max(-17592186044394, var_5))));
                            var_22 = (arr_11 [1] [1] [0]);
                        }
                    }
                }
                var_23 = (min((((((arr_8 [16] [21] [1] [i_5 - 1] [5] [i_5 + 1]) + 2147483647)) >> var_14)), (arr_13 [9] [14] [15] [i_5 - 1] [7])));
                var_24 = (min((((min(-233806167, var_8)) ^ (max(37, var_3)))), ((max(909976639, 250)))));
                arr_30 [0] [1] [0] = ((((((arr_6 [i_5 - 1] [i_5 + 1] [i_5 + 1]) && (arr_2 [18] [i_5 - 1])))) / ((max(var_12, (arr_6 [i_5 + 1] [i_5 + 1] [i_5 + 1]))))));
            }
        }
    }
    #pragma endscop
}
