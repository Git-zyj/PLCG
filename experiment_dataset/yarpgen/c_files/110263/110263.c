/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = min((5887319342221559021 & -958918373098479766), (min(4272838815, 10288)));
        var_14 = 38;
        var_15 = (min(var_15, (((var_2 != (((arr_0 [1]) * -30530)))))));
    }
    var_16 = ((((var_12 ^ (min(520093696, 19)))) + ((67 ? (!246) : var_4))));
    #pragma endscop
}
