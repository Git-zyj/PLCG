/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110237
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        arr_4 [0] = -1839604582;
        arr_5 [1] = ((((((var_11 ? (arr_0 [i_0]) : var_9)))) ? (((((((arr_1 [i_0] [i_0]) ? 3849932088 : (arr_1 [i_0] [i_0])))) ? ((((arr_0 [i_0 - 3]) >= (arr_0 [8])))) : (arr_1 [i_0 + 2] [i_0 - 1])))) : (max(5938986684557594557, 5938986684557594557))));
    }
    var_14 = var_10;
    var_15 = (max(var_15, var_2));
    #pragma endscop
}
