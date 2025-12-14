/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (((-((13646 ? var_8 : (-16746 != var_16))))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (!4419);

        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 4; i_4 < 15;i_4 += 1)
                    {
                        {
                            arr_17 [i_0] [i_0] [i_0] = (max(-4734, var_16));
                            var_18 += (!(arr_8 [i_0] [i_4 - 1]));
                        }
                    }
                }
                var_19 = (max(var_19, ((max((arr_8 [i_1 - 4] [i_1 + 2]), ((~(-9223372036854775807 - 1))))))));
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_20 |= (arr_13 [i_6] [i_5] [i_2] [i_0] [i_0]);
                            arr_22 [i_0] [i_0] [i_1 - 2] [i_0] [i_5] [i_6] [i_5] = ((((max((max(1, (arr_15 [9] [i_5] [i_6]))), (!9223372036854775784)))) <= (!28)));
                        }
                    }
                }
                arr_23 [i_0] [1] [i_0] [i_1] &= (((arr_21 [i_1] [1] [i_1 + 1] [i_1 + 1] [i_1 - 3] [i_1 + 1]) ? (arr_21 [i_1] [i_1] [i_1] [i_1 + 1] [i_1 - 3] [i_1]) : ((228 ? (arr_21 [i_1] [i_1] [i_1] [i_1 + 1] [i_1 - 3] [i_1 - 2]) : (arr_21 [i_1] [i_1] [i_1] [i_1 + 1] [i_1 - 3] [i_1])))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        {
                            var_21 = (((((arr_15 [i_1 + 2] [i_1 + 2] [i_1 + 1]) ? (arr_15 [i_1 - 1] [i_1 - 1] [i_1 - 3]) : (arr_15 [i_1 + 2] [i_1 + 1] [i_1 - 3]))) <= var_4));
                            var_22 = (min((max((max(var_4, -110)), (var_1 >= var_3))), -var_13));
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_9 = 3; i_9 < 16;i_9 += 1)
            {
                var_23 += (arr_10 [i_1] [i_1 - 3] [i_9 + 1] [i_1 - 3]);
                arr_32 [i_0] [i_1] [i_9] [i_9] = (((arr_28 [i_9 - 2] [6] [1] [i_9 + 1] [i_9 - 2] [i_9] [i_9]) + (arr_8 [i_1 - 2] [i_9 - 1])));
            }
            arr_33 [i_0] = (max(((max(-var_7, ((min((arr_15 [14] [i_1 + 1] [i_1 + 2]), (arr_14 [i_0] [i_0] [i_0] [4] [i_1]))))))), (min((~1319428542), (arr_9 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_0])))));
            var_24 = ((~(arr_30 [14] [i_1 + 2] [i_1 + 1])));
        }
    }
    for (int i_10 = 0; i_10 < 17;i_10 += 1) /* same iter space */
    {
        var_25 = ((((min(((min(255, (arr_34 [i_10])))), ((var_5 ? 60800 : 1803551199))))) ? ((max((arr_7 [i_10] [10] [i_10] [i_10]), 4094))) : ((((((!(arr_21 [i_10] [i_10] [8] [4] [2] [i_10])))) != (~-3393))))));
        arr_37 [i_10] = 3088195295;
    }
    for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
    {
        arr_40 [i_11] = (min(var_5, ((-1876447405633706973 ? (~var_7) : ((-(arr_30 [i_11] [i_11] [6])))))));
        arr_41 [i_11] = (min(((var_9 ? 3232 : (arr_13 [6] [i_11] [6] [i_11] [0]))), (((max(-16445, (arr_20 [i_11])))))));
        arr_42 [i_11] = (min((min((min(31264, 2966143201)), var_7)), 15));
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 16;i_12 += 1)
    {
        var_26 = ((1 ? ((var_16 ? 109 : (arr_38 [i_12]))) : (arr_26 [i_12] [i_12] [i_12] [i_12])));
        var_27 = (((arr_35 [i_12]) - var_13));

        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            arr_50 [i_13] [i_12] [i_12] = ((var_14 ? (var_10 % var_10) : 49839));
            arr_51 [14] = ((125 ? 4734 : -1));

            for (int i_14 = 0; i_14 < 16;i_14 += 1) /* same iter space */
            {
                var_28 = (max(var_28, ((((127 ? var_11 : 205))))));
                var_29 = (!var_6);
                arr_54 [i_12] [i_12] [i_12] [i_12] = 10;
            }
            for (int i_15 = 0; i_15 < 16;i_15 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 16;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 16;i_17 += 1)
                    {
                        {
                            var_30 ^= -2147483634;
                            arr_65 [7] [i_13] [i_15] [i_15] [i_15] [10] [i_17] = ((((((arr_1 [i_15]) ? -15 : -16445))) ? ((var_3 / (arr_4 [i_17] [i_13]))) : (arr_9 [i_12] [i_13] [i_15] [i_17])));
                            arr_66 [i_12] = (((arr_6 [i_17] [i_16] [11]) << (arr_34 [i_12])));
                        }
                    }
                }
                var_31 *= (arr_5 [i_12] [i_13]);
            }
            for (int i_18 = 0; i_18 < 16;i_18 += 1) /* same iter space */
            {
                var_32 *= var_5;
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 16;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 16;i_20 += 1)
                    {
                        {
                            var_33 = ((!(arr_21 [i_12] [i_13] [i_13] [2] [14] [14])));
                            arr_78 [i_12] = (((arr_7 [i_13] [16] [i_19] [i_20]) / (arr_75 [i_12] [i_20] [i_18] [i_20] [i_20])));
                        }
                    }
                }
            }
        }
        for (int i_21 = 2; i_21 < 13;i_21 += 1)
        {
            arr_81 [i_21] [0] = ((((((arr_59 [i_12] [i_21 - 2] [i_21] [i_12]) == 0))) != (arr_57 [i_21] [i_21] [i_21 + 3])));
            arr_82 [i_21] [i_21] = (arr_12 [i_21 + 1] [i_21 - 1] [i_21 + 2] [i_21 + 3]);
        }
    }
    #pragma endscop
}
