/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158162
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_17 = (((min((((arr_2 [i_0] [24]) ^ var_9)), (((arr_3 [i_0]) + var_9)))) - ((((((arr_3 [i_0]) >> (8995241174450253855 - 8995241174450253849)))) ? 60 : (arr_3 [i_0])))));
        var_18 = (min(var_18, var_16));
    }
    var_19 = var_13;
    #pragma endscop
}
