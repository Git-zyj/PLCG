/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, ((((((var_8 ? var_11 : var_2)) - (min(var_2, var_3))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_13 = ((arr_0 [i_0 - 2]) - var_0);
                var_14 = (max(var_14, (((((~(arr_2 [i_1 + 4] [i_0 + 1]))) - (((var_1 ? (var_10 >= var_8) : ((-(arr_0 [i_1 + 4])))))))))));
            }
        }
    }
    #pragma endscop
}
