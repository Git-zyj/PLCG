/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_14, -var_14));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_17 = (min(var_17, (arr_0 [i_0] [0])));
        var_18 = (max(var_18, (((((!(arr_1 [i_0] [i_0]))) ? (((!(((var_10 ? var_10 : 4096)))))) : (min((arr_1 [12] [1]), (((!(arr_0 [i_0] [i_0])))))))))));
    }
    #pragma endscop
}
