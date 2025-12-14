/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((max(var_10, (var_13 | var_6)))))));

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = max((max((arr_2 [i_0 + 2] [i_0]), var_2)), ((((arr_0 [i_0]) <= var_12))));
        var_15 = ((~((-((min((arr_2 [i_0] [i_0]), var_12)))))));
    }
    #pragma endscop
}
