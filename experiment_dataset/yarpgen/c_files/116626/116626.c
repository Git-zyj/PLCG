/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116626
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_17 = ((~(arr_1 [i_0] [i_0])));
        arr_2 [15] &= (!138);
        arr_3 [i_0] [i_0] = ((2147483647 ? 2079923976131668108 : -18));
        arr_4 [i_0] = (min(-1620564026, ((1 ? 7 : 11))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_7 [i_1] = (min(var_16, (min(((max(1, -1606))), (~-32360)))));
        arr_8 [i_1] = var_7;
    }
    var_18 = (min(var_18, ((max(var_3, ((2 | ((var_7 ? -26832 : -32360)))))))));
    var_19 = ((((((max(var_16, var_13))) ? (min(var_15, -6913)) : (((max(var_4, var_4)))))) != (((var_11 - (1 == 0))))));
    var_20 = (1 < (min(1, ((1 ? 3 : 65535)))));
    #pragma endscop
}
