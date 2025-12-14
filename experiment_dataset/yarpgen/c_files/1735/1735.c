/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1735
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_13;

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] = (arr_0 [i_0]);
        var_17 = (max(var_17, (arr_1 [0])));
        arr_5 [i_0] = (~281226184);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        arr_8 [i_1] [6] = ((1956991283 ? 154 : (arr_3 [i_1] [i_1 + 1])));
        var_18 *= var_10;
    }
    var_19 = ((~((((max(1956991283, -88))) ? (!281226184) : (!var_3)))));
    #pragma endscop
}
