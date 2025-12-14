/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139561
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (arr_1 [i_1]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_12 [i_3] = ((min((arr_7 [i_0] [i_0 + 1] [i_0 + 3] [1]), var_5)));
                                var_20 = (min(var_20, ((((arr_11 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) ? ((min((arr_11 [i_0] [i_0] [i_0] [5] [i_0] [i_3] [i_4]), (arr_2 [i_0 + 2] [4] [i_4])))) : (arr_2 [i_0 - 1] [1] [i_4]))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        {
                            var_21 *= (var_17 ? (((var_8 ? (arr_11 [i_0] [4] [i_0] [i_0] [i_0] [i_0 + 1] [i_0 - 1]) : (arr_11 [0] [0] [i_0] [1] [1] [i_0 + 1] [i_0 - 1])))) : (((arr_17 [i_0] [2] [8] [i_0]) ? (arr_11 [9] [i_0] [i_0 - 1] [i_0] [1] [i_0 + 1] [i_0 - 1]) : (arr_7 [3] [i_0 - 1] [i_0 + 1] [i_0 + 1]))));
                            arr_18 [0] [i_1] [0] [i_1] = 1;
                            arr_19 [i_5] = (((((min(var_16, (arr_15 [i_0 - 1] [i_1] [i_6] [8]))))) >= ((((((arr_14 [6] [6] [8] [i_6]) ? var_14 : -8387673451074957235))) ? (min(var_17, var_14)) : (arr_15 [i_0] [i_1] [i_1] [1])))));
                            arr_20 [1] [10] [i_1] [i_5] [6] [i_6] = (((((var_12 % (arr_7 [4] [i_0 + 1] [10] [4])))) ? ((-(arr_7 [i_0] [i_0 + 3] [i_0] [i_0]))) : (((arr_7 [6] [i_0 + 3] [i_6] [1]) ? (arr_7 [i_0] [i_0 + 2] [i_0] [10]) : (arr_7 [1] [i_0 + 3] [i_1] [1])))));
                        }
                    }
                }
            }
        }
    }
    var_22 += (!((min(var_15, var_1))));
    var_23 = min(((-(max(var_1, var_3)))), 16235077875263676040);
    #pragma endscop
}
