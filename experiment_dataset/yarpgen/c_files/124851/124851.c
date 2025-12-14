/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_11;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            var_14 ^= (1567136082 >> (2097152 - 2097133));
            var_15 = (!var_11);
            var_16 = (min(var_16, 13));
            var_17 = (~1023);
        }
        var_18 = var_1;
    }
    var_19 = var_10;
    #pragma endscop
}
