/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = 2350142258;
        arr_2 [i_0] = ((max(1944825059, 12232)));
        arr_3 [i_0] [i_0] = 1944825059;
        var_13 = (((max(64, (min(-30, 198))))) >= (((min(579436396550385088, 11457)))));
        var_14 = ((((max(10877595871687302461, 64)))) >= (4294967271 < 62));
    }
    #pragma endscop
}
