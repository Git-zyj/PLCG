/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        var_12 = (min(var_12, (-64 == 32767)));
        var_13 = (!-32767);
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_14 += (((!0) != (min(18446744073709551615, var_0))));
        arr_7 [i_1] [i_1] = ((22 << (534773760 - 534773749)));
        arr_8 [i_1] = (arr_5 [i_1]);
    }
    for (int i_2 = 2; i_2 < 22;i_2 += 1)
    {
        var_15 = -2147483639;
        var_16 = (min(var_16, (8 * 0)));
        var_17 = (128 / 1);
    }
    var_18 = (((-1 ? -2 : var_9)));
    var_19 = var_11;
    var_20 = ((-32767 ? ((var_5 ? 4294967295 : 2147483647)) : 255));
    var_21 |= var_11;
    #pragma endscop
}
