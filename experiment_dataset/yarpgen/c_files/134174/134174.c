/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134174
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_17 = (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])));
        arr_3 [i_0] = (((arr_0 [9] [i_0]) ? (arr_0 [8] [i_0]) : (arr_0 [i_0] [i_0])));
        var_18 = ((((-203365027277753652 ? 203365027277753652 : 103))) || (((~(arr_1 [17])))));
    }
    for (int i_1 = 2; i_1 < 13;i_1 += 1)
    {
        var_19 = ((max(-5083007910076048225, -6291313793292138962)));
        var_20 = (min(var_20, ((max((arr_1 [i_1 - 1]), (((~(arr_0 [i_1 + 1] [i_1 + 1])))))))));
    }
    for (int i_2 = 2; i_2 < 9;i_2 += 1)
    {
        var_21 = (min(var_21, var_12));
        arr_9 [6] = (((0 >= var_2) != (min(-103, 1562542776))));
        arr_10 [2] &= ((1581637254 * ((((!(arr_6 [10])))))));
    }
    var_22 = ((var_11 >= (min(1, (max(3949259152228910016, 0))))));
    var_23 = (min(var_23, (max((((((min(-17, 90))) * var_3))), 0))));
    #pragma endscop
}
