/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        arr_4 [8] [8] |= (((((arr_0 [i_0 + 3] [i_0 + 2]) < (arr_2 [20] [20]))) ? ((((!(arr_0 [i_0] [i_0 + 3]))))) : ((((((arr_1 [14]) ? (arr_1 [1]) : 19122))) ? (((arr_0 [i_0] [i_0]) ? var_9 : (arr_1 [0]))) : var_6))));
        arr_5 [i_0] = (min((arr_2 [i_0] [i_0]), (((((~(arr_3 [i_0])))) ? ((max((arr_1 [i_0]), var_12))) : var_13))));
    }

    for (int i_1 = 4; i_1 < 20;i_1 += 1)
    {
        var_16 = -49964;
        var_17 = var_10;
    }
    #pragma endscop
}
