/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_15 = (((-7712639175829546260 ? 32756 : -7712639175829546260)));
                var_16 ^= (max((7712639175829546260 ^ var_4), ((((((-93 + 2147483647) << (9223372036854775795 - 9223372036854775795)))) ? var_1 : var_8))));
            }
        }
    }
    var_17 = var_0;
    var_18 &= min(var_4, ((max((var_8 & 825478126584459606), (~-104103670)))));
    var_19 = var_14;
    #pragma endscop
}
