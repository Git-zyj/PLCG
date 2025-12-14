/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0] = (((((var_12 ? (var_11 & 0) : 2))) ? 252 : ((var_16 ? 14 : (~2)))));
        var_17 = 14;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_18 = 105;
        arr_9 [i_1] = 19;
        var_19 = (var_8 & var_7);
    }

    for (int i_2 = 1; i_2 < 17;i_2 += 1)
    {
        arr_12 [i_2] [i_2] = ((~((~(~var_2)))));
        var_20 = (max(var_20, ((min((~var_6), (~65519))))));
    }
    #pragma endscop
}
