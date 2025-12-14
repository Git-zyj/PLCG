/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_11 [i_3] [i_1] [i_2] [i_2] [i_0] = (((min(var_4, 15634655))));
                            var_15 = var_7;
                            var_16 = ((-var_5 ? ((((var_9 ? var_2 : var_11)) + -0)) : (((((-(arr_7 [i_0 + 2] [i_1] [i_0])))) ? 0 : (((var_1 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))))))));
                            var_17 = var_11;
                        }
                    }
                }
                arr_12 [i_0] [2] |= (((((((max(var_3, var_9))) ? (arr_1 [14]) : (arr_4 [i_0 + 3] [i_1] [i_1])))) * (min(var_0, (min(var_6, var_12))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 4; i_5 < 10;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 9;i_7 += 1)
                    {
                        {
                            arr_23 [4] [i_4] [i_6] [i_4] [i_4] = ((~((((((arr_22 [i_4]) ? 2818422478377324068 : var_13))) ? ((var_2 ? var_5 : (arr_17 [2] [i_4] [i_4] [6]))) : -18446744073709551603))));
                            var_18 |= (arr_13 [8] [8]);
                        }
                    }
                }
                var_19 = var_0;
                arr_24 [i_4] = ((min((min(-5128857240400016565, (arr_18 [i_4] [7] [i_4]))), (~var_4))));
            }
        }
    }
    var_20 = var_11;
    #pragma endscop
}
