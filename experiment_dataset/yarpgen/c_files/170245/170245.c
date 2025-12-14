/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170245
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_18 *= (-((67108856 ? 0 : 7148)));
        arr_3 [i_0] = (arr_0 [14]);

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_19 = 61;
            var_20 = (min(var_20, 4024409773732643179));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_21 += -15966;
            var_22 ^= (((arr_7 [i_0 + 2] [i_2]) ? (arr_7 [i_0 - 1] [i_0 - 1]) : var_14));
        }
        arr_10 [i_0] = arr_9 [i_0];
    }
    var_23 = 1;
    var_24 = (max(var_24, (((-8685 + ((53 ? (~1) : ((4294967295 ? var_2 : 5618)))))))));
    #pragma endscop
}
