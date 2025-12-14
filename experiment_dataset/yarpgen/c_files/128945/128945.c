/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 4; i_3 < 13;i_3 += 1)
                    {
                        var_13 -= (arr_3 [i_0] [i_0]);
                        arr_10 [i_1] [i_2] [i_1] [i_1] = -7134761972247663569;
                        var_14 = (arr_8 [i_0 + 2] [i_0 + 2] [i_0 - 2] [i_0 + 2] [i_0] [6]);
                        var_15 = arr_3 [i_0] [i_3 + 1];
                    }
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        arr_14 [i_1] [i_0] [i_1 + 1] [i_0] [3] [i_4] = ((((max(var_1, (arr_2 [i_0] [i_0 - 4]))))));
                        var_16 = ((!(arr_2 [i_0] [i_1])));
                        arr_15 [i_0] [i_0] [i_2] [i_2] [i_1] = ((4320 ? 113 : 113));
                        var_17 = (min(var_17, (((!((max((arr_7 [i_0 - 2] [i_1 - 2]), ((var_3 ? 113 : 4303))))))))));
                    }
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        var_18 = (arr_18 [i_1 + 3] [i_0 + 2] [i_0 + 2] [i_0 - 1]);
                        arr_19 [i_0] [i_1] [i_1] [i_0] = (((((((max(-28, 61216))) ? (((arr_11 [i_0] [i_0] [i_0 + 2]) / (arr_6 [1] [1]))) : (arr_11 [i_0 - 1] [i_1 - 2] [i_0 - 1])))) ? (max(((-(arr_12 [i_1] [i_1] [i_1 - 2] [i_1] [i_0]))), var_10)) : (arr_4 [i_1])));
                        arr_20 [i_1] [i_5] = ((!(((((((arr_17 [i_0 - 3] [0] [11] [i_2] [i_5] [11]) | (arr_7 [i_5] [i_1 - 3])))) ? 4303 : 7134761972247663577)))));
                    }
                    arr_21 [i_1] = -7134761972247663576;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 1; i_6 < 9;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                {
                    var_19 = (!61237);
                    var_20 = arr_30 [i_6] [i_7] [i_6];
                    var_21 |= (arr_3 [i_6 - 1] [i_6 - 1]);
                }
            }
        }
    }
    var_22 = (!var_9);
    #pragma endscop
}
