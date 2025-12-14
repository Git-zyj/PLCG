/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_6;
        arr_3 [i_0] = ((~(arr_0 [i_0 - 3] [i_0])));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_7 [i_1] = (((min(var_2, (arr_5 [7]))) >> (((arr_4 [i_1]) ^ (arr_4 [i_1])))));
        var_11 = (((arr_5 [i_1]) ? ((min((arr_5 [i_1]), var_9))) : ((~(arr_5 [i_1])))));
    }
    var_12 |= var_8;
    #pragma endscop
}
