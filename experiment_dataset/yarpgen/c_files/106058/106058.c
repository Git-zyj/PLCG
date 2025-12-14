/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_20 = (min(var_20, ((max(((-6529961331151991481 ? -6529961331151991481 : (~6529961331151991480))), (arr_0 [i_0] [8]))))));
        var_21 = (((arr_1 [i_0 + 1]) + var_18));
        var_22 = (((-6529961331151991477 + 9223372036854775807) << (222 - 222)));
    }
    var_23 = var_3;
    var_24 = var_5;
    #pragma endscop
}
