/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= (min(var_10, var_12));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = ((((!(((var_12 ? var_6 : var_12))))) ? (660765401 / 6353415557217328002) : 1));
        arr_2 [i_0] = (1 >= 1);
        arr_3 [i_0] [i_0] = (max(((((max(var_9, 0))) ? (((arr_1 [i_0]) ? 2033943543 : -17520)) : (2464345546865970079 >= 9073582407110004660))), ((((min(253, 1))) ? 1 : 130))));
        var_20 = (max(var_20, (!8292273283116258994)));
    }

    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_21 = var_2;
        var_22 |= (arr_0 [i_1 - 1]);
    }
    var_23 &= var_12;
    #pragma endscop
}
