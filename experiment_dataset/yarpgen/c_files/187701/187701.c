/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;
    var_11 = (max(var_11, (((var_0 ? var_9 : var_6)))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_12 = (max(var_12, (((-(arr_1 [i_0] [i_0]))))));
        arr_2 [i_0] = var_4;
        var_13 = var_9;
        var_14 = ((((1 <= (~var_9))) ? 7003585296384763982 : ((((arr_1 [i_0] [i_0]) ? ((max((arr_0 [6] [i_0]), (arr_1 [i_0] [i_0])))) : ((~(arr_0 [i_0] [i_0]))))))));
        var_15 = (min(var_15, ((((((arr_0 [i_0] [i_0]) ? ((max((arr_0 [i_0] [i_0]), (arr_1 [17] [17])))) : (arr_0 [i_0] [21])))) ? ((((arr_0 [i_0] [i_0]) >> (((arr_0 [i_0] [i_0]) - 12805))))) : (~5279314799979932854)))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = arr_3 [i_1];
        var_16 -= var_9;
        arr_6 [i_1] [i_1] = (arr_1 [i_1] [i_1]);
        var_17 = (max(var_17, ((((arr_0 [i_1] [i_1]) || var_7)))));
    }
    var_18 = (var_5 / (((var_5 ? ((-9105349787121109253 ? 64 : -7581)) : var_7))));
    #pragma endscop
}
