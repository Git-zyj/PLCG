/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (var_3 > 4392);

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_12 = ((+((((((arr_1 [i_0]) ? (arr_1 [i_0]) : 1556))) ? (arr_0 [i_0 - 1] [i_0 - 1]) : (((max(1, 127))))))));
        var_13 = (((~((~(arr_1 [i_0]))))));
    }
    #pragma endscop
}
