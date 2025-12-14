/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_17 = var_11;
                var_18 += (min((arr_1 [i_0]), (min(((-2147483636 ? 1735555661 : 70)), -2147483628))));
            }
        }
    }
    var_19 = var_3;
    #pragma endscop
}
