/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_8;
    var_16 += var_4;
    var_17 = var_9;

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_18 *= (((min(28, 9223372036854775805))) ? (((arr_1 [i_0]) * (arr_0 [i_0]))) : (min((arr_0 [i_0]), 941689430)));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_19 = (((!var_9) || (arr_2 [i_1] [i_1])));
            var_20 = ((+(min(((((arr_0 [i_1]) - var_14))), var_1))));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_21 = ((-((var_1 ? 81 : (arr_0 [16])))));
            var_22 = ((~((((min(var_11, var_7))) ? ((((arr_3 [i_2] [5]) ? var_0 : var_9))) : (arr_5 [i_0])))));
        }
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            var_23 = var_5;
            var_24 *= ((9223372036854775782 ? -126 : 244));
            var_25 = (min(var_2, ((min(941689423, 9223372036854775782)))));
            var_26 |= var_11;
        }
        for (int i_4 = 4; i_4 < 16;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
            {
                var_27 += min(var_7, ((-(arr_4 [i_4 - 4] [1]))));
                var_28 = var_9;
            }
            /* vectorizable */
            for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
            {
                var_29 = (-var_7 ? (((arr_16 [3] [i_4] [i_6]) ? var_14 : var_3)) : var_0);
                var_30 = var_9;
                var_31 = arr_6 [i_0];
                var_32 += 6866173712668002210;
            }
            /* vectorizable */
            for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
            {
                var_33 = arr_5 [i_4 - 1];
                var_34 = ((var_7 ? (arr_8 [i_7] [i_0]) : ((((-53 + 2147483647) >> (134217727 - 134217726))))));
            }
            /* vectorizable */
            for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
            {
                var_35 *= ((!((((arr_0 [i_8]) ? 32751 : var_8)))));
                var_36 *= arr_0 [i_4 - 1];
            }
            arr_24 [i_0] = 15538448635613493907;
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                {
                    var_37 = var_6;
                    var_38 = (arr_19 [i_0] [i_9] [i_9] [12]);
                    var_39 = (max((max(var_2, (arr_23 [i_0] [i_0]))), (max(((var_8 ? var_2 : var_5)), ((min(var_8, var_3)))))));
                }
            }
        }
    }
    for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
    {
        var_40 = var_2;
        var_41 = max(var_10, (((~(arr_26 [i_11])))));
        arr_31 [1] [i_11] = ((var_12 ? var_11 : var_10));
    }
    #pragma endscop
}
