/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = min((arr_2 [i_0]), (((arr_0 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))));
        arr_4 [i_0] = (arr_0 [i_0] [i_0]);
        var_12 += ((!(((((((arr_1 [i_0] [2]) * 0))) ? (min((arr_0 [i_0] [i_0]), (arr_1 [7] [i_0]))) : (max((arr_2 [i_0]), var_10)))))));
        var_13 = ((((max((((arr_2 [i_0]) - var_1)), (((arr_2 [i_0]) + 8492612042974503550))))) ? (arr_2 [i_0]) : (max((426 * 86), 8492612042974503527))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_14 = ((((((((arr_6 [i_1]) ? (arr_6 [i_1]) : 0))) ? (((arr_6 [i_1]) ? (arr_5 [i_1]) : var_8)) : (arr_5 [i_1]))) / (((((arr_5 [i_1]) ? (arr_6 [6]) : 9)) + var_0))));
        arr_7 [i_1] = (min(var_5, (((((min(5, 1))) <= (!var_0))))));

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_15 = (max(var_15, ((((((((min((arr_6 [i_2]), (arr_9 [i_1] [i_2] [i_2])))) ? (!0) : (min(8492612042974503527, (arr_5 [i_2])))))) ? (((((8492612042974503562 ? var_11 : var_11)) & ((min((arr_9 [2] [i_2] [i_2]), -113)))))) : (((18446744073709551614 << (arr_11 [i_1] [i_2])))))))));
            arr_12 [i_1] = ((((((arr_11 [i_1] [i_1]) <= (arr_11 [i_1] [i_2])))) >= ((min((arr_11 [i_1] [i_2]), (arr_11 [i_1] [i_2]))))));
            var_16 = ((((((~(arr_8 [i_1] [i_1]))) ? ((max((arr_11 [i_1] [i_2]), (arr_8 [i_1] [i_1])))) : ((~(arr_8 [i_1] [i_1])))))));
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_17 -= ((((!(arr_5 [i_1])))) < (arr_13 [i_1] [i_1]));
            var_18 |= (((((arr_9 [i_1] [i_3] [i_3]) ? (arr_10 [i_1] [i_3] [i_1]) : (arr_9 [i_1] [i_3] [i_1]))) * (((!(arr_10 [i_1] [i_1] [i_3]))))));
        }
        var_19 = (((arr_8 [i_1] [i_1]) | ((((~(arr_13 [i_1] [i_1]))) << (((((((arr_9 [i_1] [9] [i_1]) ? (arr_13 [i_1] [i_1]) : (arr_9 [i_1] [i_1] [i_1]))) + 8637)) - 11))))));
        arr_15 [i_1] = ((((max((((((arr_14 [i_1] [i_1] [i_1]) + 2147483647)) << (((-2258 + 2287) - 29)))), ((max((arr_10 [i_1] [i_1] [i_1]), (arr_13 [i_1] [14]))))))) ? ((((((arr_14 [i_1] [i_1] [i_1]) | (arr_11 [i_1] [i_1])))) ? ((8492612042974503550 ? 42 : (arr_13 [i_1] [i_1]))) : (arr_9 [i_1] [i_1] [i_1]))) : (arr_11 [i_1] [i_1])));
    }
    var_20 = (min(var_20, ((max((((var_3 & var_7) & var_4)), var_11)))));
    var_21 = (max(var_21, var_3));
    var_22 = (((max((var_2 & var_2), ((-12888 ? var_3 : var_3)))) << (!1)));
    #pragma endscop
}
