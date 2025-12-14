/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((((var_3 ? var_12 : var_9))) && var_4)) ? (((!(((var_13 ? var_14 : var_15)))))) : (((var_9 | var_14) & var_2))));
    var_19 = ((((((~var_3) ? (4 | 1) : var_6))) ? var_4 : var_11));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [5] = ((~(min(1, (46503 ^ 1)))));
                    arr_9 [9] [i_1] [9] = ((-((var_8 ? (arr_7 [i_1] [i_2]) : var_0))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 21;i_4 += 1)
        {
            {
                var_20 = ((4 ? var_12 : 1));
                var_21 *= (arr_13 [i_4]);
                var_22 = ((min(var_15, (((arr_12 [i_3] [i_4]) ? (arr_13 [i_3]) : (arr_10 [i_4]))))) != (((arr_12 [i_4] [i_4]) ? (!1) : (arr_13 [i_3]))));
                var_23 = (((arr_12 [i_4 + 2] [i_4 + 2]) > (((var_4 % (arr_12 [i_3] [i_3]))))));
            }
        }
    }
    var_24 = var_5;
    #pragma endscop
}
