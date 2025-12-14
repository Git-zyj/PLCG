/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0 + 1] = ((((((~((max(67, (arr_0 [i_0])))))) + 2147483647)) >> ((((1026494406 ? 57344 : (arr_1 [i_0 - 3]))) - 57335))));
        var_14 = (max(((((2687316118 <= 15373926275752164985) & (max((arr_0 [i_0]), 2097448633))))), (1879172526 | var_2)));
        arr_3 [i_0 - 3] = ((-(((((1 ? var_5 : -7126114354705338209))) | ((107 ? 17037 : 144044819331678208))))));
    }
    var_15 -= 17063;
    var_16 *= var_0;
    var_17 -= ((+((-24073 ? (!var_12) : ((1040055548321436301 ? var_12 : var_2))))));
    var_18 -= -var_12;
    #pragma endscop
}
