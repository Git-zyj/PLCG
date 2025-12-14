/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~0);

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_13 += ((-242 != ((0 ? 8950431144768624393 : ((-(arr_0 [i_0])))))));
        var_14 *= (arr_1 [12]);
    }
    var_15 = var_1;
    #pragma endscop
}
