/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= var_14;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_17 = ((var_8 < (~var_3)));
        var_18 = (min(var_18, (arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        var_19 = 3892119807931974249;

        /* vectorizable */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            arr_7 [i_2] = (((arr_3 [i_1 - 1]) << (((arr_3 [i_1 + 1]) - 9186))));
            var_20 = 1;
            var_21 -= (((-2 != -6) ? ((var_2 ? var_6 : var_6)) : var_6));
            arr_8 [i_1] [i_2] [i_2] = ((((((arr_3 [i_1]) - 1))) || (arr_2 [i_1 - 1] [i_1])));
        }
        for (int i_3 = 2; i_3 < 8;i_3 += 1)
        {
            arr_11 [i_1] = 1;
            var_22 = ((var_5 | (((arr_2 [i_1 - 1] [i_3 + 2]) ^ (-32767 - 1)))));
            var_23 *= 0;
            arr_12 [i_3] [i_1] = ((!((((arr_0 [i_3] [i_3]) ? (max((-32767 - 1), 4294967273)) : var_11)))));
        }
    }
    var_24 = (min(var_24, var_11));
    #pragma endscop
}
