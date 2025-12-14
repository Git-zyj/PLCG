/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120025
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_16 *= (((var_8 > var_10) % (306193797009145507 + 1)));
                arr_6 [i_0] [i_1] |= (((2972398330550746062 ^ 7) == (((((((18446744073709551599 != (-127 - 1)))) != (-27647 <= -434323818)))))));
            }
        }
    }
    var_17 = (max(var_17, ((var_5 < ((((var_6 + var_5) || var_12)))))));
    #pragma endscop
}
