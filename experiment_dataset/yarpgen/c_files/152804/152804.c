/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = (arr_1 [i_0]);
        arr_4 [i_0] = (arr_1 [i_0]);
        arr_5 [i_0] = ((max(var_14, (arr_2 [i_0]))));
    }
    var_15 = (min(var_15, (((max(var_12, var_13))))));
    #pragma endscop
}
