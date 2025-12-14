/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_18 = (arr_4 [i_0] [i_1] [i_0]);
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        {
                            var_19 = (min(var_19, var_4));
                            var_20 = (arr_6 [i_3]);
                            var_21 &= ((-(arr_9 [1] [1] [i_2] [3] [i_2] [i_4])));
                            var_22 = ((-(((arr_0 [i_3]) ? -6560458321230126460 : (arr_8 [i_0] [i_0] [i_2] [i_0] [i_4])))));
                            var_23 = ((-(((arr_7 [i_0] [i_0] [i_2] [i_0] [i_4]) ? (arr_1 [i_1] [i_4]) : (arr_6 [i_0])))));
                        }
                    }
                }
            }
        }
        for (int i_5 = 3; i_5 < 10;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            var_24 = (arr_15 [i_5 - 2]);
                            var_25 = (((arr_5 [i_0] [i_0]) ? (arr_5 [i_5 - 3] [i_7]) : (((4197933891730649594 || (arr_18 [i_0] [i_5] [i_6] [i_6]))))));
                            var_26 = (arr_19 [i_0] [i_5] [i_6]);
                        }
                    }
                }
            }
            var_27 = -6560458321230126460;
            var_28 += -var_9;
            var_29 = ((6560458321230126460 - ((((var_1 || (arr_12 [i_0] [i_5] [i_5] [3] [3] [i_0])))))));
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                {

                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        var_30 = (min(var_30, (((var_12 ? -56 : (((arr_2 [i_9] [i_11]) >> (((arr_20 [i_10]) - 10427251053491702978)))))))));
                        var_31 = ((136 >= ((-(arr_18 [i_0] [i_9] [10] [i_11])))));

                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            var_32 ^= (((arr_12 [i_9] [i_9] [i_10] [7] [i_9] [i_10]) || (arr_12 [i_0] [i_0] [i_0] [i_0] [9] [i_0])));
                            var_33 = ((((((arr_18 [i_0] [i_9] [i_0] [i_0]) / -6560458321230126460))) ? (arr_25 [i_0] [i_10] [i_9]) : (arr_2 [i_11] [i_0])));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 11;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            {
                                var_34 = var_7;
                                var_35 &= ((((!(arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) ? (arr_7 [i_14] [i_13] [i_10] [i_9] [i_0]) : var_5));
                                var_36 = (((arr_23 [i_0] [i_9]) * (arr_8 [i_10] [i_10] [i_10] [i_10] [i_10])));
                            }
                        }
                    }
                }
            }
        }
        var_37 = (((arr_35 [i_0] [6] [i_0]) >= (arr_35 [i_0] [i_0] [i_0])));
        var_38 = (min(var_38, (arr_34 [i_0] [i_0] [4] [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
    {
        var_39 -= var_3;
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 11;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 11;i_17 += 1)
            {
                {

                    for (int i_18 = 0; i_18 < 1;i_18 += 1) /* same iter space */
                    {
                        arr_51 [i_15] [i_16] [i_17] [i_15] = -6560458321230126460;
                        arr_52 [i_15] [i_18] [i_17] = (((arr_21 [i_15] [i_15] [i_15] [i_15] [i_15] [9]) ? (arr_21 [i_15] [i_15] [i_16] [i_15] [i_17] [i_18]) : var_12));
                        var_40 ^= ((~(arr_22 [2] [i_16] [4] [i_16])));
                        var_41 &= (arr_17 [0] [i_17] [i_18]);
                    }
                    for (int i_19 = 0; i_19 < 1;i_19 += 1) /* same iter space */
                    {
                        var_42 ^= (arr_30 [i_15]);
                        arr_56 [i_15] [i_15] = (arr_39 [i_15] [i_15] [i_17] [i_19] [i_15]);

                        for (int i_20 = 3; i_20 < 10;i_20 += 1)
                        {
                            var_43 &= ((~(arr_3 [i_15])));
                            var_44 = (((-(arr_49 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15]))));
                        }
                        var_45 = (min(var_45, ((((arr_31 [i_15] [i_16] [i_17] [i_19]) ? -6560458321230126460 : -5533635489827664196)))));
                        var_46 += (((arr_39 [i_15] [5] [8] [i_17] [5]) ? ((1 ? (arr_33 [i_19] [i_16] [i_15]) : (arr_3 [i_15]))) : (((((arr_26 [i_15] [i_16] [10]) && var_6))))));
                    }
                    /* LoopNest 2 */
                    for (int i_21 = 0; i_21 < 11;i_21 += 1)
                    {
                        for (int i_22 = 0; i_22 < 11;i_22 += 1)
                        {
                            {
                                var_47 = 0;
                                var_48 = (~11723);
                                var_49 = (max(var_49, (((var_14 > (arr_12 [i_22] [i_21] [i_21] [i_17] [9] [i_15]))))));
                            }
                        }
                    }
                    arr_65 [i_15] [i_16] [i_16] [i_17] = (((arr_3 [i_16]) / (arr_3 [i_17])));
                    var_50 &= (((arr_46 [i_17] [i_16] [0]) || (arr_46 [i_17] [i_15] [i_15])));
                    var_51 = (arr_35 [i_17] [i_17] [i_17]);
                }
            }
        }
        var_52 = var_5;
        var_53 &= ((arr_6 [i_15]) == (arr_6 [i_15]));
    }
    for (int i_23 = 0; i_23 < 14;i_23 += 1)
    {
        var_54 &= ((((!var_2) || ((max(-4308560042910940124, 6842230033009088791))))));
        var_55 = (((((arr_67 [i_23] [i_23]) ? 1767219451 : (arr_67 [i_23] [i_23])))) ? (((arr_67 [i_23] [i_23]) ? 6560458321230126474 : var_5)) : ((((arr_67 [i_23] [i_23]) ? 1 : (arr_67 [i_23] [i_23])))));
    }
    var_56 = (max(var_56, ((min(var_2, var_5)))));
    #pragma endscop
}
