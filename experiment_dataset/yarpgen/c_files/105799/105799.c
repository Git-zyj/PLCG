/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-(min(32763, (var_1 <= var_10)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_19 = (!23506760672847729);
                var_20 = (max(var_20, ((((((arr_2 [i_0] [i_0] [i_1 + 2]) ? (min(var_9, (arr_1 [i_0]))) : 3745651851)) * (min((((arr_2 [i_0] [i_0] [i_0]) / (arr_1 [i_0]))), (((arr_2 [i_0] [i_0] [i_0]) * var_9)))))))));
            }
        }
    }
    var_21 = (min(var_21, (min(var_2, (var_8 * var_9)))));
    var_22 = (min(var_22, (((var_1 < (min((1383241754 * var_3), (~var_1))))))));
    var_23 ^= (!var_13);
    #pragma endscop
}
