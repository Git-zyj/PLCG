/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((!(var_2 >= var_8)));
    var_11 = var_0;
    var_12 = var_9;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [7] = ((min((1825686687 + 2469280611), ((((arr_0 [i_0] [1]) > (arr_0 [i_0] [i_0])))))) / 1825686687);
        arr_3 [i_0] = (((arr_0 [i_0] [i_0]) - (arr_0 [i_0] [i_0])));
    }
    #pragma endscop
}
