/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = 7738;
        arr_4 [i_0] = 34222;
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_7 [i_1] = (min((7736 & 14065856234719464627), 32512));

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_19 *= (max(57798, (!0)));
            var_20 = (min(var_20, 19018));
            var_21 = (57797 ^ 39212);
            var_22 -= max(18446744073709551615, -69);
        }
        for (int i_3 = 1; i_3 < 18;i_3 += 1)
        {
            arr_12 [i_1] = (max(57798, (864 << 0)));
            var_23 -= ((4069882211864585896 ^ ((max(246, 85)))));
        }
        for (int i_4 = 1; i_4 < 18;i_4 += 1)
        {
            arr_15 [i_1] = (min(57784, 9));
            arr_16 [i_1] [i_4 + 1] = (!51);
        }
        arr_17 [10] [10] |= (((-14 & (-127 - 1))));
    }

    for (int i_5 = 3; i_5 < 11;i_5 += 1)
    {
        arr_22 [i_5] [i_5] = 10617613793784383428;
        var_24 = (min(20511, 16381770101641044447));
    }
    var_25 = (min(((max((max(556, -56)), var_7))), var_10));
    #pragma endscop
}
