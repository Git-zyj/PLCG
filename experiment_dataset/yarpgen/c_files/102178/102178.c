/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_13 = (max(var_13, ((((((arr_0 [i_1 + 1]) && (((var_12 / (arr_6 [i_2] [15] [i_1 + 1] [15])))))) ? 1084617872 : (arr_6 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 + 1]))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        arr_9 [i_0] [i_1] [i_1] [i_0] = (((arr_5 [i_1 - 1] [i_1 + 1] [i_1 - 1]) ? 1084617872 : (arr_5 [i_1 + 1] [i_1 - 1] [i_1 - 1])));
                        arr_10 [i_0] [i_1] [i_0] [i_3] = (2725329618836677804 <= 1084617872);
                    }
                    var_14 = (arr_1 [i_0] [i_0]);
                }
            }
        }
    }
    var_15 &= var_2;
    #pragma endscop
}
