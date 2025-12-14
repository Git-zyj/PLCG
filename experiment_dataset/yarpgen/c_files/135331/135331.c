/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135331
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_7 ? ((min(var_6, var_7))) : ((((2173282308488276092 ? 2457976834 : 9202954058094600017)) % -var_8))));

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0 - 1] = (((((~((-(arr_0 [i_0] [1])))))) ? ((max(((max(1, var_0))), var_7))) : ((((((arr_1 [7] [7]) ? (arr_0 [i_0] [14]) : 503316480))) ? (((arr_0 [i_0] [1]) ? (arr_1 [i_0] [4]) : var_3)) : (max((arr_0 [i_0] [i_0]), (arr_1 [i_0] [i_0])))))));
        var_13 = ((-((~(arr_1 [5] [i_0 + 2])))));
        var_14 = (max(var_14, ((-3891365513210064954 ? (((min((arr_0 [6] [i_0 + 2]), (arr_0 [12] [i_0 + 2]))))) : (((arr_1 [i_0 + 2] [i_0 - 1]) ? 5064452953536341006 : 9202954058094600013))))));
    }
    #pragma endscop
}
