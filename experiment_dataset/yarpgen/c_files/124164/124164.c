/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_17 ^= (!3987484286);
                arr_5 [i_0] = 1195282118;
            }
        }
    }
    var_18 -= (max((((-(1528290564 / 1195282139)))), 2080374784));
    #pragma endscop
}
