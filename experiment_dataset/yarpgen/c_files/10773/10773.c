/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= var_3;
    var_11 = ((17349930042570508040 ? var_8 : (((~var_9) ? var_4 : (max(var_7, var_4))))));

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((max((arr_1 [i_0 + 3]), ((var_6 ? var_5 : (arr_1 [i_0 + 3])))))) ? ((min((min((arr_1 [i_0 + 2]), (arr_1 [i_0]))), ((((arr_1 [i_0 + 2]) || (arr_1 [i_0 + 2]))))))) : (((!(((arr_1 [i_0 + 2]) && var_8)))))));
        var_12 = (i_0 % 2 == zero) ? ((max(var_1, ((max((((arr_0 [i_0] [i_0]) << (((arr_0 [i_0] [i_0 + 3]) - 250)))), (arr_1 [i_0]))))))) : ((max(var_1, ((max((((arr_0 [i_0] [i_0]) << (((((arr_0 [i_0] [i_0 + 3]) - 250)) + 17)))), (arr_1 [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_13 = (((min((min((arr_1 [i_1]), var_7)), (((var_8 << (((arr_3 [i_1]) - 21203))))))) - (((var_1 ? var_9 : (((!(arr_4 [8])))))))));
        arr_6 [i_1] [7] = (arr_4 [i_1]);
        arr_7 [4] = var_9;
    }
    #pragma endscop
}
