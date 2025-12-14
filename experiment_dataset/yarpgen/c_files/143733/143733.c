/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_12 -= (arr_1 [i_0] [i_0 + 4]);

        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            var_13 = (max(var_13, (arr_0 [i_0] [i_1])));
            var_14 = (((arr_5 [i_0 + 1] [i_1 - 1]) ? var_3 : var_4));
        }
        var_15 = (arr_5 [i_0] [i_0 - 2]);
    }
    for (int i_2 = 2; i_2 < 17;i_2 += 1) /* same iter space */
    {
        var_16 = (min(var_16, ((max(1, 84)))));
        arr_9 [i_2] [2] = (7798491566835599142 <= -20);
    }

    /* vectorizable */
    for (int i_3 = 3; i_3 < 13;i_3 += 1)
    {
        var_17 |= ((~((-2044118076 ? 10648252506873952465 : (arr_8 [i_3 + 1])))));
        arr_14 [i_3] [i_3 - 3] = (((arr_11 [i_3] [i_3 + 1]) ? (arr_12 [i_3]) : (arr_12 [i_3])));
        var_18 = (arr_2 [i_3 - 2] [i_3] [i_3 - 2]);
        var_19 = (arr_1 [i_3] [i_3]);
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        var_20 = (arr_16 [i_4]);
        var_21 = ((((((arr_15 [i_4]) ? (arr_15 [i_4]) : (arr_16 [i_4])))) ? (min((14937 & 153197717), (((!(arr_16 [i_4])))))) : (arr_15 [i_4])));
        var_22 = ((-(min(10522707942527411087, var_10))));
        var_23 = 10;
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        var_24 ^= (((arr_1 [0] [i_5]) ? var_2 : (arr_1 [i_5] [i_5])));
        arr_19 [i_5] = -var_10;
    }
    var_25 = var_0;
    #pragma endscop
}
