/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_12 = (min(var_12, (-548 > 221)));
        var_13 -= (-4 != 17);
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1 + 4] = ((1 <= (-10 && var_9)));
        arr_7 [i_1 + 1] [i_1] = (max(((((((arr_4 [i_1]) ? 4 : var_2))) ? -1 : ((max(var_11, var_2))))), 1));
    }
    for (int i_2 = 1; i_2 < 21;i_2 += 1) /* same iter space */
    {
        var_14 = -8;
        arr_12 [i_2] = 7;
        var_15 = (((var_9 ? var_4 : 4136755159640313658)));
    }
    var_16 = 88;
    #pragma endscop
}
