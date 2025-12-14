/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((max(1766713048, var_13))) ? var_14 : var_10)) - var_14));

    for (int i_0 = 1; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_16 = ((((min((arr_1 [3] [i_0]), (~var_12)))) & (((arr_1 [i_0] [i_0]) ? ((var_5 ? 2528254249 : (arr_1 [i_0] [i_0]))) : var_14))));
        var_17 = (arr_1 [7] [i_0]);
        var_18 = ((((arr_0 [i_0 - 1] [i_0]) & var_3)));
        var_19 = (((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0 - 1] [i_0]))) << (((2528254227 - 0) - 2528254215))));
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {

            /* vectorizable */
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                var_20 ^= (arr_6 [i_1 + 1] [i_1 - 1] [i_1 + 1] [7]);
                var_21 = (((arr_3 [i_1]) ? (arr_2 [i_1]) : -var_10));
                var_22 = (1766713047 ? (arr_7 [0] [i_1] [i_2]) : var_4);
            }
            for (int i_4 = 3; i_4 < 10;i_4 += 1)
            {
                var_23 = 4294967283;
                var_24 = (((((1 ? 1 : (arr_3 [i_1])))) ? ((-1 ? (arr_4 [6]) : (arr_5 [i_4 - 1] [i_1 - 1]))) : var_11));
            }
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                var_25 -= (((((arr_3 [2]) ^ 10075854686231461894))));
                var_26 -= (max(var_2, 1));
            }
            arr_15 [0] &= (arr_9 [i_1] [i_2]);
            arr_16 [i_1 - 1] [i_1] [i_2] = (((((((((arr_0 [9] [i_2]) ? var_5 : (arr_1 [i_1] [i_1])))) - (((arr_14 [10] [2] [i_2]) / 45))))) ? (((arr_14 [i_1] [i_2] [i_1]) / 1)) : 2528254260));
        }
        arr_17 [i_1] = (((((-(2528254251 != var_10)))) ? ((1 / (arr_7 [i_1 - 1] [i_1] [i_1 - 1]))) : (((arr_4 [i_1 - 1]) ? (arr_4 [i_1 - 1]) : (arr_4 [i_1 - 1])))));
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 11;i_6 += 1) /* same iter space */
    {
        arr_20 [i_6 + 1] [i_6] = (((arr_1 [i_6] [i_6]) || (arr_2 [i_6])));
        var_27 = (((arr_13 [i_6] [i_6 + 1] [i_6] [i_6 - 1]) << (((arr_13 [i_6] [11] [i_6] [i_6 - 1]) - 2774834197))));
        var_28 += var_13;
        var_29 = (min(var_29, (-1766713018 && 1766713046)));
    }
    var_30 = (((((((1 ? 1 : 1))) ? ((var_8 ? 18446744073709551615 : var_7)) : (((1 ? var_5 : var_8))))) / (((var_12 ? var_6 : var_4)))));
    #pragma endscop
}
