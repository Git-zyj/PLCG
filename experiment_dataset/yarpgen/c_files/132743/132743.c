/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_18 ^= (((((min((arr_3 [i_1]), (arr_4 [i_0]))))) ^ (((((~(arr_0 [i_1])))) ? (arr_4 [i_0]) : (1583300383 | 8667958335765874755)))));
            arr_5 [i_0] [i_0] [i_1] = (var_1 - var_0);
        }
        for (int i_2 = 2; i_2 < 18;i_2 += 1) /* same iter space */
        {
            arr_9 [i_0] [i_2 + 2] = (arr_3 [i_0]);
            var_19 ^= var_2;
            arr_10 [i_0] [13] = (~((-(arr_6 [i_0] [i_2 - 1]))));
        }
        for (int i_3 = 2; i_3 < 18;i_3 += 1) /* same iter space */
        {
            var_20 = ((min((arr_12 [i_0] [i_3]), (((!(arr_8 [i_3])))))) & (((~(arr_3 [i_3 + 1])))));
            arr_13 [i_0] [i_3 - 2] = ((var_11 != (((arr_11 [i_0] [i_3 - 1]) ? (arr_11 [i_0] [i_3 + 2]) : (arr_11 [i_0] [i_3 + 3])))));
            var_21 = (((((-(arr_12 [i_0] [i_3 + 1])))) ? (max((arr_1 [i_3 - 2] [i_3 + 3]), (arr_1 [i_3 + 2] [i_3 + 3]))) : (((arr_12 [2] [i_3 - 1]) | (arr_1 [i_3 + 1] [i_3 + 2])))));
            var_22 = ((((((arr_3 [i_3 + 1]) ? (arr_3 [i_3 - 1]) : (arr_3 [i_3 + 3])))) && var_15));
        }
        var_23 = (!51);
        var_24 = var_17;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        var_25 = (((arr_1 [i_4] [i_4]) >> (((((arr_0 [i_4]) ^ (arr_14 [i_4]))) - 13145675256552135561))));
        arr_16 [i_4] = (((arr_0 [i_4]) >> ((((var_10 ? var_4 : (arr_8 [i_4]))) - 14827767))));
        arr_17 [i_4] = ((((!(arr_14 [i_4]))) || (arr_4 [i_4])));
        arr_18 [i_4] = var_16;
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {
        var_26 = var_13;
        var_27 = (arr_7 [1] [1] [i_5]);
    }
    var_28 = var_12;
    #pragma endscop
}
