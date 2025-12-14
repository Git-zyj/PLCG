/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105313
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_2, var_10));

    for (int i_0 = 2; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_13 += (arr_1 [12]);
        arr_2 [i_0 + 1] [i_0 + 1] = min((arr_0 [i_0 + 3]), ((((((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0])))) ? (max((arr_0 [i_0]), var_10)) : (min((arr_0 [i_0]), var_1)))));
    }
    for (int i_1 = 2; i_1 < 10;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = min((max((((arr_4 [i_1]) + var_7)), ((max(-655703806, 50637))))), (((var_11 ? (arr_1 [i_1 + 3]) : (arr_1 [i_1 + 3])))));
        arr_6 [i_1] = ((((!((((arr_1 [i_1 + 2]) ? (arr_3 [i_1]) : (arr_0 [i_1])))))) ? ((((((arr_3 [i_1]) ? var_9 : var_9))) * (min(var_4, (arr_1 [i_1]))))) : (arr_4 [i_1])));
        var_14 = (min(var_14, (((((min((arr_1 [i_1 + 3]), (arr_1 [i_1 + 3])))) ? (((arr_1 [i_1 + 4]) ? (arr_1 [i_1 + 2]) : (arr_1 [i_1 + 4]))) : 30)))));
        var_15 = (max(var_15, ((min(var_4, (min(54043195528445952, 4294967295)))))));
    }
    var_16 = ((var_1 ? (var_1 > var_7) : var_5));
    #pragma endscop
}
