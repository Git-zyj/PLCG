/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179694
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_7 - -var_11);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0 - 1] [i_0 - 1] = (5678053927510789485 ? 4294967295 : (0 ^ 8388604));
        var_14 |= (40 / 7936);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = (arr_3 [i_1] [i_1]);
        var_15 = (min(var_15, (((-31727 ? 7936 : -51)))));
        var_16 ^= (-51 / 28);
    }
    #pragma endscop
}
