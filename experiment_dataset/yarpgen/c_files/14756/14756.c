/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14756
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_18 = ((15171801170944325271 == (((~(!1859417540))))));
        var_19 = (((min((((arr_0 [i_0] [i_0]) ^ 1859417540)), (((1859417540 ? 1859417540 : -113))))) * (arr_3 [i_0])));
        var_20 = min(38125, 1353660856);
        var_21 = (((!-113) | (((arr_2 [i_0]) + (arr_0 [i_0] [i_0])))));
    }
    for (int i_1 = 3; i_1 < 16;i_1 += 1)
    {
        var_22 = (min(-18534, 113));
        var_23 = -6850185674861872318;
    }
    var_24 = (min(4294967295, 48819));
    var_25 -= -18534;
    #pragma endscop
}
