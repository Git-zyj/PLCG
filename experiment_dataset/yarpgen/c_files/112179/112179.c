/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_12 ? (min(-118, var_15) : 11)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_20 = (max(var_20, (((((arr_1 [i_1] [i_0]) && ((!(-9223372036854775807 - 1)))))))));
                var_21 |= ((-(arr_1 [i_1 + 2] [i_0])));
                var_22 = (min(var_22, (((6942 ? (((((0 ? (arr_3 [i_0]) : (arr_1 [i_0] [i_1])))) ? (!var_2) : -var_10)) : -27)))));
            }
        }
    }
    #pragma endscop
}
