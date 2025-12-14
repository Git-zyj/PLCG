/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((var_11 ? var_6 : ((var_7 >> (var_5 + 699662434)))))) ? 25 : var_8));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_18 = (max(var_18, ((var_6 ? (arr_2 [i_0] [i_0] [i_1 - 1]) : var_15))));
                var_19 &= ((((arr_4 [i_1 + 1]) + 2147483647)) >> ((((((arr_3 [i_1] [4]) ? 24 : (arr_3 [4] [4])))) ? (arr_1 [i_1]) : ((min(-91, -127))))));
            }
        }
    }
    #pragma endscop
}
