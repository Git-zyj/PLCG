/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        var_11 = (+((((arr_0 [i_0]) >= -18328))));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_12 *= (((~11) ? 1011736279 : (arr_1 [i_1])));
            arr_4 [i_0] = (arr_0 [i_1]);
            arr_5 [i_0] [i_0] = ((!16956257396269211701) > ((1 ? (arr_3 [i_1] [i_0 - 3]) : (arr_3 [i_0] [i_1]))));
        }
        arr_6 [i_0] = (!1);
    }
    var_13 = (1 ^ 1926089958);
    var_14 = 2470614247;
    var_15 = var_0;
    #pragma endscop
}
