/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123358
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_18 ^= (15680 > -15681);
        var_19 -= ((var_8 ? ((-(min(15674, 1702999064)))) : 15680));
    }
    var_20 = (max(-21795, -25));
    var_21 = ((65535 ? 1 : -var_15));
    /* LoopNest 2 */
    for (int i_1 = 3; i_1 < 21;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            {
                arr_10 [i_1] [i_2] [i_2 + 1] = ((+((max((arr_8 [i_1 + 2] [i_2] [i_1 + 2]), 1)))));
                var_22 ^= ((15680 ? -var_13 : var_15));
                var_23 = (max(var_23, -13183));
                var_24 = (max(var_24, 1));
            }
        }
    }
    #pragma endscop
}
