/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_4;

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0 - 1] [i_0] = (arr_1 [i_0]);
        arr_4 [i_0] = (arr_0 [i_0] [i_0 - 1]);
        arr_5 [8] [i_0 + 2] = ((((((arr_1 [i_0]) ? var_4 : (arr_2 [i_0])))) / (max((((arr_0 [i_0] [i_0 - 1]) ? var_10 : -9223372036854775806)), (((arr_1 [i_0]) ? (arr_1 [i_0 + 1]) : 1))))));
    }
    var_13 = var_2;
    #pragma endscop
}
