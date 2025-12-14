/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_12 = 1023;
        arr_2 [3] [i_0] = ((0 ? ((1023 ? 0 : 1153037074)) : ((((~-1023) >= (arr_0 [1] [i_0 + 2]))))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_13 |= (max(64050, -110));
        var_14 = (arr_4 [0] [i_1]);
        var_15 = ((-((((min(var_9, (arr_4 [i_1] [1])))) ? (~var_3) : (var_6 & 1)))));
    }
    var_16 = ((-2113649629 ? 0 : ((max(var_8, var_9)))));
    #pragma endscop
}
