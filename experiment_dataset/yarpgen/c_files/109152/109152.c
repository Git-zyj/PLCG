/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_4 [i_0] = (((1781 != -27659) > 255));
        var_10 = (min(var_10, (arr_0 [i_0])));

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_11 = (min(var_11, ((max(((var_1 ? (arr_0 [i_1]) : (arr_3 [i_0] [i_1]))), (max((arr_3 [i_0] [i_1]), (arr_0 [i_1]))))))));
            arr_9 [i_1] = (min(((((arr_6 [i_1] [i_1]) <= ((1 ? (arr_3 [i_0] [i_0]) : (arr_6 [i_0] [i_1])))))), ((79 ? 3951 : 78))));
        }
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {

        for (int i_3 = 2; i_3 < 20;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        {
                            var_12 = (min(-14, (-27659 | 1)));
                            var_13 &= (arr_12 [i_6]);
                            var_14 = ((((min(177, -1)) ? ((1 ? 180 : 242)) : (arr_22 [i_3] [i_3] [i_4] [i_4] [i_6] [7]))));
                            var_15 = (min(var_15, -1777133445));
                            var_16 *= min((((((var_1 ? (arr_14 [i_2] [i_2]) : (arr_16 [i_3] [i_4] [13] [i_6]))) <= (((arr_15 [i_5] [i_4] [i_2]) ? (arr_22 [i_2] [i_2] [i_2] [i_2] [i_6] [i_3 - 1]) : (arr_12 [i_4])))))), ((((((arr_17 [i_2] [i_3] [i_4] [i_5]) / (arr_22 [i_2] [i_3 - 1] [i_3] [i_3] [i_3] [i_3])))) ? (max(-1775604650, -6946)) : ((min(11, (arr_12 [i_5 - 1])))))));
                        }
                    }
                }
            }
            var_17 += ((((((arr_15 [i_2] [i_3] [i_3]) ? (((arr_18 [i_2] [i_2] [i_2] [i_3] [i_3]) ^ (arr_16 [i_2] [i_3] [i_3 + 2] [i_3]))) : 251))) ? ((((min((arr_11 [12]), var_3)) < ((var_2 ? -1 : var_0))))) : (min((arr_15 [i_2] [i_3 + 1] [i_3 - 1]), (arr_10 [i_2] [10])))));
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            arr_25 [i_2] [i_7] [i_2] = 100;
            arr_26 [i_2] [10] = (arr_14 [8] [i_7]);
        }
        var_18 = (min(var_18, ((-(min(var_7, (arr_11 [i_2])))))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                {
                    var_19 = (min((((-19003 / (arr_10 [i_8] [i_9])))), (((((var_8 ? (arr_22 [i_9] [i_9] [i_9] [i_8] [i_2] [i_9]) : -6223))) ? var_0 : (arr_23 [i_2] [i_9] [i_9])))));
                    arr_31 [i_2] [1] [i_8] [i_2] = (arr_19 [i_9] [i_8] [i_2] [i_2] [i_2] [i_2]);
                }
            }
        }
        arr_32 [i_2] = -27663;
        arr_33 [2] [i_2] = min((((arr_28 [i_2] [i_2] [i_2]) ^ (arr_28 [i_2] [i_2] [i_2]))), ((4 ? (arr_28 [i_2] [i_2] [i_2]) : (arr_12 [i_2]))));
    }
    for (int i_10 = 1; i_10 < 18;i_10 += 1)
    {
        arr_38 [i_10] = (arr_20 [8]);

        for (int i_11 = 2; i_11 < 18;i_11 += 1)
        {
            var_20 = arr_16 [i_10] [i_10] [i_10] [i_11];
            var_21 = (max(var_21, ((((1 % (((arr_17 [i_11] [i_11] [i_11] [i_10]) ? var_9 : 11))))))));
            arr_42 [i_10] [i_11] = (max((((-var_1 < (var_0 & 27663)))), (min((arr_27 [i_10 - 1]), 236))));
        }
        for (int i_12 = 0; i_12 < 19;i_12 += 1) /* same iter space */
        {
            var_22 = ((((arr_30 [i_12] [0]) - (arr_37 [i_10 - 1]))));
            var_23 = (((-(arr_27 [i_10 + 1]))) + (arr_14 [i_10 + 1] [0]));
            arr_47 [16] [i_10] = -1;
        }
        for (int i_13 = 0; i_13 < 19;i_13 += 1) /* same iter space */
        {
            var_24 += (min((max((arr_22 [14] [i_10] [i_10] [i_13] [i_13] [12]), (-15 | var_2))), ((+(((arr_46 [i_10] [i_10] [i_10]) ? 255 : (arr_45 [i_13] [i_10] [i_10])))))));
            arr_51 [i_10] [i_13] [i_10] = -2147483641;
        }
        for (int i_14 = 0; i_14 < 19;i_14 += 1) /* same iter space */
        {
            arr_55 [i_10] [i_14] [i_14] = -234;
            arr_56 [i_10] [i_14] = 1930776701;
            var_25 += ((((!((max(var_1, -1))))) ? ((var_0 ? ((var_0 ? (arr_50 [i_10]) : 0)) : (arr_43 [i_10 + 1] [i_10]))) : ((((-996584171 ? 155 : (arr_46 [i_10] [i_10] [i_14]))) % ((var_1 ? var_4 : 1))))));
        }
        arr_57 [i_10] [i_10] &= ((~((((max(var_0, var_7))) % (arr_53 [i_10 - 1])))));
    }
    var_26 = (min((max((~-1), var_7)), (((((var_4 ? -587146110 : var_0))) ? var_5 : var_4))));

    /* vectorizable */
    for (int i_15 = 2; i_15 < 11;i_15 += 1)
    {
        arr_60 [i_15] = ((-29813 ? 0 : 158));
        /* LoopNest 2 */
        for (int i_16 = 3; i_16 < 13;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 14;i_17 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 14;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 14;i_19 += 1)
                        {
                            {
                                var_27 = (max(var_27, 173));
                                var_28 |= (~6);
                            }
                        }
                    }

                    for (int i_20 = 0; i_20 < 14;i_20 += 1) /* same iter space */
                    {

                        for (int i_21 = 0; i_21 < 14;i_21 += 1)
                        {
                            var_29 = 64;
                            var_30 *= (arr_70 [i_21]);
                            var_31 = (arr_36 [9] [i_20]);
                            var_32 = (((arr_70 [i_21]) <= (arr_64 [i_15 + 3] [i_15 + 1] [i_16 + 1])));
                        }
                        var_33 = (!10422);
                        arr_77 [i_15] [2] [i_15] [i_20] = ((~(arr_46 [i_15 - 2] [6] [i_20])));
                        var_34 = (max(var_34, (98 != 78)));
                    }
                    for (int i_22 = 0; i_22 < 14;i_22 += 1) /* same iter space */
                    {
                        arr_82 [i_15] [i_15] [i_15] [i_22] = ((-15 ? (((arr_37 [i_22]) ? (arr_64 [i_15] [i_15] [i_22]) : var_7)) : (arr_75 [i_15] [i_16] [i_17] [i_17] [i_17])));
                        arr_83 [i_15] [i_16] [i_22] [i_22] = (~((157 ? -800097464 : (-2147483647 - 1))));
                        var_35 ^= ((var_2 / ((167 ? 255 : 55))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_23 = 2; i_23 < 13;i_23 += 1)
        {
            for (int i_24 = 0; i_24 < 14;i_24 += 1)
            {
                {
                    var_36 = (arr_36 [i_15] [i_15]);

                    for (int i_25 = 0; i_25 < 14;i_25 += 1)
                    {
                        var_37 += ((var_5 >= (arr_16 [i_15] [i_24] [i_15] [i_15])));
                        var_38 ^= (arr_16 [i_15 - 1] [i_23 - 1] [i_25] [i_25]);
                    }
                    arr_93 [i_24] [i_23] [i_15] [i_24] = (38 & ((-2147483641 ? -800097452 : 1393933165)));
                }
            }
        }
        arr_94 [i_15 - 2] = -var_0;
    }
    var_39 -= var_5;
    #pragma endscop
}
