/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= var_7;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 += (1 || 268435455);
        var_17 -= (45 || 0);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 &= (((((-32767 - 1) ? 1 : 0)) * (!8191)));
                    var_19 = 15;
                    var_20 += ((((8191 << (2057992293 - 2057992278))) << ((1 & (-32767 - 1)))));
                }
            }
        }
        var_21 *= (!1);
    }
    var_22 |= var_4;
    #pragma endscop
}
