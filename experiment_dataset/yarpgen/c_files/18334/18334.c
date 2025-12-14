/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_5 - (((-((var_2 ? var_9 : var_9)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_18 = (((arr_0 [i_1]) ? (((arr_3 [1] [1]) ? (arr_1 [1]) : 13602293934100309415)) : (arr_0 [i_1])));
            var_19 = (arr_2 [i_1]);

            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                arr_8 [i_0] [i_2] [i_2 + 1] = (arr_1 [i_2]);
                var_20 = (((arr_5 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]) + (arr_5 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1])));
                arr_9 [i_2] [i_1] [i_2] [i_2] = ((!(arr_7 [i_0] [i_2] [i_0])));
            }
            arr_10 [i_1] [i_0] = (arr_7 [i_0] [1] [i_0]);
        }
        var_21 = -77;
        var_22 = ((1 ? 98 : 402653184));
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
    {
        var_23 = (arr_13 [i_3]);

        for (int i_4 = 2; i_4 < 24;i_4 += 1)
        {
            arr_17 [i_3] [i_3] [i_4] = (arr_12 [i_3] [16]);
            arr_18 [i_3] [i_4] = ((!((((arr_16 [i_3] [i_3]) ? (arr_2 [i_3]) : (arr_2 [i_3]))))));
            arr_19 [i_4] [i_3] = (1 == 1);
            var_24 = ((((((((10325518463152479633 ? -26461 : 1))) ? 0 : (((arr_15 [i_3] [i_4]) ? var_9 : (arr_14 [i_4 - 2])))))) ? 2133126080 : (((1 + ((min(var_6, 5301))))))));
        }
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            arr_23 [i_3] [0] [i_3] = 0;
            var_25 = 12615148272550456644;
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_26 = (min(var_26, ((((((arr_7 [i_3] [24] [i_3]) > (arr_7 [i_3] [2] [i_6]))) ? (~var_7) : (((arr_15 [i_3] [18]) ? (min((arr_21 [20]), (arr_5 [i_6] [i_6] [i_3] [19]))) : (arr_13 [24]))))))));
            var_27 = (((min(((((arr_5 [i_3] [i_3] [i_6] [i_6]) ? var_11 : (arr_11 [i_3])))), (arr_5 [i_3] [i_3] [i_3] [i_3])))) ? (min(((min(1, 448))), (arr_3 [i_3] [12]))) : (max(var_10, 3113999118904637249)));
        }
        /* vectorizable */
        for (int i_7 = 3; i_7 < 22;i_7 += 1)
        {
            arr_30 [i_3] = (((arr_25 [i_7] [24] [i_7 - 1]) ? var_16 : (arr_5 [i_7] [i_7] [i_7 + 1] [i_7])));
            var_28 = (max(var_28, var_16));
            var_29 |= (arr_5 [14] [14] [i_3] [i_3]);
            var_30 = (arr_5 [i_7] [i_3] [i_3] [i_3]);

            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                var_31 = (((arr_6 [i_3]) ^ (arr_32 [i_3] [i_7] [i_8] [i_3])));
                arr_34 [i_3] [i_3] [i_8] [i_8] = (arr_4 [i_3] [i_8]);
                var_32 = -22710;
                var_33 = ((-340825973 && (((~(arr_33 [i_3] [i_3] [i_8]))))));
            }
            for (int i_9 = 4; i_9 < 24;i_9 += 1)
            {
                arr_39 [i_3] [i_7] [1] [i_7] = (arr_27 [i_9]);
                var_34 = (((arr_11 [i_7 + 3]) ? (arr_25 [i_9 + 1] [i_7 + 1] [i_3]) : var_1));
                var_35 = var_16;
            }
            for (int i_10 = 1; i_10 < 24;i_10 += 1)
            {
                arr_42 [i_10] [i_3] [i_3] [i_3] = (~3);
                var_36 = (arr_4 [i_7 + 1] [12]);
            }
            for (int i_11 = 0; i_11 < 25;i_11 += 1)
            {
                var_37 = -2942700895738383130;
                var_38 *= (1 != 1164556518);
            }
        }
        var_39 = (((min(var_6, 1)) ? (arr_3 [i_3] [i_3]) : (((arr_3 [i_3] [i_3]) ^ (arr_3 [i_3] [i_3])))));
        var_40 = ((((min((var_2 > var_4), (var_9 | var_8)))) * var_4));
        arr_45 [i_3] [i_3] = (arr_24 [11]);
    }
    #pragma endscop
}
