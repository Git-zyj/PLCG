/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 3763570851827208874;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_15 *= ((((!(((1356513873 ? var_4 : 1845525367))))) ? 104 : (arr_1 [i_0] [i_0])));
        var_16 = arr_2 [i_0];
        var_17 = 143;
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 17;i_2 += 1)
        {

            /* vectorizable */
            for (int i_3 = 2; i_3 < 20;i_3 += 1)
            {
                arr_13 [15] [i_3] [i_3] [i_1] = var_12;
                arr_14 [i_3] [i_3] [i_3 - 1] [4] = (arr_1 [i_2 - 1] [i_2 + 4]);
                arr_15 [i_3] [i_3] = ((((((arr_10 [14] [8] [19]) / 91))) ? (((arr_1 [17] [21]) ? (arr_7 [8] [8]) : var_13)) : (!var_2)));
                var_18 = ((151 <= (arr_12 [i_3 + 1] [i_2 + 3])));
            }
            arr_16 [i_1] [16] [i_2] = (min((((((108 ? (arr_9 [i_1]) : 56606)) == ((var_10 ? (arr_7 [i_1] [14]) : (arr_10 [i_1] [9] [i_1])))))), 104));
            var_19 = (max(9193, ((-(109 > var_5)))));
            var_20 = (min(var_20, ((min((((((-(arr_11 [i_1] [i_1] [i_2 + 2])))) ? var_11 : (!var_7))), (max((~351611242), (max(var_8, var_1)))))))));
            var_21 = (arr_6 [i_1] [i_2]);
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {

            for (int i_5 = 1; i_5 < 18;i_5 += 1)
            {
                var_22 -= (4294967295 == 2963455001);
                arr_24 [i_5] [i_5] &= (arr_18 [i_5 + 3] [i_5 + 3]);
                arr_25 [i_1] [i_1] [i_1] = ((((((-32767 - 1) ? var_2 : var_5))) ? (arr_3 [i_1]) : var_4));
                arr_26 [20] [i_5] = var_5;
                var_23 = ((var_3 ? ((var_0 / (arr_22 [i_4] [i_5]))) : 16218));
            }
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                var_24 = (((arr_3 [i_4]) > (arr_22 [i_4] [i_6])));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        {
                            arr_36 [i_1] [i_4] [i_4] [20] = ((((var_8 ? var_0 : var_13)) >= (var_10 < 16450687242053542272)));
                            arr_37 [i_1] [i_8] = ((10342175968618533965 << (var_1 - 10070587974839175644)));
                        }
                    }
                }
            }
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {

                for (int i_10 = 0; i_10 < 21;i_10 += 1)
                {
                    arr_43 [i_10] [i_4] [12] [i_9] [i_4] [12] = (((arr_28 [i_10] [i_4] [12] [i_10]) || ((((arr_41 [14] [19] [i_9] [14] [i_10]) ? var_3 : var_9)))));
                    arr_44 [i_10] [i_4] = -1996056831656009343;
                    arr_45 [10] [8] [i_1] [10] [10] |= ((((16450687242053542272 ? 16450687242053542253 : 7720467317180261456)) != 10870500645009821938));
                    var_25 = var_0;

                    for (int i_11 = 1; i_11 < 17;i_11 += 1)
                    {
                        var_26 = (1996056831656009356 ^ 4505);
                        var_27 = (min(var_27, ((((((var_6 ? var_10 : var_7))) ? (~var_2) : (((2036453765514530781 || (arr_6 [i_11] [17])))))))));
                        arr_50 [9] [i_11] [i_10] [i_10] [i_10] [i_4] [i_1] = (((arr_49 [i_10]) - -21129));
                    }
                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        var_28 = (max(var_28, 4505));
                        var_29 ^= (((211 || 32763) / var_11));
                        var_30 = var_4;
                    }
                }
                for (int i_13 = 0; i_13 < 21;i_13 += 1)
                {
                    var_31 = var_6;
                    arr_58 [i_1] [i_13] [i_9] = var_13;
                    var_32 = var_4;
                }

                for (int i_14 = 0; i_14 < 21;i_14 += 1)
                {
                    var_33 -= ((~(arr_20 [i_1] [i_4] [2] [18])));
                    var_34 += ((var_11 + (!var_9)));
                }
            }
            var_35 = ((var_2 ? ((((1050724438 >= (arr_33 [i_4] [i_4] [i_4]))))) : (arr_42 [i_1] [i_1] [i_1] [i_4] [i_4])));
            arr_61 [10] [i_4] [i_1] = (((arr_20 [i_1] [i_1] [i_1] [i_1]) ? var_0 : var_13));
            var_36 = (((arr_22 [i_1] [i_4]) - (arr_22 [i_4] [i_1])));
        }
        var_37 = (max(var_37, ((max((arr_32 [i_1] [i_1]), (96 >= -var_4))))));
    }
    var_38 = (((((~((min(var_2, 20088)))))) & var_1));
    #pragma endscop
}
