/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133825
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 ^= (arr_5 [i_1] [i_0]);
                arr_8 [i_0] [i_1] [i_0] = 2810945938;
            }
        }
    }
    var_18 = (min(var_18, (((var_4 ? (((var_15 ? var_13 : var_16))) : var_2)))));
    var_19 = var_2;
    var_20 = (max((min(1484021358, 11)), ((((var_8 ? var_2 : var_5))))));
    var_21 = (max(var_21, (~var_14)));
    #pragma endscop
}
