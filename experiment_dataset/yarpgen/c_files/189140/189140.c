/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_19 = ((((max(91, -527709094)) <= ((-(arr_3 [i_1]))))) ? (~876827284) : (arr_0 [i_0]));
                var_20 = ((((max(94, -101))) ? (((arr_1 [i_1 - 1]) - (arr_1 [i_1 - 1]))) : (94 - 94)));
                var_21 = (max(((min(var_8, (var_14 == -95)))), (min(-1520829664, (arr_0 [i_0 + 1])))));
                var_22 = (arr_2 [14] [i_1 - 1]);
            }
        }
    }
    var_23 = max((!var_10), (min(((max(var_11, 120))), (max(17984274703975183433, 40)))));
    var_24 = max(var_18, var_10);
    #pragma endscop
}
