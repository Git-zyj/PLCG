/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 266938420;
    var_21 = (((((!3) && var_1)) ? ((min(105, (var_11 && -1)))) : (max(((19 ? -30 : -12)), var_10))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [1] = (arr_0 [i_0]);
        arr_3 [i_0] = (arr_1 [i_0]);
        var_22 ^= (((arr_0 [i_0]) + (arr_0 [i_0])));
    }
    var_23 = ((0 >> (-22 + 31)));
    #pragma endscop
}
