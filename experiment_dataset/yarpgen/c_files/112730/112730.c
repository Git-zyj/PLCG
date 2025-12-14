/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112730
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_11 = var_10;
        var_12 ^= var_8;
        arr_3 [5] [i_0 + 1] = (41 ? -41 : 39629);
    }
    for (int i_1 = 3; i_1 < 11;i_1 += 1)
    {
        var_13 = (((var_8 && 268150417) ? (((var_0 && 5692501079235077333) ? (((var_7 ? 25907 : 68))) : (min(var_9, var_1)))) : ((min(209, ((-2123851207635371184 ? 39634 : var_3)))))));
        arr_6 [i_1] = (max((((26 ? 55 : 143))), ((2261568028 ? 13496758392120165377 : var_7))));
    }
    var_14 = ((143 ? 4968564111808879704 : -8586));
    var_15 = ((((((~64) ? (9916432439478710774 && 200) : var_4))) ? (((min(var_2, var_8)))) : (((((1 ? var_4 : var_8))) ? (var_1 == -27) : ((var_2 ? 4108922256873181982 : 476))))));
    var_16 = (((max(var_4, ((268419072 ? 268419072 : -5294819817769855508))))) ? var_9 : (max(var_3, (min(55, 0)))));
    #pragma endscop
}
