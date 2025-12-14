/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_16 = -9223372036854775778;
                    var_17 *= (((~var_13) == 6152826755429917528));
                }
            }
        }
        arr_9 [i_0] = 289626213;
    }
    var_18 &= (-22201 / 22202);
    #pragma endscop
}
