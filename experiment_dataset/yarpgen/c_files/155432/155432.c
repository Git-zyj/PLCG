/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_15 = 51874;
        var_16 *= (145 || 8386560);
        var_17 = (((arr_1 [i_0]) ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 + 1])));
        var_18 &= var_5;
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                var_19 *= var_12;
                arr_12 [i_2] = ((~(((((((arr_10 [i_1]) ? var_2 : (arr_5 [i_1] [1])))) || (((8386572 ? 61308 : var_8))))))));
            }
            var_20 = 8386583;
            var_21 = (min(var_0, (max(var_10, (arr_9 [i_2 - 1] [i_2] [i_2])))));
            var_22 *= (((~4286580735) > (arr_11 [i_2 + 2] [i_2 + 2])));
        }
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {

            for (int i_5 = 1; i_5 < 21;i_5 += 1)
            {
                var_23 = (min(var_23, ((max(((min(-9, (arr_11 [i_1] [10])))), ((((max(var_0, -1153945832))) ? var_12 : ((4286580739 ? 124 : 102)))))))));
                var_24 = (max(var_24, var_4));
                var_25 = ((-(arr_14 [i_5 + 1] [i_4] [i_1])));
            }

            for (int i_6 = 1; i_6 < 1;i_6 += 1)
            {
                var_26 = (arr_9 [i_6] [i_6] [i_6]);
                var_27 = (max((max((arr_4 [i_6 - 1]), var_6)), (arr_9 [i_6] [i_6 - 1] [i_6 - 1])));
                var_28 ^= (arr_11 [i_1] [i_1]);
                var_29 = (arr_3 [i_1]);
                var_30 = var_7;
            }
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                arr_25 [i_7] [i_7] [i_7] [i_1] = ((max(var_2, (max(var_11, (arr_24 [i_7] [8] [i_1]))))));
                var_31 = (min(var_31, 1));
                var_32 = arr_3 [i_1];
                var_33 = (arr_16 [1] [i_7]);
                var_34 = (min(var_34, (((var_5 ? (arr_23 [i_4] [i_4] [i_1] [i_7]) : (min(1, (arr_6 [i_1] [i_4] [i_7]))))))));
            }
            var_35 = (min((arr_2 [i_1]), (max((arr_23 [i_4] [i_4] [i_1] [i_1]), 1153945831))));
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                {

                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        var_36 = (max(var_36, ((~(arr_5 [i_9] [i_10])))));
                        var_37 = ((!((min(1, 54043)))));
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 24;i_11 += 1)
                    {
                        var_38 = (32401 & var_1);
                        var_39 += (((arr_6 [i_1] [i_9] [i_9]) ? var_3 : var_0));
                        var_40 |= (arr_17 [i_9] [i_8] [i_1] [i_1]);

                        for (int i_12 = 4; i_12 < 22;i_12 += 1)
                        {
                            var_41 = ((var_7 ? var_8 : (arr_29 [i_8])));
                            var_42 = -1153945832;
                            var_43 = (max(var_43, (((((((arr_5 [i_1] [i_1]) ? 348973959 : (arr_22 [i_11] [i_8])))) ? -1557877908214785309 : 8386603)))));
                        }
                        var_44 = (((arr_14 [i_1] [i_8] [i_9]) << (var_8 - 3142619051)));
                    }
                    for (int i_13 = 0; i_13 < 24;i_13 += 1)
                    {
                        var_45 = (((((-(arr_14 [i_8] [i_8] [i_13])))) ? (arr_14 [i_1] [7] [i_1]) : 1));
                        var_46 = (min(((max((arr_35 [i_1] [i_8] [i_9] [i_13]), var_1))), ((~(arr_18 [i_13] [i_8] [i_1] [i_13])))));
                    }
                    var_47 = ((var_1 || (arr_39 [i_9] [i_9] [i_9] [i_8] [i_8] [8] [i_1])));
                }
            }
        }
        var_48 = (max(var_48, (arr_35 [i_1] [i_1] [i_1] [i_1])));
    }
    for (int i_14 = 4; i_14 < 21;i_14 += 1)
    {
        /* LoopNest 2 */
        for (int i_15 = 3; i_15 < 19;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 23;i_16 += 1)
            {
                {
                    var_49 -= var_5;
                    arr_52 [i_15] = ((!((!((max(var_12, (arr_49 [i_15] [i_15]))))))));
                }
            }
        }
        var_50 = (min(((max(((~(arr_42 [i_14] [1] [i_14] [i_14]))), -9242))), (min((arr_47 [i_14 - 2] [i_14] [i_14]), (arr_43 [i_14] [i_14 - 1])))));
    }
    for (int i_17 = 0; i_17 < 1;i_17 += 1)
    {
        var_51 = (((((var_13 ? var_1 : var_7))) ? ((18 ? 741193056064719049 : 4286580735)) : ((max(((min((arr_39 [i_17] [1] [i_17] [i_17] [i_17] [1] [i_17]), (arr_17 [12] [i_17] [i_17] [i_17])))), ((var_13 ? var_5 : (arr_30 [i_17] [i_17] [i_17]))))))));
        var_52 = (max(var_52, ((min((min((arr_19 [i_17] [14] [i_17] [i_17]), (arr_5 [i_17] [i_17]))), var_0)))));
    }
    var_53 &= (min(var_3, var_14));
    #pragma endscop
}
