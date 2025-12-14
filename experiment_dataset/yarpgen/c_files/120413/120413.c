/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_15 != var_1);
    var_20 = var_0;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [6] [6] &= ((min((arr_2 [i_0] [i_0]), (arr_3 [i_0]))));
        arr_5 [i_0] = ((~(((((var_5 / (arr_0 [i_0])))) ? (max((arr_3 [i_0]), (arr_2 [i_0] [i_0]))) : (((max((arr_0 [i_0]), (arr_1 [i_0] [i_0])))))))));
        var_21 = (((((arr_1 [i_0] [i_0]) * (arr_1 [i_0] [i_0]))) / (arr_2 [i_0] [i_0])));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            {
                var_22 = -var_11;
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            {
                                arr_19 [8] [i_1] [14] [i_5] = var_13;
                                var_23 = (min(((min((max((arr_18 [18] [i_1]), var_14)), (min((arr_17 [i_1] [14] [i_1] [7] [i_4] [i_5] [18]), var_18))))), (((((arr_15 [i_1] [i_1] [i_4]) ? (arr_12 [i_1] [i_1] [i_3] [1]) : var_9)) * ((((arr_6 [i_1]) ? (arr_17 [i_5] [i_5] [i_1] [i_1] [i_1] [1] [i_1]) : var_6)))))));
                                arr_20 [i_1] [i_2] [i_1] [i_4] [i_1] = (arr_12 [i_1] [i_2] [i_4] [i_4]);
                                var_24 += (arr_15 [i_1] [i_2] [i_4]);
                            }
                        }
                    }
                }
                var_25 &= ((-(arr_17 [i_2] [2] [i_2] [i_2] [i_2] [i_1] [i_1])));
                var_26 ^= ((var_4 & ((((arr_17 [i_2] [i_1] [i_2] [i_1] [i_2] [i_1] [i_1]) < (arr_18 [i_2] [i_2]))))));
                var_27 *= (((arr_14 [i_2] [i_2]) * ((~(arr_6 [i_2])))));
            }
        }
    }
    var_28 = var_9;
    #pragma endscop
}
