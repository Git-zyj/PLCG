/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= var_9;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_18 = ((((max(65535, var_1))) != ((((arr_1 [i_0]) > (arr_1 [i_0]))))));
        var_19 = (~var_2);
    }
    #pragma endscop
}
