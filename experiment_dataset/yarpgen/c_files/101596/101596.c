/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= (16131437808261365375 ^ -18);

    /* vectorizable */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_16 = (arr_2 [i_0]);
        var_17 -= -14;
        var_18 = (max(var_18, ((((arr_0 [2] [i_0 + 1]) || (arr_0 [6] [i_0 - 2]))))));
        var_19 *= var_9;
        var_20 = ((arr_0 [i_0] [i_0]) == (arr_0 [i_0] [i_0]));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_21 *= (max((((5 ? 3860768049507664401 : 55255))), -18));
        var_22 = 26;
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_23 = (max((max(12184152922054519131, (arr_6 [i_2]))), ((max(-43, var_3)))));
        var_24 = -42;
        var_25 = -3284453002573031475;
    }
    #pragma endscop
}
