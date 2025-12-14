/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_2 & var_11);
    var_15 = var_1;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [10] = (((arr_2 [i_0]) ? ((min((arr_2 [i_0]), (arr_2 [i_0])))) : (((arr_2 [i_0]) << (arr_2 [i_0])))));
        arr_4 [5] = var_2;
    }
    var_16 ^= var_9;
    #pragma endscop
}
