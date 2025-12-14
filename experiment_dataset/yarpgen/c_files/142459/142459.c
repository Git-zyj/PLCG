/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(-126, var_11));
    var_13 = var_3;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_14 = ((((((arr_0 [i_0]) ? (arr_1 [i_0] [i_0]) : ((max(var_5, (arr_1 [i_0] [i_0]))))))) ? (((!(arr_0 [i_0])))) : (-127 - 1)));
        arr_2 [i_0] [i_0] = ((~(min((arr_0 [i_0]), ((~(arr_0 [i_0])))))));
    }
    #pragma endscop
}
