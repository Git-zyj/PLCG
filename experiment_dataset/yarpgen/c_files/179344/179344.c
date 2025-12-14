/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((((((1629298408 ? 4 : var_1))) ? (max(var_7, var_11)) : 19)), var_0));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_15 = -2996049087;
        arr_2 [i_0] = (max((arr_0 [i_0] [i_0]), (((min(6, 13538220205196706373)) ^ (arr_1 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_16 = var_8;
        arr_5 [i_1] = var_4;
    }
    var_17 = (~var_6);
    #pragma endscop
}
