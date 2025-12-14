/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131430
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((min((7578322699997292346 != var_10), (max(var_7, var_14)))) < var_9));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_18 -= -3775254706247527948;
                arr_5 [i_1] [i_1] = (min((arr_3 [i_0 + 4]), (min((arr_3 [i_0 + 1]), (arr_2 [i_1] [i_1])))));

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    arr_9 [i_1] [i_1] [i_2] [i_1] = ((min(((7578322699997292346 ? -5276 : 32497)), 68)) / (arr_6 [16] [i_0 + 3] [i_0 + 3] [i_0]));
                    arr_10 [i_2] [i_1] [i_1] [i_0] = (min((min((arr_6 [i_0] [i_0] [i_0] [i_0]), (arr_8 [i_1]))), (min(((var_9 ? (arr_1 [i_1]) : (arr_8 [i_1]))), (((68 << (((-32497 + 32522) - 10)))))))));
                }
            }
        }
    }
    var_19 = (min(var_19, (((!(-14190 && var_12))))));
    #pragma endscop
}
