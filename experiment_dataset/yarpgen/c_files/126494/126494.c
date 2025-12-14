/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((1 | var_14) ? var_5 : -var_0)) < var_9));
    var_16 = var_14;

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_2 [i_0] = -52406;
        arr_3 [i_0] = (((max((min(51999, 13563)), (min(var_10, (arr_0 [i_0])))))) + (min((arr_0 [1]), (arr_1 [i_0]))));
        var_17 *= (((-((~(arr_1 [i_0 + 1]))))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 10;i_1 += 1)
    {
        var_18 = (var_2 - var_12);

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_19 = 104;
            var_20 = 32767;
            arr_10 [i_1 + 1] = -1;
        }
        for (int i_3 = 1; i_3 < 9;i_3 += 1) /* same iter space */
        {
            var_21 -= ((((512 >> (((arr_5 [5]) + 31452)))) + (!-27613)));
            var_22 = 0;
        }
        for (int i_4 = 1; i_4 < 9;i_4 += 1) /* same iter space */
        {

            for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
            {
                var_23 = (min(var_23, 0));
                var_24 = -438810133;
                var_25 = (((-(arr_18 [8] [8]))) < (((!(arr_18 [0] [4])))));
                var_26 = (874589601 == 1);
                var_27 = (arr_11 [i_4] [i_5]);
            }
            for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
            {
                var_28 ^= (var_8 ? var_1 : (arr_20 [i_4 - 1] [i_4 - 1]));
                arr_21 [i_4] [i_4 - 1] = (63279 ? (arr_15 [i_6] [i_6]) : 562949936644096);
            }
            var_29 = var_11;
            var_30 = var_5;
            var_31 += (((arr_14 [i_1 + 1] [i_1 - 1] [1]) + ((24832 ? (arr_18 [i_1] [i_1]) : var_13))));
        }
        arr_22 [i_1] &= (((arr_5 [1]) + var_5));
        var_32 ^= arr_20 [i_1] [i_1];
    }
    #pragma endscop
}
