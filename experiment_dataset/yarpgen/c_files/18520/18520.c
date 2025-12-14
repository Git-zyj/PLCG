/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18520
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((((var_13 ? var_10 : var_10))) ? ((min(var_3, var_14))) : (!var_3)))) >= var_14));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_16 = (((((((min((arr_0 [i_0] [i_1]), 2))) ? (var_8 / var_10) : (arr_1 [i_1])))) && (~139)));
                var_17 ^= ((!((((arr_3 [i_0] [i_0] [i_0]) % ((var_11 ? -4310971711240452232 : (arr_1 [i_0]))))))));
            }
        }
    }
    var_18 = ((((min(4310971711240452226, var_1)) - (var_5 < var_10))));
    var_19 = ((!((!((min(var_13, var_8)))))));
    #pragma endscop
}
