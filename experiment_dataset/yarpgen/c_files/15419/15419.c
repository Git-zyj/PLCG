/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 4550;

    for (int i_0 = 2; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = 2494529202;
        var_16 = (min(var_16, (((!((((-57 ? 1800438097 : 427268204)))))))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_17 *= 42;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                {
                    var_18 ^= 3254118245297745034;
                    var_19 ^= 5004368565401450464;
                    arr_11 [i_2] = (33557 < 745145492614015473);
                }
            }
        }
        arr_12 [i_1] [i_1] = 4816;
    }
    #pragma endscop
}
