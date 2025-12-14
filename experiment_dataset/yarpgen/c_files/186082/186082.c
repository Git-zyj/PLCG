/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_5 [i_1] = 3064235019;
            arr_6 [i_0] = (((((arr_4 [8] [i_0]) && (arr_0 [i_0]))) && (((114 ? 15360 : 0)))));
            var_18 = ((-var_1 ? (arr_0 [i_0]) : (arr_4 [i_0] [i_1])));
        }
        for (int i_2 = 2; i_2 < 21;i_2 += 1)
        {
            arr_10 [i_0] [i_2 - 2] = (((arr_4 [i_2 - 1] [i_2 + 1]) && (arr_4 [19] [i_2 - 1])));
            var_19 -= (((arr_3 [i_0] [i_0]) && -37));
            arr_11 [1] [i_2] = ((((((arr_2 [i_0]) ? 15484 : var_5))) ? (((((arr_9 [22]) && (arr_1 [i_2]))))) : (arr_9 [i_2 - 1])));
        }
        var_20 *= (39 ? var_6 : (arr_3 [i_0] [i_0]));
        var_21 = (arr_1 [i_0]);
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
    {
        var_22 = ((var_17 ? (arr_3 [i_3] [1]) : (arr_9 [i_3])));
        var_23 = (max(var_23, (((100 ? (!55) : ((1733797210 ? (arr_4 [i_3] [i_3]) : var_2)))))));
        var_24 -= ((-(arr_4 [i_3] [i_3])));
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
    {
        var_25 = (arr_9 [i_4]);
        var_26 |= ((((!(arr_9 [i_4]))) ? (arr_13 [i_4] [7]) : ((((((-1733797205 ? (arr_7 [i_4] [i_4] [i_4]) : 9006649498927104))) && var_1)))));
    }
    for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
    {
        var_27 = (((arr_9 [i_5]) * (((arr_9 [i_5]) / (arr_9 [i_5])))));
        var_28 = ((!((((arr_3 [i_5] [i_5]) ? (arr_3 [i_5] [i_5]) : (arr_3 [i_5] [i_5]))))));
        arr_20 [i_5] [i_5] = (min(var_3, 2702969820260858729));
    }
    var_29 = ((!((((((var_13 ? var_2 : var_4))) ? ((var_1 ? var_10 : var_16)) : var_9)))));
    var_30 = 13588591374528058733;
    var_31 = ((1 ? 119 : 15743774253448692886));
    #pragma endscop
}
