/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_10 = ((!(((max((arr_3 [i_0] [i_0]), (arr_1 [i_0]))) == (arr_3 [i_0] [1])))));
        arr_4 [i_0] = -3343409986564009473;
        var_11 ^= var_4;
        var_12 = (~65535);
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_13 = ((((min((~var_1), (max((arr_6 [i_1] [i_1]), (arr_1 [i_1])))))) ? -var_8 : (arr_6 [9] [i_1])));
        var_14 = ((~((-1 ? 58961 : 3184248936))));
        arr_7 [i_1] = arr_6 [i_1] [i_1];
    }
    var_15 = var_6;
    var_16 += var_8;
    var_17 += var_5;
    #pragma endscop
}
