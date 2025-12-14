/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125110
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_2 [3] = (((((var_10 ? (arr_1 [i_0 + 2]) : var_7))) / var_2));
        var_11 = (max(var_11, var_6));
    }
    /* LoopNest 2 */
    for (int i_1 = 3; i_1 < 20;i_1 += 1)
    {
        for (int i_2 = 3; i_2 < 21;i_2 += 1)
        {
            {
                arr_10 [i_2] = (((var_9 && var_7) ^ ((((arr_3 [i_1 - 1] [i_1 + 2]) != var_2)))));
                /* LoopNest 2 */
                for (int i_3 = 3; i_3 < 21;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 20;i_4 += 1)
                    {
                        {
                            arr_17 [i_1] [i_2 + 1] [6] [i_4 + 2] |= (!var_6);
                            var_12 = ((!(-2147483647 - 1)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
