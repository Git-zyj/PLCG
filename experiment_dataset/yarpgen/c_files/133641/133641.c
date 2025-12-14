/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, 42));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_18 *= -36;
                var_19 *= 15098;
                var_20 = 8054;
                var_21 -= -10;
            }
        }
    }
    var_22 = 121;
    #pragma endscop
}
