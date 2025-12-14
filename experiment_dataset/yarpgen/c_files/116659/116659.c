/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_2;
    var_16 = -815;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = (max(var_17, (((~(arr_1 [0]))))));
        arr_2 [i_0] [i_0] = var_4;
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        arr_7 [i_1] = ((67 && (arr_6 [i_1] [i_1])));
        var_18 *= ((max(var_4, (arr_3 [i_1]))));
    }
    var_19 = var_6;
    #pragma endscop
}
