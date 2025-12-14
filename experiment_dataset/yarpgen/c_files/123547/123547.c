/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (((((arr_2 [i_0] [i_0]) - (arr_2 [i_0] [i_0]))) + ((((((arr_0 [i_0]) - (arr_1 [i_0])))) + (arr_2 [i_0] [1])))));
        var_10 = ((((arr_2 [i_0] [i_0]) <= (arr_1 [i_0]))));
    }
    var_11 = var_3;
    #pragma endscop
}
