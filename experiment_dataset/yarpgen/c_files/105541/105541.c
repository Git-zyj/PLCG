/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_11 += (max((((1 + (((!(arr_2 [i_0]))))))), (((arr_2 [i_0]) ? ((((arr_0 [i_0]) ? 1 : (arr_2 [i_0])))) : (arr_1 [i_0] [i_0])))));
        var_12 += (((max((arr_1 [7] [7]), ((15538345727538494619 ? (arr_1 [i_0] [i_0]) : 3))))) ? ((((arr_0 [i_0]) & (arr_0 [i_0])))) : (((arr_2 [i_0]) ? ((min(var_7, (arr_0 [15])))) : 2908398346171056997)));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_13 = (max(var_13, ((((((arr_2 [i_1]) ? (arr_3 [i_1]) : (arr_3 [i_1]))) + (arr_2 [i_1]))))));
        var_14 = (arr_2 [i_1]);
        arr_6 [i_1] = (arr_0 [18]);
        var_15 &= (max((arr_1 [i_1] [i_1]), ((((((arr_1 [i_1] [i_1]) ? (arr_3 [i_1]) : -22072)) >> (((((arr_1 [i_1] [i_1]) ? (arr_5 [14] [13]) : (arr_0 [i_1]))) - 10706)))))));
        arr_7 [i_1] [i_1] = (((arr_5 [i_1] [i_1]) ? 15538345727538494626 : (arr_3 [14])));
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
    {
        var_16 = arr_8 [i_2];
        var_17 = 15538345727538494619;
    }
    #pragma endscop
}
