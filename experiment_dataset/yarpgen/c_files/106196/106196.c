/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 = (((((max((arr_0 [i_0] [i_2]), (arr_7 [i_2]))))) ^ (max((arr_4 [i_1] [13]), (var_18 / var_17)))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_20 = (arr_2 [1] [2]);
                        var_21 += 120436123;
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            {
                                var_22 = -27172;
                                var_23 += (var_10 + (arr_6 [1] [i_5] [i_5] [i_0]));
                                var_24 = var_17;
                                arr_16 [i_1] = (arr_10 [i_1] [i_1] [i_2]);
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        var_25 = (min((((~(arr_10 [i_6] [i_6] [i_6])))), (max((arr_18 [i_6] [i_6]), (arr_12 [i_6])))));
        var_26 = ((min((4174531167 && 120436123), (max(var_11, var_13)))));
    }
    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        var_27 = (max(var_27, ((((arr_21 [i_7]) < 2)))));

        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            arr_24 [i_7] [i_8] = (arr_21 [17]);
            var_28 &= (((((3771054144 == (arr_21 [i_7])))) >= (((var_5 != (arr_20 [2] [4]))))));
            arr_25 [i_7] [i_8] = (((2095962438 ? 4174531178 : 7939881338824276029)));
            var_29 = ((((arr_21 [i_7]) ? (arr_22 [i_7]) : (arr_21 [i_7]))));
        }
        /* vectorizable */
        for (int i_9 = 2; i_9 < 18;i_9 += 1)
        {
            var_30 = (arr_21 [i_7]);
            var_31 = (((arr_26 [i_7] [i_9 + 1] [i_7]) % (arr_23 [i_9 - 1] [i_9 + 3] [i_9 + 1])));
        }
    }
    for (int i_10 = 0; i_10 < 12;i_10 += 1)
    {
        var_32 = (arr_27 [i_10] [i_10] [20]);
        var_33 = (max(var_5, ((((((-(arr_0 [i_10] [12])))) <= (arr_15 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]))))));
        var_34 = (max((max(var_10, (arr_26 [i_10] [i_10] [i_10]))), 0));
    }
    for (int i_11 = 2; i_11 < 22;i_11 += 1)
    {
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 23;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 1;i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 21;i_14 += 1)
                {
                    {

                        for (int i_15 = 0; i_15 < 23;i_15 += 1)
                        {
                            var_35 = var_6;
                            arr_43 [0] [i_12] [i_13] = 6;
                            var_36 = (min(3771054132, 523913163));
                        }
                        for (int i_16 = 0; i_16 < 23;i_16 += 1) /* same iter space */
                        {
                            var_37 = ((((((arr_32 [i_13 - 1] [i_11 - 1]) ? (arr_32 [i_13 - 1] [i_11 + 1]) : (arr_33 [i_14 - 1] [i_13 - 1] [i_11 - 1])))) ? (arr_32 [i_13 - 1] [i_11 + 1]) : (arr_33 [i_14 + 1] [i_13 - 1] [i_11 - 2])));
                            var_38 |= (arr_34 [i_11]);
                            arr_46 [i_13] = (((arr_41 [i_11] [i_13] [i_13 - 1] [i_14] [i_16] [i_14]) ? (arr_40 [i_13] [1] [12] [i_13] [i_16] [i_16]) : 15));
                        }
                        for (int i_17 = 0; i_17 < 23;i_17 += 1) /* same iter space */
                        {
                            var_39 = (max(var_39, (arr_30 [i_11 - 1])));
                            var_40 = (((3499667900 ? 7939881338824276029 : 523913152)));
                            var_41 -= (arr_47 [2] [i_17] [i_17] [i_14] [i_13 - 1]);
                        }
                        /* vectorizable */
                        for (int i_18 = 0; i_18 < 23;i_18 += 1) /* same iter space */
                        {
                            var_42 = (arr_31 [i_11]);
                            var_43 = ((~(arr_47 [i_14 + 1] [i_14 - 1] [i_11 - 2] [i_14] [i_13 - 1])));
                            var_44 = (((arr_42 [i_14 - 1] [i_11 + 1]) || (arr_42 [i_14 - 1] [i_11 + 1])));
                            var_45 = (((arr_33 [i_18] [i_18] [i_13 - 1]) ? (arr_33 [i_13 - 1] [i_14] [i_13 - 1]) : (arr_33 [i_13] [i_13] [i_13 - 1])));
                        }
                        var_46 = var_11;
                        arr_52 [i_13] [i_12] [i_12] = (arr_42 [i_13 - 1] [i_11 - 1]);
                        var_47 = var_2;
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_19 = 3; i_19 < 20;i_19 += 1)
        {
            var_48 *= var_6;
            var_49 = (min(var_49, ((((arr_36 [i_19 + 3] [1] [i_11 - 1] [i_11 - 2]) ? (arr_40 [20] [i_19 + 2] [i_19 + 1] [i_19] [i_11 - 2] [20]) : (arr_40 [20] [i_19] [i_19 + 2] [i_11 - 2] [i_11 - 2] [20]))))));
            var_50 = (((arr_35 [i_11]) / (~var_16)));
        }
        /* vectorizable */
        for (int i_20 = 0; i_20 < 23;i_20 += 1)
        {
            var_51 = (~var_2);
            var_52 = (max(var_52, (((!(arr_40 [1] [i_20] [8] [i_20] [i_20] [i_20]))))));
            var_53 *= (var_16 && var_8);
        }
        arr_57 [i_11] = (((arr_54 [i_11] [22] [i_11]) % var_15));
        var_54 = (arr_38 [i_11 - 1] [i_11 - 1] [i_11 - 1] [16]);
    }
    var_55 = var_1;
    #pragma endscop
}
