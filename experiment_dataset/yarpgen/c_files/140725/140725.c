/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max((var_2 + -243), (3 - -var_8)));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_17 = ((arr_2 [i_0]) << (((-542611736 + 79) - 55)));
        var_18 = (248 + 30);
        var_19 = (((var_6 || 1) * (min(var_6, var_5))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_20 = (1 ? 1594 : (1 <= var_14));
        arr_7 [i_1] = var_0;
    }
    var_21 = (min(var_21, var_15));
    var_22 = (min(var_22, (min((45 || var_2), var_0))));
    #pragma endscop
}
