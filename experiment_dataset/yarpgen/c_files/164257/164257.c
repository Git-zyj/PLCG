/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= (var_10 & var_6);
    var_16 = (min(var_1, var_4));
    var_17 += 0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_4 [i_0] = (((arr_1 [i_0]) % (arr_1 [i_0])));
        var_18 = (max(var_18, ((((arr_3 [i_0]) * (arr_1 [i_0]))))));
        var_19 ^= ((var_0 & (var_0 != var_2)));
        var_20 = (-7608036290032922635 / 36);

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_8 [i_0] [i_1] [i_1] = (((arr_0 [i_0] [i_0]) | (((var_0 ? -90 : (arr_2 [0] [i_1]))))));
            var_21 |= arr_5 [i_0] [i_0] [i_0];
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_22 = (max(var_22, (((92 ? (arr_7 [i_0] [13]) : (var_2 & var_12))))));
            arr_11 [i_0] |= (((((var_13 ? (arr_9 [11] [i_0] [i_0]) : 96884302))) ? var_6 : (arr_5 [i_0] [i_2] [i_0])));
            arr_12 [13] [i_2] = (var_3 < var_9);
            var_23 = ((((((arr_6 [i_0] [i_2]) ? var_13 : (arr_6 [i_0] [i_0])))) ? (var_7 & var_0) : var_10));
        }
        for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
        {
            var_24 = (arr_9 [i_0] [i_3] [i_3]);
            arr_16 [i_0] [i_3] |= (arr_7 [i_0] [i_3]);
            arr_17 [i_0] [i_3] &= (var_8 >= var_0);
            var_25 = (min(var_25, ((((var_10 >> (((arr_5 [i_0] [i_0] [i_3]) - 882173526)))) == (((((arr_9 [i_3] [i_0] [i_0]) && (arr_6 [i_3] [1])))))))));
            var_26 += ((arr_7 [i_3] [i_3]) ? (~27771) : var_1);
        }
        for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
        {
            var_27 *= (((arr_9 [i_4] [i_4] [i_4]) ? (arr_9 [i_0] [9] [9]) : var_1));
            arr_20 [i_0] [i_0] = (-127 - 1);

            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                var_28 = (min(var_28, (((-(!var_4))))));
                var_29 = ((~(arr_2 [i_0] [i_0])));
            }
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                var_30 *= ((!(!0)));
                var_31 = (min(var_31, (((~(99 == 9319866971986969267))))));
            }
            arr_27 [i_0] [11] [3] = ((var_4 ? (arr_15 [i_4]) : 0));
        }
    }
    for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_8 = 3; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                {
                    var_32 = (max((min(var_5, (~var_10))), (((min(-7964299466134828816, var_10))))));
                    var_33 = (((arr_25 [i_8 - 3] [i_8 - 3] [i_9]) - (((arr_25 [i_8 - 1] [i_8 - 3] [i_9]) ? (arr_25 [i_8 - 3] [i_8 + 1] [i_9]) : var_14))));
                    arr_34 [8] [i_8 - 1] [i_8 - 2] = ((0 - ((var_1 ? 9319866971986969240 : 65))));
                }
            }
        }
        var_34 = (max(var_34, (((var_0 ? (((!(~var_8)))) : ((min(((((arr_3 [i_7]) || var_2))), 0))))))));
        var_35 = (max(var_35, ((((max(245, var_1)))))));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 13;i_10 += 1) /* same iter space */
    {
        var_36 = ((((~(arr_5 [i_10] [i_10] [i_10]))) << (var_9 - 11702026654952332968)));

        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            var_37 *= (((arr_10 [23] [i_10] [i_10]) > (arr_10 [i_10] [i_10] [i_10])));
            var_38 = (!245);
        }
        for (int i_12 = 2; i_12 < 10;i_12 += 1)
        {
            arr_42 [7] [i_12] = (((var_5 >= var_4) ? (((0 * (arr_7 [i_12 + 3] [i_10])))) : (1290389927 & 76)));
            arr_43 [i_12] = ((var_2 < ((37078 ? 6 : var_6))));
            var_39 = (arr_36 [i_12 + 3]);
            var_40 -= ((-(arr_18 [i_10] [i_10] [i_10])));
        }
        for (int i_13 = 0; i_13 < 0;i_13 += 1) /* same iter space */
        {
            var_41 = ((var_8 << (((arr_2 [i_10] [i_13 + 1]) - 2311908701055041983))));
            var_42 = (((((var_12 * (arr_29 [i_13])))) ? (arr_14 [i_13] [i_13] [i_10]) : -41159850));
        }
        for (int i_14 = 0; i_14 < 0;i_14 += 1) /* same iter space */
        {
            var_43 = ((((((arr_3 [14]) ? var_9 : var_6))) ? (arr_3 [i_14]) : 3370791830));
            var_44 = (((arr_15 [i_14 + 1]) ? (arr_15 [i_14 + 1]) : var_14));
        }
    }
    #pragma endscop
}
