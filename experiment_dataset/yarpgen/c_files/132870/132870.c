/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [i_0 + 2] [1] [i_2] = min(-4924, -11361);
                    arr_8 [i_0] = ((var_10 || ((((((var_0 ? var_17 : 7188966906564829371))) ? (arr_3 [i_0 - 1] [i_0 + 1] [i_0 - 2]) : var_4)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_13 [i_0 - 3] [i_0 - 3] [i_0 - 3] [i_0 - 3] [i_0 - 3] = (arr_3 [i_4] [i_4] [i_4]);
                                arr_14 [i_0] [i_0] [10] [11] [i_0 - 2] = 172;
                            }
                        }
                    }
                    arr_15 [i_0] [i_0] [i_2] = -var_6;
                }
            }
        }
    }
    var_20 = ((var_0 || ((min(158, var_12)))));
    #pragma endscop
}
