/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_6;
    var_17 = (min(var_17, var_6));
    var_18 = (max(var_18, var_12));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 0; i_2 < 0;i_2 += 1) /* same iter space */
            {
                arr_8 [i_2] [i_0] [i_0] [i_0] = (min(((((arr_7 [1] [i_2 + 1] [i_2 + 1] [i_2 + 1]) != (arr_7 [i_1] [i_2 + 1] [i_2] [i_2 + 1])))), ((var_4 ? (arr_7 [i_0] [i_2 + 1] [i_2 + 1] [4]) : (arr_7 [1] [i_2 + 1] [i_2 + 1] [i_2])))));
                arr_9 [i_0] [i_1] [i_0] [i_0] = ((((min((34353 && 34353), 8388576))) == (arr_1 [i_0])));
            }
            for (int i_3 = 0; i_3 < 0;i_3 += 1) /* same iter space */
            {
                var_19 ^= max((!var_15), (min(34338, (((var_14 ? var_1 : (arr_2 [i_0])))))));
                arr_13 [3] [i_0] [i_3] = (arr_0 [i_0]);
                var_20 = (arr_10 [i_1] [i_1] [i_1] [i_0]);
                var_21 ^= arr_11 [i_0] [i_0];
            }
            var_22 = ((((arr_11 [i_0] [i_0]) ? (arr_11 [i_0] [i_1]) : 31194)));
        }
        for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
        {
            arr_16 [i_0] [i_0] [i_0] = ((((((arr_5 [i_0] [i_4] [i_4]) ? (!var_0) : var_8))) ? var_8 : ((((max((arr_0 [i_0]), var_15)) >> (((arr_10 [i_4] [i_4] [i_4] [i_4]) + 25581)))))));
            var_23 -= ((+(((arr_0 [6]) - (arr_12 [i_4] [i_4] [i_4] [i_4])))));
            var_24 ^= ((((((arr_12 [i_4] [i_4] [i_4] [i_0]) ? 34360 : var_2))) ? 32 : (arr_2 [i_4])));
            arr_17 [i_0] [i_4] [i_4] = (arr_2 [i_0]);
        }
        for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
        {
            arr_21 [i_0] [i_0] [i_0] = ((((((var_4 ? (arr_12 [i_5] [i_5] [i_5] [i_5]) : (arr_11 [i_0] [i_5]))) == (arr_4 [i_0] [i_0]))) ? (((!(arr_7 [i_0] [i_0] [i_5] [i_5])))) : (((arr_5 [i_0] [i_0] [i_5]) ? (arr_0 [i_0]) : -87))));
            var_25 = (arr_15 [6] [6]);
        }
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            arr_25 [i_0] [i_0] [i_0] = ((((((((var_13 * (arr_1 [i_0])))) ? ((var_5 * (arr_2 [2]))) : ((var_8 ? var_9 : 34332))))) ? 34318 : (arr_1 [i_0])));
            var_26 -= (arr_23 [i_0]);
        }

        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            var_27 = ((((38830 != (arr_10 [i_0] [i_0] [i_0] [i_7]))) ? (arr_22 [i_0] [i_0]) : (((arr_12 [i_0] [i_0] [i_7] [i_7]) - (arr_24 [i_0] [i_0])))));
            var_28 *= (((-((~(arr_0 [10]))))));
            arr_29 [i_0] = ((((var_10 < ((((arr_15 [i_0] [i_7]) <= (arr_23 [i_7])))))) ? var_0 : ((max((((!(arr_12 [i_0] [2] [i_7] [i_7])))), (arr_11 [i_7] [i_7]))))));
        }
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            var_29 *= (arr_20 [i_0] [i_0] [i_0]);
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        {
                            var_30 = (((arr_38 [i_11] [1] [i_10] [i_9] [i_9] [i_8] [i_0]) > (min(8126464, -42))));
                            var_31 = (min(var_31, (((-(max(var_13, (arr_23 [i_0]))))))));
                            var_32 = (arr_41 [i_0] [i_8] [i_9]);
                        }
                    }
                }
            }
        }

        for (int i_12 = 3; i_12 < 7;i_12 += 1)
        {
            arr_44 [i_0] = ((+((((((arr_36 [i_0] [i_0] [i_0]) ? (arr_38 [i_0] [10] [1] [i_12] [0] [0] [i_12]) : var_9)) > var_12)))));
            var_33 = (min(var_33, (arr_3 [8])));

            /* vectorizable */
            for (int i_13 = 0; i_13 < 11;i_13 += 1) /* same iter space */
            {
                arr_47 [i_0] [i_12] [i_12] [i_12 + 2] = (!-34342);
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 11;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 11;i_15 += 1)
                    {
                        {
                            var_34 = ((var_11 ? (arr_11 [i_12 - 3] [i_12 - 3]) : (arr_11 [i_12 + 3] [i_12 + 4])));
                            var_35 *= (!var_15);
                            var_36 = -5008166797320519722;
                            arr_54 [i_15] [7] [i_0] [7] [i_0] = (arr_41 [i_12 - 3] [1] [i_12 - 2]);
                        }
                    }
                }
                arr_55 [1] [i_0] [i_0] [i_0] = (!31169);
            }
            for (int i_16 = 0; i_16 < 11;i_16 += 1) /* same iter space */
            {

                /* vectorizable */
                for (int i_17 = 2; i_17 < 10;i_17 += 1)
                {
                    var_37 = ((var_10 & (arr_10 [i_0] [i_12 + 3] [i_16] [i_16])));
                    var_38 = ((!(arr_5 [i_17 - 2] [i_12 - 1] [0])));
                    var_39 = 34339;
                    arr_60 [i_0] [i_12] = (((arr_38 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17 - 1] [i_17 - 1]) | (arr_6 [i_17 - 2] [i_17 + 1] [i_17 - 1] [i_0])));
                }
                for (int i_18 = 0; i_18 < 1;i_18 += 1)
                {
                    var_40 = ((31163 ? 133169152 : (max((arr_12 [i_0] [i_12] [i_16] [i_18]), (((var_6 ? var_15 : var_4)))))));
                    var_41 |= (((31221 == var_5) ? (((((arr_11 [i_12 - 2] [i_12 - 2]) != (arr_36 [i_12 + 2] [i_12 + 3] [i_12]))))) : (arr_36 [i_12 + 2] [i_12 - 2] [i_12])));
                    var_42 = arr_46 [i_0] [i_0] [i_18];
                    var_43 = ((((!(arr_5 [i_12 - 1] [i_12 - 3] [i_12 + 4])))) >> (!-var_15));
                }
                arr_64 [i_0] = (((((127 ? (arr_57 [i_0]) : (arr_14 [i_0] [i_0])))) ? (min(((1 ? (-32767 - 1) : 11)), (((arr_2 [i_16]) ^ var_12)))) : (((!((min((arr_52 [i_16] [i_12] [i_12] [6] [i_0]), var_0))))))));
            }
        }
        arr_65 [i_0] = ((-(arr_27 [i_0] [i_0])));
        var_44 = var_7;
    }
    /* vectorizable */
    for (int i_19 = 0; i_19 < 1;i_19 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_20 = 1; i_20 < 8;i_20 += 1)
        {
            for (int i_21 = 1; i_21 < 10;i_21 += 1)
            {
                {
                    arr_75 [i_19] [3] [i_21] [i_21] = (arr_70 [i_19] [i_19] [i_19]);
                    arr_76 [1] [i_20] [8] [i_21] |= (arr_40 [i_20 + 1] [2] [i_21 + 1] [2] [i_20 + 1]);
                    arr_77 [i_19] [i_20] [i_19] = (arr_14 [i_20 + 1] [i_21 - 1]);
                }
            }
        }
        arr_78 [i_19] [i_19] = (arr_5 [i_19] [i_19] [i_19]);
    }
    #pragma endscop
}
