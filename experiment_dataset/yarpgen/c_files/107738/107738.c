/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_3;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_13 -= (arr_1 [9] [i_0]);
        var_14 = (max(((-1 ? 710784416 : 7778977113016703387)), (max(((((arr_1 [i_0] [i_0]) >= (arr_2 [i_0] [i_0])))), (arr_2 [i_0] [i_0])))));
    }
    #pragma endscop
}
