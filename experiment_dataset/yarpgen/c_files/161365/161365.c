/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = var_5;
        arr_3 [i_0] = (((arr_0 [i_0 - 1]) ? 0 : -49));
        arr_4 [i_0 - 1] [i_0] = 65535;
        var_11 = (min(var_11, (((82 / ((min(20, -18))))))));
        var_12 -= (5169801770111151799 < -1935903007);
    }
    var_13 = -1573070074518500640;
    #pragma endscop
}
