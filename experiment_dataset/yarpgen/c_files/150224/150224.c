/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = var_1;
                var_12 ^= (max((-7561632490831557057 <= var_10), (var_11 || 17)));
            }
        }
    }
    var_13 = var_7;
    #pragma endscop
}
