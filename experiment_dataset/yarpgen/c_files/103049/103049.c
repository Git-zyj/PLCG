/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103049
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                var_17 = (max(var_17, 16225162139154076643));
                var_18 = (arr_3 [i_0 + 1] [i_0 - 1] [i_0 - 1]);
                var_19 ^= (arr_4 [i_1 - 2] [i_1 - 2]);
            }
        }
    }
    var_20 = var_8;
    #pragma endscop
}
