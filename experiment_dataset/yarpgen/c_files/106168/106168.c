/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_18 |= var_1;
                            var_19 |= 10863228463032944279;
                            var_20 *= ((49 ? 7205565388106948473 : 10863228463032944271));
                        }
                    }
                }
                var_21 *= (0 <= 18446744073709551603);
            }
        }
    }
    #pragma endscop
}
