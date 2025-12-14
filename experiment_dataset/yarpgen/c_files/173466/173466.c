/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((!((max(1240768982, var_7))))) ? var_0 : -var_0));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_16 = (max(var_16, (((+((~(((arr_6 [i_0] [i_0] [i_2] [i_3]) * var_12)))))))));
                        var_17 = (-(max((((arr_0 [i_2 + 1] [i_1]) << (((arr_10 [i_0] [i_0] [i_0] [i_0]) - 30239)))), (arr_8 [i_0] [i_0]))));
                        var_18 = var_11;
                    }
                    for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 21;i_5 += 1)
                        {
                            var_19 = (arr_0 [i_2 - 3] [i_0]);
                            var_20 = (3654221840 + 45);
                            var_21 = (((arr_12 [i_5 + 1] [i_5] [i_5] [i_5] [i_2] [i_5 + 1]) < (arr_12 [i_5] [i_5] [i_5] [i_5 + 1] [i_2] [i_5 - 1])));
                            var_22 = (max(var_22, ((((arr_6 [i_2 - 2] [i_5 + 1] [i_5] [i_5 + 1]) ? (arr_5 [i_5 + 1] [i_5 + 1] [i_2 - 1] [i_5 - 1]) : var_9)))));
                        }

                        for (int i_6 = 2; i_6 < 19;i_6 += 1)
                        {
                            var_23 = ((((max(var_12, var_5))) ? (arr_1 [i_1]) : (((((arr_3 [i_1] [8] [i_6 - 1]) >= 8920849394135511932))))));
                            var_24 = ((-((102 ? (arr_11 [i_2] [i_2 - 2] [i_2 - 2] [13]) : (arr_14 [i_2] [i_2 - 2] [i_2])))));
                            var_25 = var_14;
                        }
                    }
                    for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
                    {
                        arr_22 [i_2] [i_2] = -1240768982;
                        var_26 = (max(var_26, (((((((((var_10 ? var_12 : var_10))) ? ((~(arr_9 [12]))) : var_3))) + (((3654221840 ? 140 : 8192))))))));
                    }

                    for (int i_8 = 2; i_8 < 19;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            var_27 = ((((((!(arr_1 [i_8 - 1]))))) - (((arr_1 [i_8 + 3]) ? -2143904762 : (arr_1 [i_8 - 2])))));
                            var_28 = (min(var_28, 8188));
                            arr_28 [i_0] [i_1] [i_8] [i_2] [i_0] [3] = (min((min((arr_24 [i_0] [i_2]), (arr_15 [i_0] [i_0] [i_1] [20] [i_2] [i_8] [i_9]))), (((-(arr_7 [9] [i_2] [i_2 + 1] [i_8]))))));
                        }
                        for (int i_10 = 2; i_10 < 21;i_10 += 1)
                        {
                            var_29 *= ((255 ? (arr_13 [i_1] [i_2] [i_0] [i_2]) : (arr_12 [i_0] [i_1] [20] [i_2 - 1] [i_8] [14])));
                            var_30 = (min(var_30, 102));
                            var_31 += (((((-(arr_3 [i_0] [i_1] [i_8])))) ? var_7 : (arr_29 [14] [i_8] [i_8 - 1] [i_8 + 3] [i_8 + 3])));
                        }
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            var_32 = 1560314996;
                            var_33 = (max(((max(var_3, (arr_26 [i_11] [i_1] [i_1] [i_1] [i_1] [i_0])))), (min((arr_11 [i_8 + 3] [i_2 - 3] [i_11] [i_11]), (arr_11 [i_8 + 2] [i_2 - 1] [17] [11])))));
                        }
                        for (int i_12 = 2; i_12 < 20;i_12 += 1)
                        {
                            var_34 = (-(arr_33 [i_2 - 1] [i_2 - 1] [i_2 - 3] [i_2 - 3]));
                            var_35 = (min(var_35, ((((((103 ? 8193 : ((0 ? (arr_24 [16] [i_12]) : 57355))))) ? (293244979 & 57342) : -1894489317)))));
                        }
                        var_36 |= (min((arr_34 [i_1] [i_8 - 2] [i_8 - 2] [i_1]), ((((arr_34 [12] [i_8 - 1] [i_8 - 1] [i_8]) < (arr_34 [i_0] [i_8 + 2] [i_1] [i_8]))))));
                        arr_36 [i_0] [15] [i_0] [i_2] = (((((((293244979 ? 1 : 1))) ? (min(var_7, 205)) : (((var_9 ? 3904009279 : (-2147483647 - 1)))))) ^ var_11));
                    }
                    for (int i_13 = 0; i_13 < 22;i_13 += 1) /* same iter space */
                    {
                        var_37 -= (arr_23 [i_13] [i_2] [i_1]);
                        var_38 -= ((-var_11 ? (arr_6 [i_2 - 1] [i_2 - 2] [i_2 - 2] [i_2]) : ((var_11 ? var_10 : var_5))));
                    }
                    for (int i_14 = 0; i_14 < 22;i_14 += 1) /* same iter space */
                    {
                        var_39 = ((var_10 < (((!(arr_33 [i_14] [i_2 - 2] [i_2 - 2] [i_2 - 2]))))));
                        var_40 = (min(var_40, 962195932063387035));
                        var_41 = var_12;
                    }
                }
            }
        }
    }
    var_42 += ((((var_14 ? (~-1240768999) : var_7)) >> 3));
    #pragma endscop
}
