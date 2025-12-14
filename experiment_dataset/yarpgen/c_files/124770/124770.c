/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 184;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = (arr_4 [i_0] [i_0] [i_1]);
                var_18 = (min(var_18, ((max((var_15 + var_8), (arr_2 [i_0]))))));
                var_19 = (min(var_19, ((min((-9223372036854775807 - 1), (((181 ? 1 : 8))))))));
                var_20 -= -18516259736534352;
            }
        }
    }
    var_21 = var_4;
    #pragma endscop
}
