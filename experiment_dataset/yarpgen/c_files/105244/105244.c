/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_18 |= (((arr_0 [i_0]) + -106));
        var_19 = ((!(arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_20 = (max(var_20, (--2)));
        arr_7 [i_1] [i_1] = ((16404498987982735809 ? 2 : -2533865563602495694));
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            {
                var_21 = var_0;
                var_22 = ((max(-2, (~var_7))));
            }
        }
    }

    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        var_23 = (((min(1, (min(-2, (arr_13 [i_4] [i_4])))))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 20;i_6 += 1)
            {
                {
                    var_24 = 23;
                    var_25 += (min((0 >> 2), (arr_15 [i_5] [i_5] [i_6 + 2])));
                }
            }
        }

        for (int i_7 = 2; i_7 < 21;i_7 += 1)
        {
            arr_21 [i_4] = (arr_14 [i_4] [i_4]);
            var_26 = (min((arr_18 [i_4]), ((2090980521 ? ((max(-1, 1))) : 13831144305447987414))));
        }
        arr_22 [i_4] = ((((~((405853254012765729 ? 114 : 32767)))) - ((-(arr_19 [i_4] [i_4])))));
        arr_23 [i_4] = (((arr_13 [i_4] [i_4]) & (max((min((arr_19 [i_4] [i_4]), 2349820654980169034)), (473481077 | var_4)))));
    }
    for (int i_8 = 0; i_8 < 10;i_8 += 1)
    {
        arr_26 [i_8] = (min((max(3821486218, 11)), (((232 + 1) ? 3821486218 : (((min(1, (arr_19 [i_8] [i_8])))))))));
        var_27 = 15794711852999411094;
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 16;i_9 += 1)
    {
        arr_29 [i_9] = ((var_7 ? (arr_16 [i_9] [i_9] [i_9] [i_9]) : (arr_16 [i_9] [i_9] [i_9] [i_9])));
        var_28 *= ((((((-9223372036854775807 - 1) || (arr_27 [i_9])))) << (var_0 - 11500)));

        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            arr_34 [i_9] [i_10] [i_9] = (arr_28 [i_10]);

            for (int i_11 = 0; i_11 < 16;i_11 += 1)
            {
                arr_38 [i_9] [i_10] [i_10] = (((arr_18 [i_9]) ? 0 : (arr_18 [i_9])));
                var_29 -= (arr_37 [i_10]);
                arr_39 [i_10] = (7921755123554060436 || 3);
            }
            for (int i_12 = 0; i_12 < 16;i_12 += 1)
            {

                for (int i_13 = 2; i_13 < 14;i_13 += 1)
                {

                    for (int i_14 = 0; i_14 < 16;i_14 += 1)
                    {
                        var_30 += ((~(((!(arr_47 [i_9] [i_10] [i_10] [i_13] [i_10]))))));
                        arr_48 [i_10] [i_10] [i_10] [i_13 - 1] [i_13 - 2] [i_14] [i_14] = (arr_43 [i_13 - 2] [i_10] [i_12] [i_12] [i_12]);
                    }
                    var_31 = (max(var_31, var_13));

                    for (int i_15 = 1; i_15 < 1;i_15 += 1) /* same iter space */
                    {
                        arr_51 [i_9] [i_10] = (((((42 ? (arr_30 [i_10]) : -2))) ? (arr_49 [i_15] [i_10] [i_12] [i_13] [i_15]) : (arr_32 [i_9] [i_13 + 2])));
                        var_32 = (arr_17 [i_9] [i_12] [i_12] [i_13 - 1]);
                        arr_52 [i_10] [i_10] [i_10] [i_10] [i_10] = ((39253790 ^ (arr_36 [i_10])));
                    }
                    for (int i_16 = 1; i_16 < 1;i_16 += 1) /* same iter space */
                    {
                        var_33 = (arr_54 [i_13 - 2] [i_10] [i_12] [i_12]);
                        arr_55 [i_9] [i_9] [i_10] [i_9] [i_9] = -var_11;
                    }
                    var_34 = 33920;
                }
                arr_56 [i_10] = arr_53 [i_9] [i_9] [i_10] [i_9] [i_12] [i_12];
                var_35 = (((((4034 ? var_7 : (arr_43 [i_9] [i_9] [i_9] [i_10] [i_12])))) * (((arr_28 [i_9]) ? 0 : (arr_20 [i_10])))));
                arr_57 [i_9] [i_10] [i_10] [i_10] = 1;
            }
        }
        var_36 = ((((((arr_50 [i_9] [i_9] [i_9] [i_9] [i_9]) ? 1 : (arr_42 [i_9] [i_9] [i_9] [i_9] [i_9])))) ? (arr_40 [i_9]) : (-127 - 1)));
    }
    #pragma endscop
}
