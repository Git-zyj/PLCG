/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11556
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_10 = (min(var_10, (arr_3 [i_0 - 1])));
        arr_4 [i_0] = (95 * 65535);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        arr_9 [i_1] = (((arr_8 [i_1 - 1]) ? (arr_8 [i_1 + 2]) : (arr_8 [i_1 + 1])));
        var_11 = (max(var_11, (arr_6 [1])));
        var_12 += (-121 < -1321786502);
    }
    var_13 = (~var_5);
    #pragma endscop
}
