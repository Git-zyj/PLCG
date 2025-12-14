/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11844
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_17 = (((arr_1 [i_0] [i_0]) == (arr_1 [i_0] [i_0])));
        arr_2 [i_0] = ((40 ^ (((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_18 |= (var_6 ^ -6);
        var_19 = ((((!(arr_3 [i_1]))) ? (((arr_3 [i_1]) * 2000368765)) : 1));
        var_20 |= (min((((1 ? (arr_4 [i_1]) : var_16))), (((arr_4 [i_1]) ? 255 : (arr_3 [i_1])))));
        arr_5 [i_1] = (+(max(((((arr_4 [i_1]) ? var_11 : (arr_4 [i_1])))), ((var_11 ? (arr_3 [i_1]) : 255)))));
    }

    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_21 = (min((((((arr_6 [i_2] [i_2]) || 2258002264)) ? (arr_6 [i_2] [i_2]) : ((var_3 ? 65535 : 1)))), ((((min(var_8, (arr_7 [i_2]))) != (arr_6 [i_2] [i_2]))))));
        var_22 = (max(var_22, (((-(((arr_6 [i_2] [i_2]) ? ((((!(arr_7 [i_2]))))) : var_14)))))));
    }
    for (int i_3 = 1; i_3 < 13;i_3 += 1) /* same iter space */
    {
        var_23 = ((+((max((1 > 1), (arr_4 [i_3 + 2]))))));
        arr_10 [i_3] [i_3] &= ((min(var_14, (arr_3 [i_3 + 1]))));
    }
    for (int i_4 = 1; i_4 < 13;i_4 += 1) /* same iter space */
    {
        var_24 = (min(var_24, (((!((((arr_12 [i_4 + 4]) ? (!-1) : (!var_11)))))))));
        arr_15 [i_4] [i_4] |= ((var_2 ? ((((((var_3 ? 18 : var_3))) ? (((((arr_9 [i_4] [i_4]) || (arr_6 [i_4] [i_4 + 4]))))) : (125 ^ var_13)))) : ((((min(var_8, (arr_13 [i_4])))) ? (((var_4 ? var_3 : -32762))) : (arr_11 [i_4 + 2] [i_4 + 3])))));
    }

    for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
    {
        arr_18 [i_5] &= (min((arr_7 [i_5]), ((var_13 ? (arr_17 [i_5] [i_5]) : (arr_17 [i_5] [i_5])))));
        var_25 = (arr_11 [i_5] [i_5]);
        var_26 = (min(var_26, (arr_17 [i_5] [i_5])));
    }
    for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
    {
        var_27 = (max(var_27, ((max(var_1, (((!var_8) ? -18 : (min((arr_16 [i_6] [i_6]), -1)))))))));
        arr_22 [i_6] = (max(((((arr_16 [i_6] [i_6]) <= (arr_6 [i_6] [i_6])))), (((arr_6 [i_6] [i_6]) | (arr_16 [i_6] [i_6])))));
        var_28 = (max(var_28, ((((!var_11) ? (((32512 >= (min((arr_3 [i_6]), 245))))) : ((-(((var_4 && (arr_17 [i_6] [i_6])))))))))));
    }
    #pragma endscop
}
