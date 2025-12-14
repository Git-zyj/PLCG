/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = (1 & 17565196123078948003);
        arr_4 [i_0] = (((arr_0 [i_0]) >= (arr_0 [i_0])));
        arr_5 [i_0] = (((arr_1 [i_0]) ? (((((((var_1 ? 0 : (arr_1 [i_0])))) || (arr_2 [i_0]))))) : (((arr_2 [i_0]) ? 20793 : (arr_0 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_10 = ((1 ? 245 : 1));

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_11 = ((var_3 ? (((arr_0 [i_1]) ? (((arr_0 [i_1]) & var_7)) : (arr_1 [1]))) : (((arr_8 [i_1] [i_2]) ? (arr_8 [i_1] [i_1]) : (arr_8 [i_2] [i_1])))));
            var_12 = 1360585184;
        }
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            var_13 = (((arr_14 [i_3] [i_3] [i_1]) ? (((881547950630603625 && (arr_14 [i_3] [i_1] [i_1])))) : (arr_14 [i_1] [i_3] [i_3])));
            var_14 = (min((arr_10 [i_1] [i_1] [i_3]), ((~(((arr_8 [i_1] [i_1]) ? (arr_11 [i_3] [i_1] [i_1]) : 1956391015))))));
            var_15 |= arr_7 [i_3] [i_1];
            var_16 = (((34 ? 9180715339732324672 : 25924642)));

            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        {
                            var_17 = ((((((arr_0 [i_5]) ? var_1 : (arr_0 [i_6])))) && (((~(arr_0 [i_6]))))));
                            var_18 += (arr_16 [i_3] [i_3] [i_3]);
                            arr_22 [i_4] [i_3] [i_4] [i_4] [i_6] = (arr_11 [i_4] [i_4] [i_4]);
                        }
                    }
                }

                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    var_19 += -1;

                    for (int i_8 = 1; i_8 < 12;i_8 += 1)
                    {
                        arr_28 [i_4] [i_8] = (((((~(arr_14 [i_1] [i_1] [0])))) <= 20599));
                        arr_29 [i_4] [i_4] [i_4] [i_4] [7] [i_4] [i_1] = ((+((((((arr_0 [i_1]) ? 15728640 : (arr_7 [i_7] [i_7])))) ? (((~(arr_8 [i_1] [i_3])))) : ((237 ? var_8 : (arr_15 [i_8] [i_7] [i_3] [i_3])))))));
                    }
                    for (int i_9 = 1; i_9 < 1;i_9 += 1)
                    {
                        var_20 = (((((-(arr_20 [i_9 - 1] [i_4] [i_7] [i_4] [i_7])))) && (1 & 1)));
                        var_21 = 17565196123078947997;
                        arr_34 [i_3] [i_7] [5] [i_4] [i_9] = ((-(~1)));
                        var_22 = ((((min((arr_11 [i_1] [i_4] [i_9 - 1]), (arr_11 [i_7] [i_7] [i_7])))) || ((((arr_11 [i_7] [i_1] [i_1]) ? (arr_11 [i_7] [i_3] [i_1]) : (arr_11 [i_7] [i_4] [i_3]))))));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 22;i_10 += 1)
    {
        for (int i_11 = 2; i_11 < 21;i_11 += 1)
        {
            {
                arr_40 [i_10] &= var_9;
                var_23 = ((-(arr_39 [i_10] [i_10] [i_11])));
                var_24 *= (arr_35 [i_10]);
            }
        }
    }
    var_25 = ((min(-15086, 241)));
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 1;i_12 += 1)
    {
        for (int i_13 = 1; i_13 < 10;i_13 += 1)
        {
            {

                /* vectorizable */
                for (int i_14 = 0; i_14 < 13;i_14 += 1)
                {
                    var_26 = var_1;
                    var_27 += (((arr_31 [i_14] [i_13] [i_13] [1] [i_12] [i_12]) >= var_1));
                }
                arr_49 [i_12] [i_12] = ((-(min(((4294967279 ? -2147483642 : 9223372036854775790)), (~74)))));
                var_28 += ((((127 ? 239 : 8384512))) ? (arr_38 [i_13 + 1]) : (max((arr_14 [i_13 + 3] [i_13 + 3] [i_13 + 1]), (arr_38 [i_13 + 1]))));
                arr_50 [i_12] [i_12] = (arr_39 [i_13] [i_13 + 2] [i_13 + 2]);
                var_29 |= (((((~(arr_17 [i_12] [6] [i_13 + 2] [i_13]))) == (((((arr_36 [1] [i_12]) >= 12400)))))));
            }
        }
    }
    var_30 = var_7;
    #pragma endscop
}
