/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_19 = (min((((!((!(-127 - 1)))))), (((((var_2 ? (-127 - 1) : 127))) ? var_3 : (((!(arr_6 [i_0] [i_1 - 3] [i_0]))))))));
                                arr_14 [i_0] [i_2] [i_2] [i_2] [i_2] = (min((((!(var_1 | 176146871904973418)))), var_8));
                                var_20 = (max(var_20, ((~((1 | ((-1425996468422391359 ? 3567736860768908345 : -83))))))));
                                var_21 = (min(var_21, (((var_0 / (((max((min(var_12, var_12)), -83)))))))));
                            }
                        }
                    }
                    arr_15 [i_0] [i_2] [i_0] = (arr_7 [i_0] [i_0] [i_2]);
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_22 [i_2] [i_0] = ((((-((125 ? -83 : var_17)))) | (!var_6)));
                                arr_23 [i_0] [i_2] [i_2] [i_2] [i_6] = ((((arr_1 [i_0]) + (arr_2 [i_5]))) - (arr_5 [i_2 - 3]));
                                var_22 = var_16;
                                arr_24 [i_2] [i_1] [i_2] [i_5 - 2] [i_6] [i_6] [i_6] = (min((((-(min(var_15, (arr_3 [i_2])))))), (max(596071129838453271, (arr_9 [i_0] [i_2 - 1] [i_5 - 1] [i_2])))));
                            }
                        }
                    }
                    arr_25 [i_0] &= (((arr_13 [i_0]) || var_0));
                    arr_26 [i_2] [i_2] = (max((((1 ? -72 : 71))), (72 * var_9)));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 4; i_7 < 9;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            {
                arr_34 [i_7] [i_7] [i_7] = ((((((arr_9 [i_7] [i_8] [i_7] [i_8]) ? 62 : var_0))) || ((min(var_12, (((arr_7 [i_7] [i_8] [i_7]) ? (arr_6 [i_7] [i_8] [i_8]) : 1466022207194975604)))))));
                var_23 = ((1 ? (((((max(99, var_17))) < (((arr_19 [i_8]) - var_5))))) : (((min(0, (arr_3 [i_7])))))));
            }
        }
    }
    #pragma endscop
}
