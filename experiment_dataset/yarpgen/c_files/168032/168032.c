/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168032
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_19 = (((arr_0 [i_0]) ? 1154657597 : -37));
        var_20 -= (((12157504756535584172 ? 4749865682192701857 : (arr_1 [4]))));
        var_21 *= ((0 ? (((arr_0 [i_0]) ? (arr_0 [i_0]) : -1479090359)) : (arr_0 [i_0])));
        arr_2 [i_0] [i_0] = (13696878391516849742 - 1);
        var_22 -= 26;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_23 ^= (arr_0 [i_1]);

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                var_24 -= 32767;
                var_25 ^= 14782291659936294680;
            }
            var_26 = (!-13230);
            var_27 = (-9223372036854775807 - 1);
            arr_10 [i_2] [i_1] = (arr_6 [i_2]);
        }
        for (int i_4 = 4; i_4 < 13;i_4 += 1)
        {
            var_28 = (((arr_12 [i_4 - 3] [i_4 - 3] [i_4 - 4]) ? 0 : 0));
            var_29 = 32767;
            var_30 = (arr_11 [i_4 - 4] [i_4 + 2]);
        }
        var_31 = (arr_11 [i_1] [i_1]);
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            var_32 = ((-(arr_3 [i_5])));
            var_33 -= 1;
            arr_18 [i_5] [i_5] [i_5] = (!-1479090359);
        }
        arr_19 [10] &= (16850390536680553801 || 3229100287);
        var_34 -= (min((arr_0 [i_5]), (max((arr_15 [i_5] [i_5]), (arr_15 [i_5] [i_5])))));
    }
    var_35 = (!-4);
    var_36 = var_14;

    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        var_37 = (min((arr_21 [i_7]), 4749865682192701874));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 15;i_9 += 1)
            {
                {

                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        arr_30 [i_7] [i_10] [i_9] [i_10] = ((((((min(3229100287, 15)) + (arr_12 [i_7] [i_8] [i_10])))) && (13696878391516849750 > 4749865682192701838)));
                        var_38 = (min((min(var_0, (((1354230449 << (var_5 - 2247516510)))))), (137438953471 - 6)));
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 0;i_11 += 1)
                    {
                        arr_34 [i_7] [i_8] [i_11] = ((9899 ? -32 : (arr_26 [i_7] [i_7] [i_9])));
                        var_39 = (((arr_32 [i_7] [i_11 + 1] [i_9 - 2] [i_7]) % ((-120 ? (arr_27 [i_7] [15] [3] [i_7]) : var_11))));
                        var_40 = (arr_25 [i_7] [i_8] [0] [i_11 + 1]);
                        var_41 &= 21420;
                    }
                    /* vectorizable */
                    for (int i_12 = 4; i_12 < 13;i_12 += 1)
                    {
                        var_42 += 177;
                        var_43 |= (arr_35 [i_12 - 2] [i_9 - 2] [i_9 - 2] [i_12 - 2]);
                        arr_37 [i_7] [i_7] [i_7] = (((arr_36 [i_12] [15] [i_12] [i_12 + 3] [i_12]) ? (arr_36 [i_7] [i_7] [i_9] [i_12 + 2] [i_12]) : (arr_33 [i_7] [15] [i_8] [i_12 - 4] [i_12])));
                    }
                    arr_38 [i_9] |= (arr_35 [i_7] [i_7] [i_8] [i_7]);
                    arr_39 [i_7] [i_8] [15] [i_9] = (max(9223372036854775807, (((1 & 4749865682192701851) ? (arr_12 [i_9 + 1] [4] [i_9 - 1]) : (arr_22 [i_7] [i_8])))));
                    var_44 -= 3335855257420330865;

                    for (int i_13 = 1; i_13 < 12;i_13 += 1)
                    {
                        var_45 = (min(var_45, ((max((min((min((arr_33 [i_7] [i_8] [i_8] [i_8] [i_13]), (arr_11 [i_7] [i_7]))), (arr_12 [i_8] [i_9] [i_13]))), ((((~1) >= var_6))))))));
                        arr_42 [i_13] [i_8] = (((1 ? 4749865682192701865 : var_10)));
                        var_46 -= (8081 ? 39346 : (-9223372036854775807 - 1));
                    }
                }
            }
        }
        var_47 = (max(var_47, 46));
    }
    #pragma endscop
}
