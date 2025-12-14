/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((arr_1 [i_0] [i_0]) ? (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : -55)) : (arr_1 [i_0] [i_0])));
        var_17 = ((((((((~(arr_0 [i_0])))) ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? ((((min(-6, -12))))) : ((61244 ? ((max(0, 4294967288))) : ((var_3 & (arr_0 [i_0])))))));
        arr_3 [i_0] = (min((max((arr_0 [i_0]), (arr_1 [i_0] [i_0]))), (arr_0 [i_0])));
    }
    var_18 = -var_12;
    #pragma endscop
}
