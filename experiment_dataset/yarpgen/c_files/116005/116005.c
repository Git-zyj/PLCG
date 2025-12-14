/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116005
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((var_0 ? var_1 : var_4))));
    var_19 = (max(var_19, (((0 / (~0))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_7 [i_0] [2] [i_1] &= (max((((var_12 ? 1 : (arr_3 [i_0] [2])))), ((((arr_1 [1]) >= var_4)))));
                var_20 = var_11;
            }
        }
    }
    #pragma endscop
}
