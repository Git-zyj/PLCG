/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_7;
    var_18 = ((!(((((min(var_6, var_7))) ? ((var_6 ? var_3 : 11858)) : (var_14 % var_4))))));
    var_19 = var_3;
    var_20 -= ((!(!var_4)));

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        var_21 = (min((~-32718), ((((((arr_1 [i_0 + 2]) ? var_4 : var_0))) ? ((~(arr_0 [i_0]))) : (((!(arr_0 [i_0]))))))));
        arr_2 [i_0] [i_0] = ((((min((arr_1 [i_0 - 2]), (arr_0 [i_0 - 3])))) ^ ((max((arr_1 [i_0 + 2]), (arr_1 [i_0 + 2]))))));
        var_22 = ((((((((arr_0 [i_0]) ? var_6 : 2130706432))) && 47)) || (((1 ? (((!(arr_0 [i_0])))) : (arr_1 [i_0]))))));
        var_23 = (((arr_0 [i_0]) / (max(-var_6, ((var_7 ? (arr_1 [i_0]) : 1))))));
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        var_24 = 4;
        var_25 -= 1;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        arr_7 [i_2] = 7140780534671886645;
        var_26 = (~183);
        var_27 = (+(((arr_6 [i_2]) ? var_14 : (arr_5 [i_2]))));
    }
    #pragma endscop
}
