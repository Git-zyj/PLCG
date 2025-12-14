/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [1] = 65532;
        arr_3 [i_0] [i_0] = ((~(!9928200047107645549)));
        var_11 -= (min(((max(65532, 4294967295))), (min((min(var_10, var_9)), 0))));
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1)
    {
        var_12 = ((0 + (min(1, (max(6767194661290130852, var_2))))));
        var_13 = ((max((min(var_9, 0), 4))));
    }
    var_14 = var_2;
    var_15 = -1505878090969551893;
    #pragma endscop
}
