/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, ((((~1) ? (~-8484142115187050703) : var_8)))));
    var_14 = ((((min(79, ((var_11 ? -8484142115187050694 : var_11))))) ? (((!(((var_8 ? var_11 : var_2)))))) : ((-((var_0 ? -28277 : var_10))))));
    var_15 = (((((~(-20 > 8484142115187050676)))) ? (-91 ^ 5341) : (min(-2089772605, 1))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_16 += (0 != -103);
        var_17 = (max((((-var_12 && ((!(arr_0 [i_0])))))), (min(-68, (max((arr_0 [i_0]), (arr_0 [i_0])))))));
        var_18 = (((arr_0 [i_0]) < ((((arr_0 [i_0]) <= var_2)))));
        var_19 = (max(-68, 1));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        var_20 = ((var_5 || (-74 || var_9)));
        arr_6 [i_1] [i_1] |= (((((arr_5 [i_1] [i_1]) != 76)) ? (arr_3 [i_1]) : (~var_12)));
    }
    for (int i_2 = 1; i_2 < 21;i_2 += 1)
    {
        arr_9 [i_2] = (max((((arr_7 [i_2 - 1]) + (arr_7 [i_2 - 1]))), ((min((arr_7 [i_2 - 1]), var_9)))));
        arr_10 [i_2] = ((!((min((arr_7 [i_2 + 1]), (min(var_4, (arr_8 [i_2 + 1]))))))));
        arr_11 [i_2 + 1] = ((((~((var_9 ? (arr_8 [i_2]) : (arr_8 [i_2]))))) != 98));
        var_21 = ((((!((max(var_3, 0)))))));
    }
    #pragma endscop
}
