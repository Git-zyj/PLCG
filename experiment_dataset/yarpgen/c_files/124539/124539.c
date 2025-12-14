/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;
    var_11 = (((max((((var_5 << (var_8 - 1455080724)))), (max(9681142452308441901, var_2)))) >= var_4));

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_12 = var_6;
        var_13 = ((((min(244, 233))) << (((max(4294967295, var_7)) - 4294967283))));
        var_14 = ((-(~4294967277)));
        arr_2 [i_0] = (~var_6);
        var_15 = ((~(~17259431816145973815)));
    }
    #pragma endscop
}
