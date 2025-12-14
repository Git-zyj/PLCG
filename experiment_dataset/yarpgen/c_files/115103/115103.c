/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_17 ^= 46784;
        arr_4 [i_0] [i_0] = ((~(arr_0 [i_0 + 3])));
        var_18 = ((24214 >> (172 - 152)));
        var_19 = (((arr_2 [i_0 + 2]) / (arr_2 [i_0 + 1])));
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        var_20 = (~6036366158936583018);
        var_21 = (((54960 >> (var_8 + 3972566754890190021))));
    }
    var_22 = max(var_4, (((~82) - ((54960 ? var_13 : var_14)))));
    var_23 = (max(var_23, 819707154691145583));
    var_24 = ((-3143019270132798618 | (~var_7)));

    for (int i_2 = 2; i_2 < 13;i_2 += 1)
    {
        var_25 = (max(-19340, 932608931));

        for (int i_3 = 1; i_3 < 13;i_3 += 1)
        {
            var_26 &= var_4;
            var_27 ^= (((((~82) + 2147483647)) >> (!-29920)));
        }
        var_28 = ((max(var_13, var_12)));
    }
    #pragma endscop
}
