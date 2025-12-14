/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_11 &= var_3;
        arr_4 [24] = (max((arr_0 [i_0] [i_0]), ((((arr_0 [i_0] [i_0]) > var_1)))));
        arr_5 [i_0] [i_0] = (((!(arr_2 [i_0]))));
        arr_6 [i_0] = (28600 | 24);
    }
    var_12 = var_9;
    #pragma endscop
}
