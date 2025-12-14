/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = max((((((min(var_13, -3334880534649239950)) + 9223372036854775807)) >> ((((max(var_6, 1))) - 62)))), ((((((-7636941882134526443 ? 129 : 48920))) ? (arr_1 [i_0] [i_0]) : (((0 ? 97 : 1576117751)))))));
        arr_4 [i_0] = ((((((65522 ? (arr_2 [i_0]) : ((min(var_0, 7))))) + 2147483647)) >> (((-2147483647 - 1) & (!1483099228)))));
    }
    var_17 = (~var_14);
    var_18 |= ((var_12 ? (201 << var_0) : (!4225466843)));
    var_19 -= -2102560286;
    #pragma endscop
}
