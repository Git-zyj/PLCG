/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_4;
    var_17 |= var_8;

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = ((-((16268142370590044213 ? 1 : (arr_0 [i_0 + 3])))));
        arr_4 [i_0] [i_0] = 5765633333551421175;
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        arr_7 [i_1] = (((((!1) ? var_3 : ((~(arr_6 [i_1] [16]))))) >> ((((~(((arr_5 [i_1]) ? -32406 : 1)))) - 32385))));
        arr_8 [i_1] [6] = var_1;
    }
    #pragma endscop
}
