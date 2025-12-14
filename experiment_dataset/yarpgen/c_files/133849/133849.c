/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133849
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_7 ^ ((var_5 & (var_3 | var_4)))));
    var_14 = ((((((var_4 ? var_2 : var_0))) ? -3 : var_1)));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_15 = ((-72 ? 65534 : 13));
        arr_2 [i_0] = arr_0 [i_0];
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_16 |= ((~((((arr_3 [4] [i_1]) >= (arr_3 [6] [i_1]))))));
        var_17 = (9540137041485059569 ? (min((arr_5 [i_1] [i_1]), (((arr_0 [i_1]) | (arr_0 [i_1]))))) : (arr_5 [i_1] [i_1]));
    }
    for (int i_2 = 1; i_2 < 18;i_2 += 1)
    {
        var_18 = ((min((arr_6 [i_2 + 1]), ((((arr_6 [i_2]) >= (arr_8 [i_2 - 1] [i_2 + 2])))))));
        arr_9 [i_2 + 1] [i_2] |= (((((arr_6 [i_2 - 1]) ? 119 : (min((arr_8 [i_2] [i_2 + 1]), (arr_6 [i_2 + 2]))))) > (((~((((arr_7 [i_2]) != (arr_6 [i_2])))))))));
        arr_10 [i_2] [i_2] = (arr_7 [i_2 + 1]);
    }
    #pragma endscop
}
