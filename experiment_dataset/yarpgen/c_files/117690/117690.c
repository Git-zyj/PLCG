/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((-18449 ? 18449 : -18438))) ? (!var_4) : (max(var_11, 10560401061980328041))));
    var_21 = ((min(7886343011729223578, 586183977357879270)));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_22 = (max(var_22, 7886343011729223574));
        arr_3 [i_0] [i_0] = (max(29818, ((max((arr_1 [i_0]), (arr_1 [i_0]))))));
        arr_4 [i_0] = (min(((((max((arr_1 [i_0]), var_9))) ? (~var_0) : ((max((arr_2 [i_0]), (arr_0 [i_0])))))), (arr_2 [i_0])));
        var_23 = (max((arr_1 [i_0]), ((min(var_10, (arr_0 [4]))))));
    }
    var_24 = ((((var_0 ? ((var_3 ? var_12 : var_12)) : ((var_3 ? var_17 : var_11)))) + (7886343011729223579 < 18449)));
    var_25 = var_8;
    #pragma endscop
}
