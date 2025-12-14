/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            {
                var_13 -= (((30983 + var_7) ? (min(var_10, (7336 == var_6))) : (((max((arr_2 [i_1 - 2] [i_0]), -7336))))));
                var_14 = (13520650987842103929 && 4887272868383593058);
                var_15 *= var_11;
                var_16 = ((((((((arr_1 [i_0] [i_1]) ? (arr_0 [i_1]) : (arr_5 [i_1])))) ? var_0 : var_10)) < (max(6907071644648142067, -6907071644648142067))));
            }
        }
    }
    var_17 = var_11;
    #pragma endscop
}
