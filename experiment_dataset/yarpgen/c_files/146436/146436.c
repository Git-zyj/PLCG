/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = max(((((max(var_13, var_1))) ? var_12 : (min(var_8, var_0)))), (4 + var_0));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = ((~(min((((arr_2 [i_0 + 1] [1]) ^ (arr_1 [i_1]))), (arr_1 [i_0 + 1])))));
                var_16 = ((~(((arr_3 [i_0 - 2] [i_1]) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 + 3])))));
                var_17 ^= (min(((((arr_3 [i_1] [i_0 + 1]) <= (arr_3 [i_0 + 3] [i_1])))), (((arr_3 [i_0 + 2] [i_1]) ^ (arr_3 [i_1] [i_1])))));
            }
        }
    }
    var_18 = (((((!(((var_7 ? var_3 : var_4)))))) ^ 1073737728));
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_14 [i_3] = ((-(arr_9 [i_5] [i_3] [i_3] [i_3])));
                        var_19 = (((arr_12 [i_2 + 2] [i_2 + 1] [i_2 + 1] [i_2 + 2]) ? (arr_12 [i_5] [i_3] [i_4] [i_5]) : (arr_8 [i_3])));
                        var_20 = (min(var_20, ((((arr_6 [i_4] [i_4] [i_4]) || (arr_12 [i_5] [i_4] [i_3] [i_2 + 2]))))));

                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            var_21 = (max(var_21, (((!(arr_5 [i_2 + 2]))))));
                            arr_17 [i_2] [i_3] [i_2] [i_3] [i_5] [i_3] = (((((2 ? 938890020 : 19))) ? (!4) : 239));
                            arr_18 [i_2] [i_2] [i_3] [21] [i_3] = (((arr_15 [i_2] [i_3] [i_2] [i_2] [i_5] [i_3]) * (arr_4 [6])));
                            arr_19 [i_6] &= (arr_9 [i_6] [i_4] [i_3] [i_2]);
                        }
                        for (int i_7 = 3; i_7 < 20;i_7 += 1)
                        {
                            var_22 += (arr_10 [i_2 - 1] [i_7 + 2] [i_4] [0]);
                            var_23 = (((!19) >= (((arr_21 [i_2] [i_3] [i_4] [i_5] [i_7 + 3]) + (arr_22 [i_5])))));
                        }
                    }
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            var_24 = ((!(arr_25 [i_2 - 1] [i_2 - 1] [i_2 + 2] [i_2 + 2] [i_2 + 1])));
                            arr_28 [i_3] [i_4] [i_4] [i_2] [i_3] = (arr_15 [i_9] [i_2 - 1] [i_8] [i_2 - 1] [6] [i_2 - 1]);
                        }
                        for (int i_10 = 0; i_10 < 24;i_10 += 1)
                        {
                            arr_32 [i_3] [i_3] [i_4] = (arr_11 [i_10] [i_3] [i_2]);
                            var_25 = (arr_4 [i_2]);
                        }
                        var_26 &= (6935876928585324414 ^ 236);
                    }
                    arr_33 [i_3] [i_3] = ((max((arr_12 [i_4] [i_3] [i_4] [i_2 + 1]), (arr_12 [1] [i_3] [i_4] [i_2 + 1]))));
                    arr_34 [i_2] [i_2] [i_2] [i_3] = (32 ? 7 : 131064);
                    var_27 -= (arr_20 [i_3]);
                }
            }
        }
    }
    #pragma endscop
}
