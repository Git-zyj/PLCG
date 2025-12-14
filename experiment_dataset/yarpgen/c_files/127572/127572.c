/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = ((!((!((min(var_8, (arr_1 [i_0]))))))));
        arr_3 [i_0] = (min(((~((562812514467840 ? (arr_0 [i_0 + 1] [i_0 - 1]) : (arr_1 [i_0]))))), (((((~(arr_1 [i_0 - 1])))) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0 - 1])))));
        arr_4 [i_0] = (max((((-(arr_0 [i_0] [i_0 - 1])))), var_10));
        arr_5 [i_0] = (min((arr_0 [i_0] [i_0]), (min((arr_0 [i_0 - 1] [i_0]), (~var_11)))));
    }
    var_14 = ((~(min(-562812514467862, var_12))));
    var_15 = var_0;
    #pragma endscop
}
