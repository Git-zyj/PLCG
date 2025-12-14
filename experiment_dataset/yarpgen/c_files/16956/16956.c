/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-(!2147483136)));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_14 = ((((0 ? 39 : 36)) + (((arr_2 [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_2 [i_0])))));
        var_15 = (max((((((arr_2 [i_0]) ? var_10 : 42)))), ((((~(arr_2 [i_0]))) ^ 253))));
        var_16 = (((min(50, (min(1, var_10)))) * var_2));
    }
    #pragma endscop
}
