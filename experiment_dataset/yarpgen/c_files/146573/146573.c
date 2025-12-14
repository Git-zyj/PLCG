/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (1940037326 << (((((var_18 && var_5) ? var_12 : (!41899))) - 3262234946)));
    var_20 = var_10;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1) /* same iter space */
    {
        var_21 = (4294967285 ? (-9223372036854775807 - 1) : (!-4));
        arr_3 [i_0] = (((arr_0 [i_0 - 1]) ? 21262 : (arr_2 [i_0 - 1])));
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1) /* same iter space */
    {
        var_22 &= (arr_6 [i_1] [i_1]);
        arr_7 [i_1] = var_7;
    }
    for (int i_2 = 1; i_2 < 9;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = (arr_9 [i_2 + 1] [i_2]);
        arr_11 [i_2] [i_2] = (min(var_2, var_15));
    }
    var_23 = ((var_16 ^ (((~((var_13 ? 4294967285 : -10)))))));
    #pragma endscop
}
