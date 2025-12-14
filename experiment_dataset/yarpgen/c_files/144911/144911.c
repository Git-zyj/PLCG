/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 24;i_0 += 1)
    {
        var_16 -= (!1524070671715819555);
        var_17 = (((!(arr_1 [i_0 - 3]))) ? (arr_0 [i_0 - 2]) : ((~(arr_0 [i_0 - 2]))));
        var_18 = (((min(40833, (arr_2 [i_0 - 4]))) - (~2215732920)));
        arr_4 [i_0] = (((((-11430 ? 1 : 26127)))) ? (arr_2 [i_0 - 3]) : (arr_2 [i_0 - 2]));
    }
    var_19 = var_4;
    #pragma endscop
}
