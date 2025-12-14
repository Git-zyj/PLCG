/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175402
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, ((((var_10 | (var_5 & var_9)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        arr_11 [i_1] [i_0] [i_0] [i_0] = (((arr_10 [i_1 + 1] [i_1] [i_1 + 1] [i_2]) ^ ((var_6 * (arr_3 [i_0])))));
                        var_12 = (((arr_5 [i_1] [i_1] [i_2] [5]) ? (arr_5 [i_1] [i_1 + 1] [i_2] [i_3]) : var_7));
                        var_13 *= (((arr_10 [i_3] [i_0] [i_1 - 1] [i_0]) ? (((arr_0 [2] [i_3]) + var_1)) : var_5));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 19;i_5 += 1)
                        {
                            {
                                arr_17 [i_2] [i_1] [i_0] = (((arr_9 [19] [i_1] [10] [19] [i_5 + 1] [i_5]) & (arr_13 [i_5] [i_5 + 2] [4] [i_1] [i_5 + 1])));
                                arr_18 [i_0] [2] [i_2] [i_1] [2] = (arr_14 [i_0] [i_1 + 1] [i_0] [i_0] [i_1] [i_0] [i_4]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
