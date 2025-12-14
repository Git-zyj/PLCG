/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_11 = (~((((var_0 ? var_2 : 91)) / ((21 ? var_1 : var_9)))));
        var_12 = ((-9223372036854775792 & (-127 - 1)));
        arr_3 [i_0] [i_0] |= ((((-13992 && ((min(9, var_3))))) && ((max((~-9223372036854775792), var_6)))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_8 [i_0] [i_0] [i_0] = (((var_5 ? 10 : var_6)));
            arr_9 [i_1] = ((~((1 ? 0 : 630328782))));
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
        {
            var_13 = (max(var_13, ((max(var_5, (((var_9 - var_4) ? ((var_4 ? var_5 : (arr_11 [i_0] [i_2]))) : (max((arr_10 [10] [1] [1]), var_5)))))))));
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 21;i_4 += 1)
                {
                    {
                        var_14 -= -var_10;
                        var_15 -= ((!((min((arr_10 [i_3 - 1] [18] [i_4 + 1]), var_5)))));
                    }
                }
            }
            var_16 = (max((arr_14 [i_0] [i_0] [0] [i_2]), ((((!var_1) || 8905960293324851031)))));
            arr_19 [i_0] [i_2] [i_2] = (min(var_2, (arr_11 [i_0] [i_0])));
        }
        for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
        {
            var_17 = (max(var_17, ((((((arr_4 [i_0]) ? var_0 : -2020217298)) >> (((arr_4 [i_0]) * (arr_2 [i_0]))))))));
            var_18 = (max(var_18, (((((((var_10 ? var_9 : 1289218929))) ? 9223372036854775806 : var_5))))));
            arr_23 [i_0] [i_5] = (~var_9);
            var_19 = (((((~(arr_14 [i_0] [i_0] [i_5] [i_0])))) < (((~-6068061611228342648) ? (arr_10 [i_0] [i_5] [12]) : ((var_5 ? 24528 : 57125740031826094))))));
        }
        for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
        {
            var_20 = (min(var_20, var_6));
            var_21 = (max(var_21, 15));
            var_22 = -114;
        }
    }
    for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
    {
        arr_30 [i_7] [i_7] = ((((((max(-2147483634, var_4)) + ((min(17506, var_7)))))) ? var_3 : (~234)));
        var_23 = (max(var_23, (((+((-((6917529027641081856 ? (arr_6 [i_7]) : var_5)))))))));
    }
    var_24 = var_2;

    for (int i_8 = 2; i_8 < 20;i_8 += 1)
    {
        arr_33 [i_8] = var_3;
        var_25 = (arr_20 [i_8] [i_8] [i_8 - 1]);
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        var_26 -= (min(var_0, 17509));
        var_27 = ((236 ? -32766 : -16653));
        var_28 = (min(var_28, (((min((arr_14 [i_9] [i_9] [20] [1]), (arr_12 [i_9] [i_9] [i_9])))))));
        var_29 = var_4;
        arr_36 [i_9] = (((((var_9 ? (arr_20 [i_9] [i_9] [i_9]) : -9223372036854775789))) ? (60766 || 4150317344) : 1));
    }
    for (int i_10 = 0; i_10 < 23;i_10 += 1)
    {
        arr_39 [i_10] = var_6;
        /* LoopNest 3 */
        for (int i_11 = 1; i_11 < 19;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 21;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 23;i_13 += 1)
                {
                    {
                        arr_50 [i_12] [i_11] [i_12] [i_11 + 4] = (min((60766 && 6424649988681617989), (((arr_38 [i_10]) ? (arr_46 [i_12 - 1]) : var_7))));
                        var_30 = (var_0 ? (~1) : (var_6 >= var_0));
                    }
                }
            }
        }
    }
    var_31 = (((((~((var_2 ? var_2 : var_10))))) ? var_1 : var_9));
    #pragma endscop
}
