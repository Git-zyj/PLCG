/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (!-69);
        arr_5 [i_0] [6] = ((-74 - (((((var_17 ? -47 : 10322))) ? (~46) : ((-(arr_0 [i_0 - 1] [15])))))));
    }
    var_20 = 1;
    var_21 *= (((((-((max(18828, -74)))))) ? -0 : ((-((max(-47, 1)))))));
    #pragma endscop
}
