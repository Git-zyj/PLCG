/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_12;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        arr_3 [13] [i_0 + 3] = (arr_2 [i_0 + 3] [i_0 - 1]);
        var_18 = ((arr_1 [i_0 + 1]) || (arr_1 [i_0 - 1]));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_19 = ((4294967295 < -9) == ((max((arr_5 [i_1]), (arr_5 [i_1])))));

        for (int i_2 = 2; i_2 < 19;i_2 += 1)
        {
            arr_10 [0] [i_2] [i_2] = (max((max((min(-2102338619, 4294967295)), ((min(var_12, (arr_4 [i_1] [i_2])))))), (arr_4 [i_2 - 2] [i_1])));
            arr_11 [10] [i_2] |= (((((((arr_8 [i_1] [i_2 + 1] [i_1]) & (arr_7 [18])))) ? (((arr_8 [i_2] [i_1] [i_1]) ? (arr_1 [i_2]) : var_3)) : (arr_9 [i_2] [i_2]))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                arr_16 [i_1] [i_3] [i_4] = var_14;

                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    arr_19 [i_5] = ((((arr_12 [i_1]) ? (arr_17 [i_1] [14] [i_1] [i_1]) : var_4)) % (arr_9 [i_1] [17]));
                    var_20 *= (((arr_8 [i_1] [i_1] [i_1]) / (arr_2 [i_1] [i_4])));
                    arr_20 [i_1] [i_5] [6] [1] [i_5] = ((-19 ? 1 : 10849));
                    arr_21 [i_1] [i_4] [i_4] [i_5] [i_1] [i_1] |= (((arr_4 [i_1] [i_3]) ? (arr_4 [i_3] [i_4]) : var_11));
                    var_21 = (min(var_21, ((((arr_14 [i_5]) ? (arr_14 [i_3]) : var_15)))));
                }
                for (int i_6 = 1; i_6 < 17;i_6 += 1)
                {
                    arr_24 [i_6] [i_6] [i_4] = ((((-32765 ? (arr_9 [i_3] [i_6]) : var_4)) * ((0 >> (2009203872 - 2009203856)))));

                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        var_22 |= (((arr_5 [i_6 - 1]) ? (arr_22 [i_7] [i_6 + 4] [i_4] [i_3] [i_1]) : (((32765 && (arr_26 [i_1]))))));
                        arr_28 [i_1] [i_3] [i_3] [i_4] [i_6] [i_7] [i_7] = (((arr_17 [i_1] [i_3] [i_4] [i_4]) == (arr_15 [5] [i_6 - 1] [i_4] [i_3])));
                    }
                    arr_29 [i_1] [i_1] = (arr_15 [i_1] [i_3] [2] [i_6 + 4]);
                    var_23 = (min(var_23, ((((arr_2 [i_3] [i_1]) ? (-9072731071077498063 < 32765) : 38)))));
                }
                var_24 = var_3;
                var_25 = (min(var_25, (-23878 < -101)));
            }
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                var_26 = (min(var_26, (((-((var_3 * (arr_15 [i_1] [10] [i_3] [i_8]))))))));

                for (int i_9 = 1; i_9 < 18;i_9 += 1)
                {
                    arr_34 [i_9] [i_8] [i_3] [i_9] = ((1 < (arr_2 [i_9 - 1] [i_9])));
                    var_27 = var_2;
                    var_28 = (arr_23 [i_9]);
                    arr_35 [i_1] [i_1] [i_1] [i_1] [i_8] = 0;
                }
                for (int i_10 = 4; i_10 < 18;i_10 += 1)
                {
                    arr_38 [i_10] [i_8] [i_8] [i_1] = ((var_11 / (((-(arr_23 [i_8]))))));
                    arr_39 [i_8] [i_1] [i_3] [i_8] [i_8] = (((arr_26 [i_10 - 3]) ? (var_9 || var_4) : ((((arr_12 [i_1]) || (arr_26 [i_10]))))));
                    var_29 = (min(var_29, ((((arr_22 [i_10 + 2] [i_10] [i_10] [i_10 + 1] [i_3]) ^ (arr_17 [i_8] [i_3] [i_10 + 2] [i_10]))))));
                    var_30 *= 1;
                }
            }
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                arr_43 [i_11] [i_11] = (((arr_9 [i_3] [i_11]) / (arr_9 [i_11] [i_1])));
                /* LoopNest 2 */
                for (int i_12 = 2; i_12 < 19;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 21;i_13 += 1)
                    {
                        {
                            arr_50 [2] [i_1] [i_12] [i_12] [i_13] &= var_12;
                            arr_51 [i_11] [i_13] [i_1] [16] [i_11] [16] [i_11] = ((arr_17 [i_12 - 1] [i_12 + 2] [i_12] [i_12]) <= (arr_17 [i_12] [i_12 + 1] [i_12] [i_12]));
                        }
                    }
                }
                var_31 += (((arr_40 [i_3]) ? (arr_40 [i_3]) : (arr_40 [i_1])));
                var_32 = (arr_33 [i_1] [i_1] [i_1] [i_11]);
            }
            var_33 = (max(var_33, ((((arr_36 [i_1] [i_3] [i_3]) | (arr_36 [i_3] [i_3] [i_1]))))));
            var_34 += (arr_9 [i_1] [i_3]);
        }
        for (int i_14 = 4; i_14 < 19;i_14 += 1)
        {
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 21;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 21;i_16 += 1)
                {
                    {
                        var_35 = ((((((min(var_11, var_5)) && ((max(var_9, var_13))))))));
                        var_36 |= (~0);
                    }
                }
            }
            var_37 = (((arr_57 [i_1] [14] [i_1] [i_1]) ? ((((((arr_4 [i_14] [i_1]) ? var_7 : (arr_5 [i_1])))) ? (var_9 == var_15) : (arr_12 [i_1]))) : (arr_48 [i_1] [i_1] [i_1] [i_1] [i_14] [i_14])));
        }
        var_38 *= (arr_6 [i_1] [i_1]);
    }
    /* LoopNest 2 */
    for (int i_17 = 0; i_17 < 20;i_17 += 1)
    {
        for (int i_18 = 0; i_18 < 1;i_18 += 1)
        {
            {
                var_39 = (arr_17 [i_17] [i_17] [4] [i_17]);

                for (int i_19 = 1; i_19 < 18;i_19 += 1)
                {
                    var_40 *= (((((((((arr_17 [i_17] [i_17] [1] [i_19]) ? 95 : var_13))) ? 2 : (arr_48 [i_17] [i_18] [i_18] [i_19 - 1] [i_19] [i_19])))) ? (arr_60 [i_19] [i_17]) : ((min(20, 54672)))));
                    arr_67 [i_17] [i_17] [i_18] [i_19] = ((-(arr_47 [i_18])));
                    var_41 *= (arr_52 [i_17] [i_18] [i_17]);
                }
                var_42 = (min(var_42, var_6));
            }
        }
    }
    #pragma endscop
}
