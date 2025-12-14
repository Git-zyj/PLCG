/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 9;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0 - 1] [i_0 - 1] = 998679399;

        for (int i_1 = 3; i_1 < 10;i_1 += 1) /* same iter space */
        {
            var_13 = 3296287896;
            var_14 = ((-(arr_5 [i_0] [i_1])));
            var_15 += (arr_3 [i_0] [i_1] [i_0]);
            var_16 = (arr_0 [i_0 - 1]);
            var_17 = (min(var_17, ((((arr_5 [10] [i_1]) ? (~3296287897) : (((arr_5 [i_0] [6]) | 998679398)))))));
        }
        for (int i_2 = 3; i_2 < 10;i_2 += 1) /* same iter space */
        {
            arr_9 [i_0 + 2] = (((((arr_8 [i_0] [i_2]) & var_4)) ^ (((arr_3 [i_2] [i_2] [i_0]) ? var_6 : 53))));
            arr_10 [i_0] [i_2] = (arr_0 [i_2 - 2]);
            var_18 = (min(var_18, 7));
            arr_11 [i_0] [i_2] [i_2] = (arr_0 [i_0]);
        }
    }
    for (int i_3 = 2; i_3 < 9;i_3 += 1) /* same iter space */
    {
        arr_16 [i_3 + 1] = (((arr_12 [5]) & var_7));
        var_19 = (((((-29515 ? 2563618029 : 511))) ? (((arr_13 [i_3 + 1]) ? (arr_7 [i_3] [i_3 + 1]) : (arr_13 [i_3 - 2]))) : (((arr_7 [i_3] [i_3 + 2]) | (arr_3 [i_3 + 2] [i_3 - 1] [i_3 + 1])))));
        var_20 += (var_2 < -127);
    }
    var_21 *= ((var_1 ? (var_1 / var_1) : -1));
    var_22 = (max(var_22, var_6));
    var_23 = (var_11 / var_7);
    #pragma endscop
}
