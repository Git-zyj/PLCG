/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171522
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_3 [i_0 - 1] = ((-1 & (arr_1 [4] [7])));
        arr_4 [i_0] = ((((min(7, 0))) ? ((~(((var_3 && (arr_1 [6] [i_0 - 1])))))) : (((arr_1 [i_0] [i_0 - 1]) ? (arr_1 [i_0] [i_0 - 1]) : var_13))));
        var_14 -= (((-(arr_2 [i_0]))));
        var_15 = (min((112 ^ 0), ((min(((!(arr_2 [i_0 - 1]))), (((arr_1 [2] [i_0]) && var_5)))))));
        var_16 = (max(var_16, (((~((min(96, var_12))))))));
    }
    var_17 = var_2;
    #pragma endscop
}
