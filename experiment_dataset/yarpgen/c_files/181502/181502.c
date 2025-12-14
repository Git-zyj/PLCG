/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 6;i_0 += 1)
    {
        var_10 = (min(var_10, -28786));
        var_11 = (min(var_11, (arr_0 [i_0])));
        arr_2 [i_0] [i_0] = (arr_0 [i_0]);
        var_12 = (min(var_12, ((((254 * 196) ? (((((arr_1 [i_0 + 4]) == (arr_1 [i_0 + 2]))))) : (arr_0 [i_0]))))));
        var_13 = ((230 ? 247 : 247));
    }
    for (int i_1 = 3; i_1 < 12;i_1 += 1)
    {
        var_14 = (((((!var_5) * 14107022290988070629))) ? -75 : (((arr_4 [i_1 - 3]) ? -8093018639413470174 : 1660204361517972790)));
        arr_7 [i_1] [i_1] |= ((15979 ? -var_4 : var_0));
    }
    for (int i_2 = 2; i_2 < 15;i_2 += 1)
    {
        var_15 = (max(var_15, var_0));
        arr_11 [13] [i_2] = 14;
    }
    var_16 = var_1;
    #pragma endscop
}
