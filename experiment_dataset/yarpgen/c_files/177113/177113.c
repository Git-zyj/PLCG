/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] [i_0] &= -65535;
        var_12 = ((max(-10256, (min((arr_1 [i_0]), var_4)))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_13 = ((-(1 - var_11)));
        var_14 = (max(var_14, -var_0));
        var_15 = max((((arr_4 [i_1] [i_1]) ? 8763038269498788289 : (arr_4 [i_1] [i_1]))), ((114 ? (arr_4 [15] [i_1]) : (arr_4 [i_1] [i_1]))));
        arr_6 [i_1] [i_1] = (max(32767, 2047));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = (((arr_8 [i_2]) >= (((arr_4 [4] [4]) ? var_1 : var_5))));
        var_16 = (max(var_16, (2047 ^ 459459196)));
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
        {

            for (int i_5 = 2; i_5 < 19;i_5 += 1)
            {
                arr_22 [12] = -1234861664;
                var_17 ^= (min(102, -1));
            }
            var_18 = var_1;
        }
        for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
        {
            var_19 -= ((-(arr_12 [i_3] [i_6])));
            arr_25 [i_3] [13] [i_3] = (--1);
        }

        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            arr_30 [i_3] [i_7] [i_7] = (((((-((-(arr_28 [i_3] [1] [i_3])))))) * 9223372036854775807));
            arr_31 [i_3] = min((max((((18 ? 126 : 65521))), (max((arr_9 [i_3]), var_2)))), 1);
        }
    }
    var_20 = var_8;
    var_21 = (min(var_21, var_8));
    #pragma endscop
}
