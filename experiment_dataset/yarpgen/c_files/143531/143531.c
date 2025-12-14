/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_1 + ((min(var_7, var_3)))));
    var_14 = (min(var_14, ((max(var_10, var_4)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = (arr_2 [i_0]);
        arr_5 [i_0] = (arr_2 [i_0]);
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_15 = (arr_6 [i_1]);
        var_16 = (min(((min(32767, 32767))), (min((arr_6 [i_1]), (min((arr_6 [i_1]), -1))))));
        arr_8 [i_1] [i_1] = min((min((arr_6 [i_1]), (arr_7 [i_1]))), (arr_7 [i_1]));
    }
    #pragma endscop
}
