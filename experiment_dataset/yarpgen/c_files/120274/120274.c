/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = -371971805;
        arr_3 [i_0] = 1266766717;
    }
    var_14 = (min(var_7, ((((((1266766695 ? var_8 : -1266766705))) ? (!-22) : (max(-1266766706, 4294967277)))))));
    #pragma endscop
}
