/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (~var_10);
    var_15 = (var_11 >= var_11);
    var_16 = 2123386175;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] [6] = 1362251130;
        arr_5 [i_0] = ((1 ? -122 : -53));
    }
    #pragma endscop
}
