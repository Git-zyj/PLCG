/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_10 = (var_0 ? ((~(arr_2 [i_0] [i_1]))) : (min(-var_3, ((var_6 ? 241 : var_8)))));
                arr_6 [0] = (arr_0 [i_0] [15]);
                arr_7 [9] = ((((arr_5 [i_0] [i_0] [i_1]) != (arr_5 [i_0] [14] [i_1]))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 23;i_4 += 1)
            {
                {
                    var_11 = (min((var_4 && var_1), (min((arr_16 [i_3] [i_3 + 2]), (arr_16 [22] [i_3 + 3])))));
                    var_12 -= (arr_17 [i_4 - 1] [i_3 + 2] [i_3 - 3] [i_3 - 1]);
                }
            }
        }
    }
    var_13 = var_8;
    var_14 = (min((((!((max(var_7, var_1)))))), (min(var_9, (var_2 / var_7)))));
    var_15 = var_7;
    #pragma endscop
}
