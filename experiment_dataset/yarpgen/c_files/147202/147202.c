/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_14 = 3001992542;
                var_15 = (((arr_1 [i_0]) ? ((((!(((0 * (arr_1 [i_0])))))))) : (arr_4 [i_0])));
                var_16 ^= (!10992246654740388363);
            }
        }
    }
    var_17 = (var_5 ^ 0);
    #pragma endscop
}
