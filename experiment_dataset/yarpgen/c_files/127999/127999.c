/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127999
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, 5));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_21 = (min(var_21, (((-(arr_0 [i_0 + 1]))))));
        var_22 = var_6;
        arr_2 [5] = ((-((((((arr_1 [12] [i_0]) ? (arr_1 [i_0] [i_0 + 1]) : var_0))) ? (arr_1 [i_0 + 1] [i_0 + 1]) : -var_6))));
        var_23 = ((((((arr_1 [i_0 + 1] [i_0 + 1]) - var_5))) ? (max(var_5, (var_2 * var_15))) : (((min((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1])))))));
        var_24 = (((((!5) ? ((((!(arr_1 [i_0] [i_0 + 1]))))) : var_15)) / ((max(((252 ? 252 : 251)), var_6)))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((-(((-(arr_6 [i_1]))))));
        var_25 = (min(var_25, ((((((min(252, 252))) && 12))))));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] [i_2] = ((~((var_11 << (((arr_5 [i_2]) - 1691945298))))));
        var_26 = (min(var_26, ((min(((var_8 ? (arr_6 [i_2]) : (arr_6 [i_2]))), (!var_11))))));
        var_27 |= (((-(arr_9 [i_2]))));
    }
    #pragma endscop
}
