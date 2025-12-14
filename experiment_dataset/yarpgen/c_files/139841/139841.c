/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_17 = (max(var_17, ((max(((var_6 ? (arr_1 [i_0 - 1] [i_0 - 1]) : (arr_1 [i_0 + 2] [i_0 + 1]))), (((arr_1 [i_0] [i_0]) * (arr_1 [i_0 + 3] [i_0 + 1]))))))));
        var_18 ^= ((((-((((arr_1 [i_0] [i_0]) == (arr_2 [1]))))))) ? ((min(var_4, (arr_1 [i_0 - 1] [i_0 - 1])))) : ((((max((arr_1 [i_0] [i_0 - 1]), var_8))) ? (arr_1 [i_0 + 1] [i_0 + 3]) : (max(var_16, (arr_1 [i_0] [i_0 + 1]))))));
    }
    var_19 = ((-(min(var_15, (max(0, var_3))))));

    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        var_20 = (min(var_20, (((((((!var_3) ? var_13 : (((var_16 ? (arr_5 [i_1] [i_1]) : var_2)))))) ? (((var_2 > (arr_5 [i_1 + 1] [i_1 - 1])))) : (((arr_3 [i_1 + 1]) ? (((!(arr_5 [10] [i_1])))) : (max(var_7, (arr_5 [i_1] [i_1 - 1]))))))))));
        var_21 |= (((arr_5 [i_1 - 1] [i_1]) ? (arr_3 [i_1 - 1]) : -93));
    }
    var_22 = (~var_4);
    #pragma endscop
}
