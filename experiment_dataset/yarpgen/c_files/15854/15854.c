/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_10 = ((~var_4) - ((var_1 ? 13049 : var_8)));
        var_11 = (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])));

        for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
        {
            var_12 *= (arr_0 [i_0] [i_0]);
            var_13 &= var_7;
            var_14 ^= ((((arr_1 [8]) ? 4595 : (arr_0 [i_1] [i_0]))));

            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                var_15 = ((var_3 ? (((arr_3 [i_1] [2]) ? var_5 : (arr_2 [i_0] [i_1]))) : (arr_2 [i_0] [i_0])));
                arr_7 [i_0] [4] [i_2] [i_2 + 2] = ((~(arr_6 [i_0])));
                var_16 = ((~(((arr_2 [i_0] [i_0]) ? (arr_4 [i_0]) : (arr_3 [i_0] [i_0])))));
                var_17 *= (((var_0 ^ var_6) ? ((~(arr_5 [1]))) : (var_3 ^ var_8)));
            }
            for (int i_3 = 2; i_3 < 19;i_3 += 1)
            {

                for (int i_4 = 3; i_4 < 17;i_4 += 1)
                {
                    var_18 = ((!(arr_6 [i_0])));
                    var_19 = -24972;
                    var_20 = ((((((arr_1 [i_0]) & var_9))) ? var_4 : (arr_0 [i_3 - 1] [i_3 - 1])));
                    arr_13 [i_0] [i_0] [i_0] [i_4 + 3] [11] [i_4] = (((arr_12 [i_3 - 2] [i_1] [i_4 - 2]) ? (arr_12 [i_3 + 1] [i_1] [i_4 + 3]) : (arr_12 [i_3 - 2] [i_1] [i_4 + 2])));
                    var_21 ^= ((arr_2 [i_1] [i_0]) ? (arr_2 [i_3 - 1] [i_1]) : (arr_2 [i_3 - 1] [i_4]));
                }
                arr_14 [i_0] [i_0] [i_0] [i_0] = var_7;
                arr_15 [i_0] [i_0] = (((((arr_10 [1] [i_3 - 2] [i_3 - 2]) + 2147483647)) >> (((arr_11 [i_3 + 1] [i_1] [i_3 + 1] [i_0]) - 1113533633))));
                var_22 ^= ((var_2 != (((!(arr_5 [i_3]))))));
            }
        }
        for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
        {

            for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
            {
                var_23 = (((!1) < (arr_10 [i_0] [15] [i_0])));
                var_24 = ((-(arr_12 [i_0] [i_5] [i_6])));
                var_25 = var_6;
            }
            for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
            {
                var_26 = var_7;
                var_27 = (arr_21 [i_0]);
            }
            var_28 *= ((!(arr_21 [6])));
        }
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            var_29 = ((4604 ? (((arr_17 [i_8] [i_0]) ? -4609 : 18446744073709551615)) : (arr_17 [i_8] [i_0])));
            arr_26 [i_0] = ((((((arr_12 [i_0] [i_8] [12]) ? (arr_1 [i_0]) : var_9))) && 24993));
        }
        var_30 = var_8;
    }
    var_31 = (min((((((max(var_9, var_4))) && ((max(var_0, var_8)))))), (max(((max(var_4, var_4))), (min(var_3, var_2))))));
    #pragma endscop
}
