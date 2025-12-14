/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= (max(var_2, (93 && 1485172918)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_18 *= ((~(-8908866802819782793 | 25165824)));
                var_19 *= 220;
                var_20 = var_13;
            }
        }
    }
    var_21 = var_7;
    var_22 = (((((-27469 ? (114 + 127) : 6412587137650017302))) ? var_7 : var_11));
    #pragma endscop
}
