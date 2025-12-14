/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_2 [6] |= (min((((arr_1 [i_0 + 3]) + (arr_1 [i_0 + 3]))), ((min((arr_1 [i_0 + 2]), (arr_1 [i_0 + 3]))))));
        arr_3 [18] [18] |= (((arr_0 [24]) ? (min(((min((arr_1 [i_0]), var_9))), ((~(arr_0 [4]))))) : ((((74 ? (arr_0 [18]) : var_1)) & ((min(var_6, (arr_0 [18]))))))));
    }
    var_16 &= (min(158, var_11));
    #pragma endscop
}
