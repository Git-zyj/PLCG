/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_11;
    var_16 = (var_14 ? var_14 : (((!17924) ? var_4 : (~var_7))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = ((((var_7 ? -9039383439241619407 : -14788)) + (((-(arr_1 [i_0]))))));
        arr_3 [i_0] = (arr_0 [i_0]);
    }
    var_17 &= (((((((var_0 ? var_11 : var_1)) << (var_11 - 209)))) ? var_10 : var_5));
    #pragma endscop
}
