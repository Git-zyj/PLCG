/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((var_13 ? (min(1624530636, 102)) : 1624530636))) ? (max(((var_3 ? var_10 : var_16)), ((min(var_17, var_17))))) : -var_10));
    var_21 += ((((-8812794434428423396 ? ((((-1624530633 + 2147483647) << (var_0 - 446905069)))) : (~2185134509697063183)))) ? -var_2 : (-8989607068696576 % var_4));

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_22 = ((((min(1, 49)))));
        var_23 ^= (((arr_0 [i_0 + 1]) >= (((((2971792210 ? 4070370500 : (arr_2 [i_0] [i_0])))) ? (min((arr_1 [i_0]), (arr_2 [i_0] [i_0 + 1]))) : (!184)))));
    }
    #pragma endscop
}
