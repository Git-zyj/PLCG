/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169427
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= ((~(min((0 < 127), 0))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [9] = (arr_1 [i_0]);
        arr_3 [1] = (((((arr_0 [i_0]) - (var_4 & var_3))) & (((((0 ? var_6 : (arr_1 [i_0]))) + 2493666659)))));
        arr_4 [i_0] [4] = var_4;
    }
    var_11 = var_1;
    #pragma endscop
}
