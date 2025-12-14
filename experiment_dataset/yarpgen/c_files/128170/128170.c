/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 1;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [4] = (((arr_0 [i_0] [i_0]) - 671856688));
        var_13 = ((!(((arr_0 [i_0] [6]) == 1))));
        var_14 = ((2066427870 ? (arr_1 [i_0]) : (arr_1 [i_0 + 1])));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = max(((1 ? 48 : 1)), 552913404);
        var_15 = (1 <= var_9);
        arr_6 [2] = (301552195 / -7045384715959635918);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            arr_12 [i_3] [i_3] = (((arr_9 [i_2] [12]) == (((arr_4 [i_2]) + (arr_4 [i_3])))));
            arr_13 [i_3] = (arr_8 [i_2]);
            var_16 = (arr_10 [i_3 - 1] [i_3]);
            arr_14 [i_3] = (((arr_3 [i_3]) ^ (arr_8 [i_3 - 1])));
        }
        for (int i_4 = 3; i_4 < 16;i_4 += 1) /* same iter space */
        {
            arr_18 [i_2] [i_4] = ((-552913386 ? 54672 : var_0));
            var_17 = (min(var_17, (((var_1 ? (arr_0 [i_4 - 3] [i_4 + 1]) : (arr_0 [i_4 - 3] [i_4 + 1]))))));
            var_18 = ((-1 ? (~1) : (var_2 > -552913405)));
        }
        for (int i_5 = 3; i_5 < 16;i_5 += 1) /* same iter space */
        {
            var_19 = (((arr_7 [i_5 - 2] [i_5]) ? var_5 : (((arr_0 [i_2] [i_5]) ? (arr_3 [i_2]) : (arr_15 [i_2] [i_5] [1])))));
            var_20 = var_5;
            var_21 = (max(var_21, 72));
        }
        arr_21 [i_2] = (arr_17 [i_2]);
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
    {
        var_22 = var_2;
        var_23 = (((((var_6 * (51694 / 72)))) / ((38312 ? 10425532316320469692 : (arr_19 [i_6] [i_6] [i_6])))));
        var_24 = (max(var_24, (arr_25 [i_6] [i_6])));
    }
    #pragma endscop
}
