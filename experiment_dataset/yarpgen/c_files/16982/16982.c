/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_6;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [2] = -79;
        var_21 = (!63090);
        var_22 = -2768;
        arr_3 [i_0] [i_0] = var_13;
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = ((var_0 && (arr_5 [i_1])));
        arr_7 [i_1] = ((-23 - ((-(arr_4 [i_1])))));
    }
    var_23 = 123;
    #pragma endscop
}
