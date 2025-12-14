/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_10 *= (min(((var_6 ^ (arr_6 [i_1 + 1] [i_0]))), ((max(63923, 14784)))));
                var_11 = (max(var_3, (arr_1 [i_1])));
                var_12 = ((((min(3735180982605813275, 60621)))) ? (((min((arr_5 [i_0]), (arr_5 [i_0]))))) : (((arr_3 [i_1 - 2]) + (arr_3 [i_1 + 4]))));
            }
        }
    }
    var_13 = (max(var_8, (min((~var_0), var_7))));
    var_14 = var_0;
    var_15 = ((((min(((var_4 ? var_0 : var_4)), (var_2 - var_6)))) ? (var_9 >= var_3) : (0 | var_0)));
    #pragma endscop
}
