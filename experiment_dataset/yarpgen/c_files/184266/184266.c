/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_0, (max((!-2662580012328488366), (~var_6)))));
    var_12 = (min(var_12, (8311480681620498312 - var_8)));
    var_13 = ((var_9 < (0 + var_2)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = (max(((((15 ^ 4294967285) << (min(11, -30))))), 18446744073709551615));
                var_15 = (max(4236777989410536737, 4294967265));
            }
        }
    }
    var_16 = (max((max(var_2, var_2)), 1));
    #pragma endscop
}
