/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_15;
    var_17 = var_2;
    var_18 = var_6;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [7] = (arr_0 [i_0]);
        arr_3 [i_0] = (((((((0 ? 117 : 152))) ? var_1 : 138)) >= 31));
        arr_4 [i_0] = 6604;
        arr_5 [i_0] = ((max((arr_0 [i_0]), var_5)));
    }
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {
        arr_10 [i_1] = (((2857 ? (((139 ? var_9 : 155))) : (max(2597251229572668683, (arr_1 [i_1] [i_1 - 1]))))));
        arr_11 [i_1] = ((var_14 ? (((-(!1880373257)))) : (min(12, var_5))));
        arr_12 [i_1 + 1] = (max(18446744073709551615, 44896));
    }
    var_19 = ((((min(4322702718798047788, (var_3 + var_12)))) ? ((min((~var_15), 6))) : (((((6 ? var_14 : var_2))) ? ((199 ? var_12 : -2859)) : var_15))));
    #pragma endscop
}
