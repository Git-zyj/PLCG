/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = var_9;
        var_10 += (min((arr_1 [i_0 + 1]), (arr_2 [i_0] [i_0])));
        arr_4 [11] = ((~(arr_2 [i_0 + 1] [i_0])));
    }
    var_11 = ((((var_8 >> (((max(var_5, var_5)) - 229651318)))) ^ 52));
    var_12 = (~var_4);
    #pragma endscop
}
