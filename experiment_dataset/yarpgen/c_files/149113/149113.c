/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= (max(((min(var_3, var_8))), (min((min(12463987391748804277, var_6)), var_13))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_17 = ((192 << (212 - 201)));
        var_18 = 127;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_19 *= (max(((~((max(var_10, 3463))))), (!var_8)));
                    var_20 = (max(var_20, ((-121 ? -121 : 13591))));
                }
            }
        }
        arr_8 [i_0] = ((((((-4870616053086100465 & 190) * var_13))) || 1));
    }
    var_21 = (min(var_21, ((~(!-var_5)))));
    #pragma endscop
}
