/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_16 = (max((min(32767, (arr_1 [i_0 - 1]))), ((var_6 ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 - 1])))));
        var_17 = (((((-((var_3 ? 1865373778 : 1905322183920104854))))) + (max((min(14923601875093088705, 62484)), var_1))));
        arr_2 [i_0 - 1] = (!var_11);
    }
    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {
        var_18 = var_15;
        var_19 = (105 < 3772792576);
        var_20 = (max(var_20, -1));
    }
    var_21 = var_0;
    #pragma endscop
}
