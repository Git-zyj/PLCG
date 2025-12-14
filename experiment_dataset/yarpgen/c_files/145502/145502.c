/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;
    var_11 = -24277;
    var_12 = ((((max((var_5 ^ 24274), -24256))) ? var_3 : ((((!(156075876 != 24291)))))));

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_13 = (max(var_4, (((var_7 ? 24276 : 777261251408101507)))));
        arr_4 [i_0] = (((arr_0 [i_0]) ? (3108767259 & var_3) : (max(((max(var_4, var_0))), (max(var_1, (arr_3 [i_0])))))));
        arr_5 [4] [i_0] = var_3;
    }
    #pragma endscop
}
