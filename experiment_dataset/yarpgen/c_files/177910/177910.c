/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_14 += ((((((var_13 ? var_12 : 29)) * (var_8 >= 225))) <= (((min(var_13, (arr_4 [1] [i_0])))))));
                var_15 = (((arr_0 [i_0] [i_0 + 1]) ? (((max((arr_4 [i_0 + 2] [i_1 + 1]), (arr_1 [i_1]))))) : ((((max((arr_3 [i_0 + 3] [7] [2]), var_2))) ? (((min((arr_4 [i_0 + 2] [i_1]), (arr_1 [i_0 - 3]))))) : (arr_0 [i_0] [i_1 - 1])))));
                var_16 |= var_10;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_17 |= ((-46 ? (arr_4 [i_0 - 2] [i_1 - 1]) : 6471008695615700323));
                    var_18 += ((6471008695615700323 ? (arr_1 [i_1 - 1]) : 3138813554));
                }
            }
        }
    }
    var_19 -= (((28 && 38) && var_4));
    #pragma endscop
}
