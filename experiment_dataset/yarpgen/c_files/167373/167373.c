/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, var_6));
    var_12 &= var_0;

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_13 = var_0;
        var_14 = (min(var_14, ((((var_5 ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((18257 ? (((arr_0 [i_1] [i_1]) ? (arr_2 [i_1]) : (arr_1 [i_1] [i_1]))) : ((~(arr_4 [i_1])))));
        arr_7 [i_1] = (max((max((max((arr_3 [i_1]), var_9)), ((((arr_1 [i_1] [i_1]) ^ 255))))), var_1));
        var_15 = (max(var_15, 0));
        arr_8 [i_1] [i_1] |= ((((~((2063806971 ? var_8 : 8441546065323406463)))) << (((max((~1513022303181972505), ((((arr_5 [i_1]) << (((arr_1 [i_1] [i_1]) - 134))))))) - 1140850687))));
        arr_9 [i_1] [i_1] = (min(((8441546065323406463 ? var_5 : 53724)), (arr_0 [i_1] [i_1])));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
    {
        var_16 = (!var_6);
        var_17 = ((((((arr_4 [i_2]) ? var_2 : (arr_4 [i_2])))) ? (arr_13 [i_2]) : ((((max(38381, 28))) ? (arr_0 [i_2] [i_2]) : (~159231734)))));
        var_18 = ((((((!(arr_10 [i_2] [i_2]))) ? var_9 : (((max(var_7, 32227)))))) & (((var_5 ? (arr_5 [i_2]) : (arr_5 [i_2]))))));
        var_19 = (((!var_8) ? (arr_4 [i_2]) : (arr_0 [i_2] [i_2])));
        var_20 |= (arr_0 [i_2] [i_2]);
    }
    var_21 = ((((-var_10 ? ((12 ? var_1 : var_4)) : var_4))) ? ((((var_1 ? var_1 : 187)))) : ((((max(var_6, var_3))) + (var_1 - var_5))));
    #pragma endscop
}
