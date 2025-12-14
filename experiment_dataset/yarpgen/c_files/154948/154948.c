/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_11 ^= -2302651809283670469;

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_12 = min(14, 25);
                    var_13 *= (min(25, 2676));
                }
            }
        }
    }
    var_14 = var_1;
    var_15 = ((-7889574267378443769 > ((-1283718992 ? ((189 ? 3240756709744403898 : (-32767 - 1))) : 2993933605094691465))));
    #pragma endscop
}
