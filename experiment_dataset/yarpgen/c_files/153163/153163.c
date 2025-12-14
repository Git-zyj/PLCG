/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = var_7;
        arr_3 [i_0] [20] = (min((min(var_8, var_3)), (min((arr_0 [i_0 - 1] [i_0 - 1]), var_8))));
        arr_4 [i_0] [i_0] = (arr_0 [i_0] [i_0]);
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = var_1;

        /* vectorizable */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_13 = (arr_1 [i_1]);
            var_14 |= (((arr_0 [i_1] [i_2]) == (arr_10 [i_2] [i_2] [i_1 + 2])));
            var_15 = -5;
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            var_16 = (arr_0 [i_1 - 1] [i_3]);
            arr_13 [i_1] [i_3] [i_1] = (((var_1 ? var_12 : (arr_7 [14] [i_3]))));
        }

        /* vectorizable */
        for (int i_4 = 1; i_4 < 22;i_4 += 1)
        {
            var_17 = (arr_0 [i_1] [i_1]);
            arr_16 [i_1] [i_4] = ((((var_4 ? (arr_10 [i_1] [i_1] [i_1 - 1]) : var_0)) >= (arr_6 [5])));
        }
    }
    for (int i_5 = 1; i_5 < 21;i_5 += 1) /* same iter space */
    {
        var_18 += (254 >> 1);
        var_19 = (min(var_19, (((var_10 ? (max((arr_15 [i_5] [i_5 + 2] [i_5 + 1]), (arr_15 [i_5] [i_5 + 2] [i_5 + 2]))) : (!var_12))))));
    }
    var_20 = (max((max(var_7, (!var_12))), (((((((var_9 + 2147483647) >> (var_5 - 62371)))) ? -var_11 : var_10)))));
    var_21 = var_8;
    var_22 = var_3;
    #pragma endscop
}
