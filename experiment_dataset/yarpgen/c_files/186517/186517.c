/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186517
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] = (((arr_1 [i_0]) ? 1 : 127));
                var_14 ^= 1;
                var_15 = ((((((arr_1 [i_1 + 1]) ? (arr_1 [i_1 + 1]) : 1))) ? (arr_2 [i_0] [i_0] [i_1]) : (((arr_3 [i_1] [1]) ? (arr_2 [i_1] [i_0] [i_1]) : (arr_1 [i_1 - 1])))));
            }
        }
    }
    var_16 = var_7;
    #pragma endscop
}
