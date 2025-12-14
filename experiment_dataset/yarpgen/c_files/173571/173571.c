/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-(((max(var_3, var_1)) | (-624743166 | var_8)))));
    var_14 = (max(var_14, var_3));
    var_15 = var_1;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_16 = (min(var_16, ((max(624743165, ((((min(-624743159, 1)) > (arr_1 [i_0])))))))));
        arr_3 [i_0] = ((~(((arr_0 [i_0] [i_0]) & var_3))));
    }
    #pragma endscop
}
