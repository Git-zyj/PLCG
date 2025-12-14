/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131723
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= ((max(var_4, ((max(var_5, -11486))))) - var_6);
    var_11 = ((((max((var_3 <= var_6), (min(var_9, var_8))))) >> (((max((((var_2 + 2147483647) << (((var_2 + 50) - 4)))), (max(var_4, var_5)))) - 2147483576))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = (((max((((var_3 + 2147483647) >> (var_9 + 34))), ((min((arr_1 [i_0]), var_0))))) <= var_4));
        var_12 = (min(var_12, var_9));
    }
    var_13 -= var_2;
    #pragma endscop
}
