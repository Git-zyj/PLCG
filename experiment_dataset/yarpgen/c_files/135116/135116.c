/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135116
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= ((-(((!(var_4 >= var_9))))));
    var_13 = ((-((1 * (min(var_1, 10352452623103943653))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (max((((~(arr_2 [5] [i_0])))), (arr_2 [i_1 + 2] [i_1 + 3])));
                arr_5 [8] &= 1;
                arr_6 [i_1] [i_0] = (((((max((arr_3 [i_1] [i_0]), 1)))) ^ (max((((arr_0 [i_0]) ? var_6 : var_0)), ((max((arr_2 [4] [1]), 103)))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] [i_0] [i_2] [i_2] [i_2] [1] = ((~(var_8 + var_1)));
                                arr_14 [i_0] [i_0] [i_2] [i_3] [i_4 + 1] = (arr_9 [15] [i_0] [i_1 + 2] [i_0]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = (max(var_14, var_1));
    #pragma endscop
}
