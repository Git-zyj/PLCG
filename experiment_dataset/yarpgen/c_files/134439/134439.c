/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [5] = (arr_0 [i_0] [i_0]);
        arr_3 [i_0] = (min(12, 148));
        arr_4 [i_0] = (((arr_1 [i_0]) ? (((min((arr_1 [i_0]), (arr_1 [i_0]))))) : ((var_2 - ((-(arr_1 [i_0])))))));
    }
    var_20 = (((((var_18 ? var_16 : (min(var_11, var_2))))) ? ((var_9 / ((var_10 ? var_3 : var_9)))) : (((min(var_7, var_14))))));
    #pragma endscop
}
