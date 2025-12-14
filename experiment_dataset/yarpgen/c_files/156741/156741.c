/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_4;
    var_16 = var_10;

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_17 = (max((0 << 6), ((var_9 ? var_0 : var_8))));
        arr_4 [i_0] [4] = (max(((826226509 ? 2407392180 : -1)), ((var_4 ? -95 : (arr_0 [i_0] [i_0])))));
        var_18 = ((105 * (max(-87, 19))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_19 = (((((arr_7 [i_1]) ? var_10 : var_8)) + (-32 < 514990656)));
        arr_8 [i_1] = (~3861452961);
    }
    var_20 = (((((var_10 <= (max(4294967295, var_7))))) - var_11));
    #pragma endscop
}
