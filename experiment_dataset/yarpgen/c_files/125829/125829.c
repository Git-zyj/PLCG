/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_7;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_14 = (((arr_3 [i_0]) >= (arr_3 [i_0])));
        var_15 = ((((max((((!(arr_3 [2])))), (arr_3 [i_0])))) ? (arr_3 [i_0]) : (arr_1 [i_0])));
    }
    var_16 = var_1;
    var_17 ^= var_3;
    #pragma endscop
}
