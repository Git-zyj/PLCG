/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_14, (((var_1 + 2147483647) >> (var_1 <= var_13)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_2] [i_2] = (((((var_1 ? 6740 : 1)))) ? (((arr_2 [i_1 - 2] [i_1 + 2]) | (arr_2 [i_1 - 1] [i_1 - 1]))) : 2145532910);

                    for (int i_3 = 3; i_3 < 24;i_3 += 1)
                    {
                        var_17 = (min(var_17, var_3));
                        var_18 *= 0;
                        arr_11 [i_2] [i_2] [1] = (~-46);
                        arr_12 [i_2] [i_2] [i_1] [i_2] = var_2;
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 23;i_5 += 1)
                        {
                            {
                                var_19 = (max(var_19, var_11));
                                var_20 ^= (!var_1);
                            }
                        }
                    }
                    arr_18 [i_2] [20] [i_2] [i_2] = ((((((arr_2 [i_2] [i_1 - 3]) ? (arr_2 [i_0] [i_1 - 3]) : var_4))) ? -1807554377 : ((max(0, (arr_14 [23] [i_1 - 1] [i_1 - 1] [1] [i_1]))))));
                }
            }
        }
    }
    #pragma endscop
}
