/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0 + 1] [i_0 - 1] = var_10;
        arr_3 [i_0 - 1] &= (!-511);
        arr_4 [i_0 + 1] &= ((6400 ? 511 : 225));
        var_14 = (min(1, (!1)));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        var_15 = (max(var_15, 807312494));
        arr_7 [i_1] = (((arr_5 [i_1]) ? (arr_5 [i_1]) : (arr_6 [i_1] [i_1 + 1])));
        arr_8 [i_1] [i_1] = ((~(arr_6 [i_1] [i_1 - 1])));
    }
    var_16 = var_11;
    #pragma endscop
}
