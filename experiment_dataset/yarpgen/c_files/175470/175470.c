/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175470
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_19 |= (((((((var_6 ? (arr_0 [i_0]) : var_14)) + -13))) ? (max((((arr_1 [0] [0]) ? 13 : 7132934225621186008)), ((max((arr_0 [i_0]), var_10))))) : ((((!(!var_3)))))));
        arr_2 [i_0] = (((arr_1 [i_0] [8]) && 13));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_20 = (max(((-21 ? ((238 ? -6518023227551532294 : 3240907342240446013)) : -9)), -13));
        arr_5 [i_1] = (((arr_1 [i_1] [i_1]) * (arr_1 [i_1] [i_1])));
    }
    var_21 = (((((4 ? 18 : var_1)))) ? ((((~13) && var_8))) : (~-19));
    #pragma endscop
}
