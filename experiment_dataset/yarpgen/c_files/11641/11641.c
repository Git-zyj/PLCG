/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_2;
    var_14 = (min(var_14, var_1));
    var_15 &= (max((18425 - 2147483639), var_10));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_16 *= ((((((-64 ? 16049023592834619291 : -18425))) && var_4)));
        arr_2 [i_0] = ((~(arr_1 [i_0] [i_0])));
        var_17 ^= (168 - var_5);
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 20;i_1 += 1)
    {
        var_18 = ((9007199254739968 ? ((((arr_4 [i_1] [i_1]) ? 1 : 1))) : ((1 ? 562949819203584 : (arr_4 [18] [i_1])))));
        var_19 = (min(var_19, (((18446744073709551615 ? -24319 : (arr_4 [i_1] [i_1 + 1]))))));
    }
    #pragma endscop
}
