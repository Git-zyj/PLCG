/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129448
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= (min((max(((max(var_6, 12))), var_11)), var_7));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [15] = (arr_0 [i_0 - 1]);
        var_16 *= (arr_0 [i_0 - 1]);
        arr_3 [i_0] = (((~var_13) ? (arr_0 [i_0 + 1]) : (var_2 && var_0)));
    }
    for (int i_1 = 2; i_1 < 23;i_1 += 1)
    {
        var_17 ^= (min((((arr_4 [18] [i_1 + 2]) ? (arr_4 [4] [i_1 + 2]) : (arr_4 [12] [i_1 - 1]))), ((-(arr_5 [i_1 - 2] [i_1])))));
        var_18 += var_2;
        var_19 = (((arr_4 [14] [i_1]) ? (max(var_7, (max(14446, var_12)))) : (~14459)));
    }
    #pragma endscop
}
