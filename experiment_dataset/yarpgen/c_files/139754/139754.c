/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_20 -= ((((((arr_4 [i_0]) ? (arr_4 [i_1]) : (arr_4 [i_1])))) ? (((arr_4 [i_0]) ? (arr_4 [i_0]) : var_14)) : (((arr_4 [i_0]) ? var_16 : (arr_4 [i_0])))));
                var_21 = 4132758778;
                var_22 ^= var_8;
            }
        }
    }
    var_23 = (min(103, -715717189));
    #pragma endscop
}
