/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_11;
    var_16 ^= ((1 > (var_0 << var_6)));
    var_17 = (var_14 && 0);

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = (((var_13 & 12) ? (((var_9 == 3089936971) ? 1 : (44 / var_11))) : (!var_8)));
        var_18 = var_12;
        arr_4 [7] = ((var_7 & var_6) ? ((var_5 ? 32767 : 1)) : (var_5 - -181561863));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_19 = 23;
        arr_8 [i_1] [i_1] = (var_6 < var_14);
    }
    #pragma endscop
}
