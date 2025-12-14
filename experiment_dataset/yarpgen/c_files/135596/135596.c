/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] = (max((arr_10 [i_3]), var_8));
                                var_16 = (((24078 ? 25003 : 110)));
                                var_17 = ((var_14 ? ((-((-(arr_8 [i_0] [i_1]))))) : (((min(var_11, (arr_6 [i_3 + 1] [i_1])))))));
                                var_18 |= ((!((((1645254337 && (arr_14 [i_0] [1] [1] [i_3] [i_4] [1])))))));
                                arr_17 [0] [i_3] = (((arr_7 [i_1] [i_2] [3] [i_4]) ? (((arr_13 [i_2] [i_2]) + -33)) : (max((((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? -41 : var_13)), -var_14))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_19 += ((+((6981 ? (arr_7 [i_1 + 2] [i_1] [i_1 + 1] [i_1 + 2]) : (((arr_10 [i_5]) + var_11))))));
                                var_20 = (~(max((arr_15 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 + 2]), ((65523 * (arr_1 [i_1] [i_2]))))));
                                var_21 = max((arr_1 [i_6] [i_2]), (arr_4 [i_0] [i_1 - 1] [i_2]));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_7 = 1; i_7 < 13;i_7 += 1)
                    {
                        var_22 = (((arr_3 [5]) ? (arr_3 [i_0]) : (arr_3 [i_0])));
                        arr_25 [i_2] [i_0] = ((~(arr_13 [i_0] [i_2])));
                        var_23 ^= (arr_19 [i_7] [i_0] [i_0] [i_7 + 1]);
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_8 = 4; i_8 < 14;i_8 += 1)
        {
            /* LoopNest 3 */
            for (int i_9 = 3; i_9 < 13;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        {
                            arr_38 [i_0] [i_8] = (((arr_4 [i_0] [i_0] [i_9 - 1]) ? ((-16 ? (arr_9 [i_0]) : 110)) : (arr_11 [i_9 - 1] [i_9 - 1] [i_9] [i_9] [i_9 - 3] [i_9])));
                            arr_39 [i_0] [i_8] [i_0] [i_0] = (((arr_0 [i_9 - 3]) && (arr_7 [i_9 - 2] [3] [i_9] [i_8 - 2])));
                        }
                    }
                }
            }
            var_24 = ((((41460 <= (arr_37 [i_0] [i_0] [11] [11] [i_8]))) ? (var_9 && -111) : (arr_29 [i_8])));

            for (int i_12 = 1; i_12 < 14;i_12 += 1)
            {
                var_25 = (min(var_25, (((~((19 + (arr_37 [i_0] [i_0] [i_0] [i_0] [i_0]))))))));

                for (int i_13 = 0; i_13 < 15;i_13 += 1)
                {
                    var_26 = (!117);
                    arr_45 [i_0] [8] [i_0] [i_8] = (((((47747 ? 41458 : 26808))) ? 125 : 4214139467));

                    for (int i_14 = 0; i_14 < 15;i_14 += 1)
                    {
                        var_27 = (min(var_27, ((((((var_1 != (arr_12 [i_14] [i_14] [i_14] [7] [2])))) * (arr_44 [i_8 - 3] [i_8 - 3] [i_8 - 2] [2]))))));
                        var_28 = (!var_5);
                    }

                    for (int i_15 = 3; i_15 < 14;i_15 += 1)
                    {
                        var_29 = 116;
                        arr_50 [14] [1] [14] [i_13] [i_8] = (126 == 127);
                    }
                }
                var_30 = ((((!(arr_40 [i_0] [i_8 - 4] [i_12])))));
            }
        }
        /* LoopNest 3 */
        for (int i_16 = 1; i_16 < 13;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 15;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 15;i_18 += 1)
                {
                    {
                        var_31 = arr_26 [i_0] [i_0] [i_17];

                        for (int i_19 = 0; i_19 < 15;i_19 += 1)
                        {
                            var_32 = ((~(arr_56 [i_19] [i_17] [i_17])));
                            var_33 = (max((arr_32 [0] [i_18] [0]), ((-(arr_7 [i_19] [14] [i_16] [9])))));
                            var_34 = (arr_14 [i_0] [i_0] [6] [i_17] [i_18] [i_0]);
                        }
                        /* vectorizable */
                        for (int i_20 = 0; i_20 < 15;i_20 += 1)
                        {
                            arr_66 [i_0] [i_0] [i_0] [i_18] [i_0] |= (~(arr_1 [i_0] [i_0]));
                            arr_67 [i_17] [i_16 + 1] [14] [i_16] = var_9;
                        }

                        for (int i_21 = 0; i_21 < 15;i_21 += 1)
                        {
                            arr_71 [10] [10] [0] [i_17] [0] [i_17] = ((((17788 ? -98 : 80)) + (!65533)));
                            var_35 *= 14;
                        }

                        /* vectorizable */
                        for (int i_22 = 0; i_22 < 15;i_22 += 1)
                        {
                            var_36 = (var_0 ? var_7 : (((-111 + (arr_43 [10] [3] [i_17] [i_18])))));
                            var_37 = (!var_4);
                        }
                        for (int i_23 = 0; i_23 < 15;i_23 += 1)
                        {
                            var_38 = (min(((2110870557 ? var_15 : 1519248265)), ((((4294967281 ? (arr_9 [i_0]) : (arr_74 [i_23])))))));
                            var_39 = (max(var_39, (!58555)));
                        }
                        /* vectorizable */
                        for (int i_24 = 0; i_24 < 15;i_24 += 1)
                        {
                            var_40 = (max(var_40, (((((1256958527 ? (arr_63 [i_0] [i_16] [9] [i_24]) : -90)) != (arr_34 [i_0] [i_16 + 2] [i_17] [i_0] [i_18] [i_24]))))));
                            var_41 = 80;
                            var_42 += (~1519248265);
                        }
                    }
                }
            }
        }
    }
    for (int i_25 = 0; i_25 < 11;i_25 += 1)
    {
        var_43 += 1813034190;
        arr_80 [i_25] = var_13;
    }
    var_44 = 54146;
    #pragma endscop
}
