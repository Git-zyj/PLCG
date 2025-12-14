/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_0] = 536870911;
                arr_5 [i_1] = (((((((~(arr_1 [i_0]))) & (arr_1 [i_0])))) ? ((((~(arr_1 [i_1 + 1]))) ^ var_11)) : (~25603)));
            }
        }
    }
    #pragma endscop
}
