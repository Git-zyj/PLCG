/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_14 = (max(var_14, (((!((max((arr_1 [i_0]), (arr_1 [i_0 - 1])))))))));
        var_15 = (max(var_15, ((min((min(2569317155, 2569317155)), (arr_0 [0] [0]))))));
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        var_16 += ((~(~-32)));
        var_17 = var_12;
    }
    var_18 = (max(var_18, (((var_5 & (((var_8 > (64174 & 29012)))))))));
    var_19 = var_10;
    #pragma endscop
}
