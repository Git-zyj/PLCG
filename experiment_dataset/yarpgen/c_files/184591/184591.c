/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184591
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((!((min(var_4, var_9))))) ? var_9 : (((-(!var_2))))));
    var_11 |= ((max(var_8, (var_1 <= var_8))));

    for (int i_0 = 1; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_12 = (max(var_12, (((!(arr_0 [i_0]))))));
        var_13 = -var_0;
        var_14 = (max((arr_0 [i_0]), (((arr_2 [4] [1]) ? ((((arr_1 [i_0 + 1] [i_0 + 1]) ? (arr_0 [i_0 - 1]) : (arr_2 [i_0] [i_0])))) : (min((arr_2 [i_0] [i_0]), (arr_1 [i_0 - 1] [i_0 - 1])))))));
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (max((!-var_9), (max((arr_2 [i_1] [i_1]), var_1))));
        var_15 = (!var_3);
        var_16 = ((!(arr_0 [i_1 + 1])));
    }
    for (int i_2 = 1; i_2 < 12;i_2 += 1) /* same iter space */
    {
        var_17 = (arr_4 [i_2]);
        var_18 = (min(var_18, (arr_4 [i_2 + 1])));
    }
    #pragma endscop
}
