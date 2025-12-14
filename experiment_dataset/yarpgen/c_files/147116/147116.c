/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147116
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        var_18 = ((99 ? 5480222001881884484 : 99));
        var_19 = (max((arr_2 [i_0]), 2882822074776936988));
        var_20 = (min((arr_2 [i_0]), ((-((4 ? 771351483 : 771351490))))));
        var_21 = ((-(arr_0 [i_0] [i_0 + 2])));
    }
    var_22 *= -1;
    var_23 = (((var_6 ? (var_11 != 97) : 256274922)));
    #pragma endscop
}
