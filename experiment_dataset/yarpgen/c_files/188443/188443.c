/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188443
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += (((min((var_12 > var_17), var_9)) != var_17));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0 + 1] = var_4;
        arr_3 [i_0] |= var_16;
        var_21 = ((((min((arr_0 [i_0]), (arr_1 [9])))) / (arr_1 [i_0])));
    }
    var_22 = var_12;
    #pragma endscop
}
