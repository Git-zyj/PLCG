/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = ((((arr_3 [i_1] [i_1]) + (arr_3 [i_1] [i_1]))) > (((arr_3 [i_1] [i_1]) ? (arr_3 [i_1] [i_1]) : var_11)));
                var_19 = (((7408 ? 203 : -90)));
                var_20 = (max(var_20, ((((7408 | 7408) % -1)))));
                var_21 = ((228 != (max(((var_15 % (arr_1 [i_0]))), 16))));
            }
        }
    }
    var_22 = (129 + var_12);
    #pragma endscop
}
