/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (!-30);
    var_15 = ((min(((var_4 ? var_8 : var_5), (~-42)))));
    var_16 ^= var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                var_17 = (arr_0 [i_0]);
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1 - 3] [i_2] [i_3] [i_1] [i_2] [0] = ((!((min((arr_9 [i_2] [i_2] [i_2] [i_2 + 2] [i_2] [i_2]), (arr_9 [i_2 - 1] [i_2] [i_2] [i_2 - 2] [i_2] [i_2]))))));
                                arr_14 [i_1] [i_1 + 1] = (min(((~(arr_3 [10] [i_1] [i_2 - 1]))), ((((arr_9 [10] [i_2 + 1] [i_2 + 1] [i_4] [i_3] [i_4]) ? (arr_9 [i_0] [i_2 + 2] [5] [i_3] [i_4] [5]) : (arr_9 [i_3] [i_2 - 2] [i_2 - 2] [i_0] [i_4] [i_4]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 &= ((~(~var_0)));
    #pragma endscop
}
