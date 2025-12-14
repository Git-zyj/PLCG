/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_13 = ((((arr_0 [i_0] [i_0]) ? (arr_2 [i_0]) : -32)));
        var_14 = (29603 ? (7 | 38480) : ((((255 ? 35932 : (arr_2 [i_0]))) & 2)));
    }
    var_15 = ((((((!5) | var_8))) ? var_0 : 165));
    var_16 = (max(var_16, 15967746895086619746));
    #pragma endscop
}
