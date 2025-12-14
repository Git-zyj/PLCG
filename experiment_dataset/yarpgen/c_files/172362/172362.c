/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172362
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = -5025880672721292855;
        arr_4 [i_0] = ((var_11 ? (arr_2 [i_0]) : (arr_2 [i_0])));
        var_13 = (max(var_13, ((((arr_2 [i_0]) ? (min((((arr_1 [i_0] [i_0]) ^ 507921452)), (((-1357151688 | (arr_0 [i_0])))))) : (arr_0 [i_0]))))));
    }
    for (int i_1 = 2; i_1 < 13;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = (min(((~(~3659341515712059661))), (((((((arr_1 [i_1 + 2] [i_1 + 2]) ? 17870283321406128128 : (arr_7 [i_1])))) ? (arr_0 [21]) : 17689)))));
        var_14 = -33;
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 13;i_2 += 1) /* same iter space */
    {
        arr_12 [i_2] [i_2] = var_0;
        var_15 = (507921467 ? ((~(arr_7 [i_2]))) : (~-23));
    }
    var_16 = max(var_12, ((var_8 ? 2147483647 : (var_9 && var_9))));
    #pragma endscop
}
