/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_14 = (((!-1) == (arr_0 [i_0] [i_0])));
        var_15 = (arr_2 [i_0]);
        var_16 = (min(var_16, (((-(max((arr_1 [i_0] [i_0]), (max((arr_1 [i_0] [i_0]), (arr_2 [i_0]))))))))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_17 *= var_4;
        var_18 = 0;
    }
    var_19 = var_0;
    #pragma endscop
}
