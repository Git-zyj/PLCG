/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((-2575037121062215945 + 9223372036854775807) << (var_4 - 128))) | ((6421 ? 2575037121062215944 : var_5))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_14 = 11;
                arr_6 [i_0] = (+(min((arr_5 [i_0 - 3] [i_1] [i_1]), var_7)));
            }
        }
    }
    var_15 = var_8;
    #pragma endscop
}
