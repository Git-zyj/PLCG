/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174671
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_20 = ((-(!var_11)));
                            var_21 ^= (max((((var_10 || (arr_15 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])))), (min(var_9, (arr_15 [i_1] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1])))));
                        }
                        arr_16 [i_0] [i_1 + 1] [i_2] [i_3] = (((arr_4 [i_0] [i_2]) ? var_0 : (((!(arr_14 [i_0] [i_3] [i_2] [i_1] [i_1]))))));

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_19 [1] [i_1 + 1] [i_5] [i_3] [i_1 + 1] = ((~(min(var_18, (var_6 >> var_0)))));
                            arr_20 [i_0] [i_0] [i_5] [i_2] [i_3] [i_3] [i_5] = ((-var_0 / (arr_8 [i_0] [i_0] [i_0])));
                            var_22 = (arr_5 [i_2] [i_2]);
                        }
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            var_23 *= (arr_10 [i_6] [i_3] [i_1 - 1] [i_6] [i_1]);
                            arr_23 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 - 1] [i_1] = (arr_12 [i_0] [i_6]);
                        }
                    }
                    var_24 = (arr_21 [i_0] [i_0] [0] [i_1 - 1] [12] [i_2]);
                    arr_24 [3] [i_1] [3] = ((3977073504 < (~32767)));
                }
            }
        }
    }
    var_25 = var_15;
    var_26 *= (var_15 >> var_2);

    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        var_27 = -1;
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 14;i_10 += 1)
                {
                    {
                        var_28 = ((var_7 ? ((((1 <= ((-(-32767 - 1))))))) : (((arr_28 [i_7] [i_8]) % (var_19 != var_6)))));
                        var_29 -= ((((!(arr_35 [i_8] [i_10 + 1] [i_10 + 1] [i_10]))) ? (((arr_35 [i_8] [i_10 + 1] [i_10] [i_10]) ? (arr_35 [i_8] [i_10 - 1] [i_10 - 1] [i_10]) : (arr_35 [i_7] [i_10 + 1] [i_10] [i_10]))) : (max(var_2, (arr_35 [i_7] [i_10 + 1] [i_7] [i_10])))));
                    }
                }
            }
        }
        arr_36 [5] = ((((((((var_5 ? var_19 : (arr_27 [5])))) ? var_0 : ((var_1 ? var_19 : var_14))))) ? (((~4640614219474559241) / (((91 ? (arr_26 [i_7]) : (arr_26 [6])))))) : (((-(arr_34 [i_7]))))));
        var_30 ^= ((((((((91 ? (arr_31 [i_7] [i_7] [1]) : var_15))) ? ((4640614219474559241 / (arr_26 [i_7]))) : (((-(-32767 - 1))))))) ? ((1 ? -2039 : (((min((arr_25 [i_7]), -32752)))))) : 32738));
    }
    /* LoopNest 3 */
    for (int i_11 = 3; i_11 < 12;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 13;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 11;i_13 += 1)
            {
                {
                    arr_47 [i_11 - 3] = (((((1 ? -91 : (max(var_17, (arr_6 [2] [11] [i_12])))))) ? ((((arr_39 [i_11 - 1] [i_11 - 1]) ? var_10 : (arr_17 [i_13 + 1] [i_13 + 1] [i_12] [i_12] [i_11])))) : (arr_39 [i_12] [i_12])));
                    var_31 = ((!((((arr_31 [i_11] [i_13 - 1] [i_13]) ? (arr_31 [i_12] [i_13 - 1] [i_13]) : (arr_31 [i_13] [i_13 - 1] [i_13 + 2]))))));
                    var_32 = (max(var_32, ((((arr_6 [0] [i_12] [i_11]) + -4)))));
                    var_33 = (min(var_33, ((((min((!var_18), (((arr_37 [11] [i_12]) ? var_15 : (arr_9 [4] [i_12] [i_12] [i_13]))))) <= (max(((1095187384 ? var_9 : 17310445386588725206)), (((45 <= (arr_10 [i_11 - 3] [i_11 - 3] [i_11] [i_11] [i_11])))))))))));
                }
            }
        }
    }
    #pragma endscop
}
