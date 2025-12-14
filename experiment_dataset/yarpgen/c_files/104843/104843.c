/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (6890099877328983356 ? (((arr_2 [i_0] [i_0]) / 49447)) : (((1 | var_6) | var_8)));
        arr_4 [i_0] = var_7;
        var_10 = (max(var_10, (arr_2 [i_0] [i_0])));
    }
    var_11 = (min(var_11, (((var_9 / var_1) != var_8))));
    var_12 = var_3;
    var_13 = ((((((((var_7 ? 5173389184696435509 : 165))) ? -var_7 : ((min(var_2, var_1)))))) | var_6));
    #pragma endscop
}
