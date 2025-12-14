/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167129
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_10;

    for (int i_0 = 2; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = (((((((max(-1891, (arr_1 [13])))) ? var_1 : (min((arr_1 [12]), 1))))) ? 189 : ((min((arr_3 [i_0 + 1] [i_0]), (15412725851198410504 > 484293158))))));
        var_16 = (var_7 ? (arr_0 [19]) : (max((min(var_14, 1)), ((1 ? (arr_3 [i_0 - 1] [12]) : var_5)))));

        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            var_17 = ((1 ? (((((arr_3 [i_0 - 1] [i_0]) <= (-2147483647 - 1))) ? (min((arr_5 [i_0] [i_0]), (arr_5 [i_0] [i_0]))) : 204)) : 32748));
            var_18 = (((((var_2 ? (arr_2 [i_0]) : 1551376284248764550)) ^ ((max(952159661, var_14))))));
            var_19 = ((+((((min((arr_3 [i_0] [i_0]), 1063213872))) ? 952159653 : (((arr_5 [i_0] [i_0]) ? (arr_3 [i_0] [i_0]) : 0))))));
        }
    }
    for (int i_2 = 2; i_2 < 21;i_2 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
        {
            arr_11 [19] [19] = ((1 ? 4294967278 : -952159662));

            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                var_20 = (((arr_13 [i_2 + 3] [i_2 + 3]) ? (arr_13 [i_2 - 2] [i_2 - 1]) : var_10));
                var_21 = (min(var_21, (arr_0 [i_2 - 2])));
            }
            arr_14 [i_3] [i_3] [i_2 + 1] = (21 / 805317546);
            arr_15 [i_2] [i_3] = 36940;
            arr_16 [i_2] [i_3] = -27;
        }
        for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
        {

            for (int i_6 = 1; i_6 < 23;i_6 += 1)
            {
                arr_23 [i_6] = (179 ? ((((((-(arr_19 [i_2] [i_2] [i_6])))) ? (((arr_12 [i_5] [i_6]) ? (arr_19 [i_2] [i_2] [i_6]) : 203)) : ((var_4 ? var_0 : 1))))) : (min(16777215, 32985348833280)));
                arr_24 [i_2] [12] [i_2] = var_0;
                var_22 = (min(var_22, (0 | 1)));
                arr_25 [i_2 - 1] [16] [i_6] = (max(1, (-2147483647 - 1)));
            }
            arr_26 [i_2] = (101 | 4038826362);
        }
        var_23 ^= (~-var_12);
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        arr_31 [i_7] [i_7] = (arr_12 [i_7] [i_7]);
        var_24 = 110;
        arr_32 [i_7] [i_7] = 4038826362;
        var_25 = 66;
    }
    #pragma endscop
}
