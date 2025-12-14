/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120153
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (-(max(-var_2, (var_5 & 179))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [8] [8] &= (((((179 ? 9223372036854775807 : 123))) && (((179 ? 25 : 17211141375993004365)))));
        arr_3 [i_0] = (arr_1 [i_0]);
        var_14 = (max(var_14, ((((((var_12 ? var_9 : (arr_1 [i_0])))) | ((253 ? var_11 : var_5)))))));

        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            arr_7 [i_0] [5] [i_0] = (9223372036854775807 | 230);
            arr_8 [i_0] = (((arr_6 [i_0] [i_1 - 2] [i_0]) < (arr_6 [i_0] [i_1 - 2] [i_1 - 1])));
        }
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
    {
        arr_12 [i_2] = ((((!(((8388607 ? var_6 : 123))))) ? (var_8 == var_11) : ((3928279585 ? 21 : 9749955800134605676))));
        arr_13 [i_2] [i_2] = (min(-0, (((arr_6 [i_2] [i_2] [i_2]) ? ((4286578688 ? 0 : 1020735993648283529)) : ((min(230, (arr_1 [i_2]))))))));
        arr_14 [i_2] [i_2] = (arr_6 [i_2] [i_2] [i_2]);
        arr_15 [i_2] [i_2] = (((var_11 ^ ((((arr_10 [i_2]) >= (arr_10 [i_2])))))));
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
    {
        arr_18 [i_3] = var_6;
        arr_19 [i_3] = 25;

        for (int i_4 = 1; i_4 < 12;i_4 += 1)
        {
            var_15 = ((var_9 / (((((0 ? 15 : 2857522666320130256))) ? 1 : (min(var_6, 1))))));
            arr_22 [i_3] [i_3] = (min(((((arr_9 [i_4 + 1] [i_4 + 1]) >= (!-2886322666612768173)))), (((var_3 ? var_7 : var_6)))));
            var_16 = min((arr_9 [i_4] [i_4 - 1]), var_1);
        }
        /* vectorizable */
        for (int i_5 = 1; i_5 < 12;i_5 += 1)
        {
            var_17 = ((var_6 ? var_1 : (arr_6 [i_5 + 1] [i_5 + 1] [i_5 - 1])));
            var_18 += ((255 && (arr_21 [5] [i_5 - 1])));
            arr_25 [i_3] [i_3] [i_5] = (-2147483647 - 1);
        }
    }
    for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
    {
        var_19 = -1;
        var_20 = (min((((arr_23 [i_6] [i_6] [i_6]) + (arr_1 [i_6]))), (arr_20 [4] [i_6] [7])));
    }
    #pragma endscop
}
