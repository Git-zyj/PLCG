/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_18 = var_17;
        var_19 = (max(((((arr_0 [i_0] [i_0]) || ((min((arr_2 [i_0]), (arr_1 [i_0]))))))), ((((-(arr_1 [i_0]))) / ((min((arr_1 [i_0]), (arr_1 [3]))))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 2; i_2 < 13;i_2 += 1)
        {
            arr_8 [i_1] [i_1] [i_1] = (((((arr_7 [i_2 + 1] [i_2 - 2] [i_2 + 1]) / (arr_0 [i_2] [i_2 - 2]))) / var_12));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        {
                            arr_17 [i_1] [i_1] [i_1] [i_1] = var_9;
                            arr_18 [i_5] [i_3] [i_5] [i_1] [i_5] = ((((~(var_6 > var_16))) * ((((((arr_0 [i_4] [i_4]) >= (arr_3 [i_1] [i_1])))) ^ ((((arr_5 [i_1] [i_2 + 1]) > (arr_9 [i_1] [i_1] [6] [6]))))))));
                            var_20 = ((((((max(var_13, (arr_13 [i_5] [i_4] [i_3] [i_2] [1]))) > var_6))) > ((max((var_3 || var_16), (arr_10 [i_1]))))));
                        }
                    }
                }
            }
            arr_19 [i_1] [i_1] [i_1] = (arr_9 [i_1] [i_1] [i_1] [i_2]);
            var_21 = (arr_3 [i_1] [i_2]);
            arr_20 [i_1] = (min((max(((((arr_12 [i_1] [i_1] [i_1] [i_1] [i_1]) - var_17))), (var_0 + var_3))), ((min(var_17, (arr_5 [i_2 - 1] [i_2 - 1]))))));
        }
        for (int i_6 = 1; i_6 < 13;i_6 += 1)
        {
            var_22 = var_1;
            var_23 += ((((((((var_15 <= (arr_16 [i_1] [i_1] [12] [1] [i_1] [i_1] [i_1])))) >= ((var_0 + (arr_11 [i_1] [i_1] [i_6] [i_6])))))) >= (((!((var_15 == (arr_3 [10] [i_6 - 1]))))))));
            var_24 = (max(((((arr_12 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_1]) || (arr_12 [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_6 - 1] [i_1])))), (((arr_15 [i_6 - 1] [i_6] [i_1] [i_6] [i_6]) % var_6))));
            arr_23 [i_1] = var_5;
            var_25 = (min(((max(var_8, var_2))), (~var_8)));
        }
        for (int i_7 = 1; i_7 < 12;i_7 += 1)
        {
            arr_26 [i_1] [i_1] [i_7] = (arr_15 [i_7 + 2] [i_7] [i_1] [i_1] [i_7 - 1]);

            for (int i_8 = 1; i_8 < 10;i_8 += 1)
            {
                var_26 = ((((~(arr_16 [3] [i_1] [5] [i_8] [i_8] [i_8] [i_8]))) > (((!(arr_12 [i_7] [8] [2] [i_7] [i_1]))))));
                arr_31 [i_1] [i_7 + 2] [i_1] = (max(var_0, (arr_30 [i_1] [i_1])));
                var_27 = (i_1 % 2 == zero) ? ((max(((var_1 * (((var_14 << (((arr_3 [i_1] [i_8]) - 3509504127))))))), var_1))) : ((max(((var_1 * (((var_14 << (((((arr_3 [i_1] [i_8]) - 3509504127)) - 4140231086))))))), var_1)));
            }
            /* vectorizable */
            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                arr_34 [i_1] [i_7] [12] [i_1] = ((var_16 * (((var_11 - (arr_11 [i_1] [i_1] [i_7] [i_9]))))));
                arr_35 [i_9] [i_9] [i_1] |= ((arr_15 [i_1] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_1]) * (arr_15 [i_7] [i_7 - 1] [i_7 - 1] [i_9] [i_9]));
            }
            var_28 &= (((arr_27 [i_1] [i_7]) > ((-((min(var_2, var_0)))))));
        }
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            var_29 = ((-(arr_36 [i_1] [i_10])));
            var_30 = ((((-(arr_2 [i_1]))) ^ (((var_8 <= (arr_2 [1]))))));
        }
        var_31 = ((((((arr_30 [i_1] [i_1]) || (arr_30 [i_1] [i_1]))))) > (min((var_17 >= var_11), (min(var_10, var_11)))));
        arr_38 [i_1] = ((((((((var_2 >= (arr_11 [i_1] [i_1] [i_1] [i_1])))) * (arr_2 [i_1])))) || (var_12 >= var_2)));
        var_32 = (-(arr_37 [i_1] [i_1] [i_1]));
    }
    for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
    {
        var_33 = (min((max(((var_14 % (arr_29 [i_11] [i_11] [4]))), ((max((arr_9 [0] [i_11] [i_11] [i_11]), var_7))))), ((((arr_2 [i_11]) >= (arr_2 [i_11]))))));
        var_34 = ((-((max((arr_9 [i_11] [i_11] [i_11] [i_11]), (arr_9 [i_11] [i_11] [i_11] [i_11]))))));
        var_35 = (arr_14 [i_11] [i_11] [i_11] [i_11] [12] [i_11] [i_11]);
        arr_41 [i_11] [13] &= -var_15;
    }

    for (int i_12 = 0; i_12 < 17;i_12 += 1)
    {
        var_36 = -var_16;
        arr_44 [i_12] = (arr_43 [i_12]);
        var_37 = (((arr_43 [i_12]) > ((((max((arr_43 [i_12]), (arr_43 [5]))) <= var_9)))));
    }
    for (int i_13 = 3; i_13 < 23;i_13 += 1)
    {
        var_38 = (max((((var_8 <= (var_4 + var_13)))), (((arr_45 [i_13]) * (((arr_45 [13]) >> (arr_45 [i_13])))))));
        var_39 += var_11;
        var_40 = (max((((((arr_45 [i_13 + 2]) | var_16)) | (min(var_9, (arr_46 [i_13 - 2]))))), var_2));
    }
    for (int i_14 = 0; i_14 < 15;i_14 += 1)
    {
        arr_49 [i_14] [i_14] &= (((((-((var_9 / (arr_2 [i_14])))))) > (max(((((arr_1 [0]) || var_8))), (((arr_46 [16]) * var_2))))));
        arr_50 [10] = ((((((var_17 || (arr_42 [i_14]))))) >= ((((-(arr_0 [12] [12]))) % (((((arr_43 [i_14]) > var_7))))))));
        arr_51 [1] = ((~(((!(((arr_2 [i_14]) == var_15)))))));
        var_41 = (((((arr_43 [i_14]) || (arr_1 [i_14]))) || ((max(((max(var_5, (arr_2 [i_14])))), ((var_13 % (arr_43 [i_14]))))))));
    }
    #pragma endscop
}
