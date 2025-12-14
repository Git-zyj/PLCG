/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((max((min(var_15, var_3)), (~var_8))) != (((((max(var_8, var_2))) * ((10 ? 134 : 112)))))));

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_17 = ((var_0 ? 198 : (((576458553280167936 != (arr_0 [i_0] [i_0 - 1]))))));
        var_18 = arr_0 [i_0] [i_0 - 2];
        var_19 = (arr_0 [i_0 + 1] [i_0]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_20 = (((((-(!var_7)))) % (max(var_5, (arr_3 [i_1])))));
        var_21 = -var_13;
    }
    #pragma endscop
}
