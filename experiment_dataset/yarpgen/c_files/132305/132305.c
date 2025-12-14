/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132305
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((3596748556 ? 3596748556 : -98));

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((min((arr_0 [i_0 - 1] [i_0 - 1]), 0))) ? (698218747 > -8377834231166785696) : ((-(arr_0 [i_0 + 2] [i_0 + 2])))));
        var_14 = ((16768041125348979850 ? 1678702948360571765 : 16760832));
    }
    #pragma endscop
}
