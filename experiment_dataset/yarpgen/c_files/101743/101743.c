/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            var_17 |= (arr_3 [i_1]);
            var_18 ^= (min((arr_4 [i_0] [i_0] [i_1]), 1760290398171869794));
            var_19 = (arr_4 [i_0] [i_0] [i_0]);
            arr_6 [i_0] = (arr_1 [i_0]);
        }
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {

            /* vectorizable */
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                arr_11 [i_2] = (arr_3 [i_2]);
                var_20 &= (arr_8 [i_0] [i_0]);
            }
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                arr_14 [i_0] [i_0] [i_2] = (max(50, (max(483445989, 3811521306))));
                var_21 = max((min(3811521306, 3956616790387140255)), (min(3811521306, (min((arr_5 [i_4] [i_2] [15]), 483445991)))));
            }
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                var_22 |= 483445990;
                var_23 = 0;

                for (int i_6 = 1; i_6 < 15;i_6 += 1)
                {
                    var_24 ^= ((max((arr_10 [i_6 + 3] [i_6 + 2] [i_6 + 3]), (arr_10 [i_6 + 1] [i_6 + 1] [i_6 + 2]))));
                    arr_21 [12] [12] [12] [12] [1] [i_6] = 483445989;
                }
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    arr_25 [i_2] [i_2] [3] = (arr_0 [i_5]);
                    arr_26 [i_0] [i_0] [i_0] = (min(7960709347872496787, 483445990));
                }
                var_25 = arr_1 [i_0];
                arr_27 [i_5] [i_2] [i_0] &= (min(2422149838, (min((arr_9 [i_0] [i_0] [17]), (arr_13 [12] [12] [i_5])))));
            }
            var_26 = (min(((max((arr_24 [i_0] [i_0]), (arr_7 [7] [i_2])))), (arr_1 [i_0])));

            for (int i_8 = 4; i_8 < 18;i_8 += 1)
            {
                arr_30 [i_0] [i_0] [i_8] [i_8] = (min(483445974, 1872817457));
                arr_31 [i_8] [i_0] [i_0] = 174;
                var_27 = min(26, ((max((min((arr_2 [i_0]), 3811521305)), (arr_0 [i_8])))));
                var_28 |= ((max((arr_4 [i_8 - 4] [i_8 - 4] [i_8 - 3]), (min(8250590947693747496, (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                var_29 &= (arr_0 [i_8 - 4]);
            }
            for (int i_9 = 1; i_9 < 18;i_9 += 1)
            {
                var_30 = 483445989;
                arr_34 [i_9] [i_9] [i_2] [i_2] = (arr_18 [i_0] [i_2] [i_9] [i_9] [i_2] [i_9]);
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 16;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 19;i_11 += 1)
                    {
                        {
                            var_31 = (arr_15 [i_9 - 1] [i_9] [i_9 - 1] [i_9]);
                            arr_42 [i_9] [i_9] [i_9] [18] [18] = min((arr_9 [i_10 + 3] [i_10 - 2] [i_9 + 1]), (arr_9 [i_10 + 2] [i_10 - 2] [i_9 - 1]));
                        }
                    }
                }
            }
            for (int i_12 = 3; i_12 < 18;i_12 += 1)
            {
                /* LoopNest 2 */
                for (int i_13 = 1; i_13 < 16;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 19;i_14 += 1)
                    {
                        {
                            arr_50 [i_0] [i_0] [10] [i_0] [8] [i_0] = (max((arr_29 [i_12 - 3] [16] [i_12 - 2] [i_13 + 2]), (arr_29 [i_12 - 1] [i_12] [i_12 - 1] [i_13 + 3])));
                            arr_51 [i_0] [3] [3] [i_13] [i_14] = (arr_9 [i_2] [9] [i_14]);
                        }
                    }
                }
                var_32 = (max(var_32, ((max(((max((max(-9223372036854775801, (arr_7 [14] [14]))), (arr_32 [i_0] [i_2] [12])))), (min(2422149838, (arr_10 [i_0] [i_0] [i_0]))))))));
            }
        }
        for (int i_15 = 0; i_15 < 19;i_15 += 1) /* same iter space */
        {
            var_33 = ((min((arr_0 [i_0]), (arr_7 [3] [3]))));
            var_34 = (max(var_34, (arr_0 [i_0])));
        }
        for (int i_16 = 0; i_16 < 19;i_16 += 1) /* same iter space */
        {
            var_35 = (max(var_35, (((min(9223372036854775807, 1872817457))))));
            var_36 = arr_46 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0];
            arr_57 [i_16] [6] [i_16] = arr_29 [i_16] [i_16] [10] [10];
            arr_58 [i_16] = ((min((arr_23 [i_0] [i_0] [i_16] [i_16]), 9007198986305536)));
        }
        var_37 = (arr_44 [i_0] [10] [i_0]);
    }
    var_38 = 2422149838;
    /* LoopNest 3 */
    for (int i_17 = 0; i_17 < 15;i_17 += 1)
    {
        for (int i_18 = 0; i_18 < 15;i_18 += 1)
        {
            for (int i_19 = 3; i_19 < 14;i_19 += 1)
            {
                {
                    var_39 = (max(var_39, ((max(((min((arr_63 [i_19 - 1] [i_19 - 2]), (min((arr_66 [i_17] [i_17] [i_19] [i_18]), (arr_15 [i_17] [17] [i_17] [i_17])))))), (min((arr_12 [i_17] [2] [i_17] [12]), 483445989)))))));

                    for (int i_20 = 2; i_20 < 13;i_20 += 1) /* same iter space */
                    {
                        var_40 ^= (((max(9151314442816847872, (arr_62 [i_19] [i_20])))));
                        var_41 *= (arr_33 [i_20 + 2] [i_20] [4]);
                        var_42 = arr_29 [i_17] [i_17] [i_17] [i_17];
                    }
                    for (int i_21 = 2; i_21 < 13;i_21 += 1) /* same iter space */
                    {
                        arr_71 [i_21] = min(255, 0);
                        var_43 = (min((arr_23 [i_19 - 2] [i_19 - 2] [i_21 - 2] [i_21 + 1]), (arr_33 [i_17] [14] [i_17])));
                    }
                    for (int i_22 = 2; i_22 < 13;i_22 += 1) /* same iter space */
                    {
                        var_44 |= arr_61 [i_22 + 1];
                        arr_75 [i_17] [14] [i_17] [8] [i_22] = 9272998414726192479;
                    }
                }
            }
        }
    }
    #pragma endscop
}
