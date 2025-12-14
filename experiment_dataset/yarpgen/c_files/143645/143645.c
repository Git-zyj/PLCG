/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_13 = (min(((min(((min(var_8, var_6))), (~var_8)))), var_0));
        var_14 = (min((min(var_5, (min(var_1, var_9)))), (min(var_9, ((min(var_5, var_11)))))));
        var_15 = ((-(min(var_9, (min(var_2, var_8))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
        {
            var_16 ^= (~var_2);
            var_17 += (!var_9);
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
        {
            var_18 = (min(var_18, ((min(26, 25)))));
            var_19 &= (min((min(var_1, var_4)), (5428482924320743705 | 239)));
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        var_20 = var_9;
        var_21 = (var_10 || var_8);
        var_22 = var_12;
        var_23 = (min(var_23, -var_6));
    }
    var_24 = var_5;
    #pragma endscop
}
