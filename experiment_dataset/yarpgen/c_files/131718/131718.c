/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_7 / (((min(-109, -109))))));
    var_21 = ((var_2 ? var_4 : -91));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = (var_19 / -72);
        var_22 ^= (((7 + var_14) / var_1));

        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            var_23 = 85;
            arr_5 [i_1] |= ((var_18 ? -92 : -32));
        }
        var_24 = (122 < 34);
    }
    #pragma endscop
}
