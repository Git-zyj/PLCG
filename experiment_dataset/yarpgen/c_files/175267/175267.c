/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = ((((((((var_1 ? var_6 : var_9))) ? ((~(arr_0 [i_0] [1]))) : (arr_1 [i_0]))) + 2147483647)) >> (var_8 - 55));
        var_15 |= (min((((!((min((arr_0 [i_0] [i_0]), var_1)))))), (((arr_1 [i_0]) ? 2851962945 : var_2))));
    }
    var_16 = var_4;
    var_17 = (min(var_12, var_5));
    #pragma endscop
}
