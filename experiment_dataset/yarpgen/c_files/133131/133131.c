/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_0 < ((var_10 ? (~var_2) : (!var_7)))));
    var_18 |= (((!var_10) | ((((-1619014804 & 1619014803) && var_3)))));
    var_19 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1 + 2] [i_1] = var_15;
                var_20 = ((-((~(arr_5 [i_0 + 1] [i_1 + 2])))));
                var_21 = ((-(min((arr_0 [i_1]), (min(var_8, var_9))))));
                arr_8 [i_1] = ((((!1) ? var_15 : (arr_5 [i_0 - 1] [i_0 + 1]))));
            }
        }
    }
    #pragma endscop
}
