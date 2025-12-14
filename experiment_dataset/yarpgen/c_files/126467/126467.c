/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_0 ? (-8529 + -var_8) : -22408));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                var_18 = (min(var_18, (((((max((arr_2 [i_0 - 1] [i_0 - 1] [1]), var_11))) ? (arr_3 [10] [10]) : (((var_7 ? var_1 : var_5))))))));
                var_19 = var_15;
                arr_4 [i_0] [i_0] = (~var_4);
                arr_5 [i_1] [i_1] = (-8542 & 8519);
            }
        }
    }
    #pragma endscop
}
