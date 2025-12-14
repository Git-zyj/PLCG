/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_12;
    var_18 = (min(var_18, var_2));
    var_19 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_20 ^= (-1 ? 0 : -1);
                arr_5 [i_1 - 1] = ((2147483647 >> (var_5 || 18446744073709551615)));
            }
        }
    }
    #pragma endscop
}
