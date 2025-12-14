/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] = ((((max(var_5, 18446744073709551615))) ? 11 : 7235835430192581576));
        var_14 = (min(var_14, ((min((max((arr_3 [i_0]), (arr_3 [i_0]))), (arr_3 [i_0]))))));
        arr_5 [i_0] = (arr_3 [i_0]);
        arr_6 [i_0] = (arr_3 [i_0]);
    }
    var_15 = -var_11;
    var_16 = var_2;
    #pragma endscop
}
