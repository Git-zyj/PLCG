/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126449
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_11 = ((((var_1 >= (arr_4 [i_0] [i_0])))));
                var_12 = min((((((-(arr_1 [0]))) == (arr_0 [i_0])))), ((~((var_9 ? (arr_1 [i_0]) : (arr_0 [i_0]))))));
                var_13 = (arr_0 [i_0]);
            }
        }
    }

    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {

        for (int i_3 = 1; i_3 < 20;i_3 += 1)
        {
            arr_10 [i_2] &= ((((max(((((arr_5 [i_2] [i_2]) & (arr_5 [i_2] [i_2])))), ((-(arr_6 [i_2])))))) ? (((((((arr_5 [i_3] [i_2]) ? (arr_7 [i_2]) : var_8))) ? var_2 : var_8))) : (min((((arr_6 [i_2]) - (arr_7 [i_3]))), (!var_4)))));
            var_14 -= ((((max((((arr_5 [i_2] [i_2]) ? var_6 : var_8)), ((((arr_9 [i_2]) ? (arr_5 [i_2] [i_3]) : var_5)))))) ? (arr_8 [i_2] [i_3 + 2]) : ((~((max(var_5, var_0)))))));
        }
        var_15 ^= ((((arr_5 [i_2] [i_2]) < var_3)) ? ((-((var_0 ? (arr_8 [i_2] [i_2]) : var_3)))) : (min((((var_8 == (arr_5 [i_2] [i_2])))), (max((arr_9 [i_2]), (arr_8 [i_2] [i_2]))))));
        arr_11 [i_2] = ((max(-8418890909231505638, (!127))));
        var_16 *= (arr_7 [i_2]);
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        var_17 |= (max((arr_4 [i_4] [i_4]), ((((arr_4 [i_4] [3]) > (arr_4 [i_4] [i_4]))))));
        arr_16 [i_4] = ((((max(((min((arr_14 [i_4] [i_4]), (arr_5 [i_4] [i_4])))), (arr_6 [i_4])))) != ((+(((arr_8 [i_4] [i_4]) ? (arr_12 [i_4]) : var_7))))));

        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
            {

                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    arr_25 [i_4] [i_4] [i_6] = (arr_23 [i_4] [i_5] [i_5] [i_5]);

                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        var_18 = ((((((arr_0 [i_7]) - (((arr_18 [i_8] [i_6]) % var_4))))) ? (((-(arr_18 [i_4] [i_4])))) : ((((((var_6 < (arr_1 [i_4])))) >= (arr_4 [i_5] [i_5]))))));
                        var_19 = (((((arr_14 [i_4] [i_5]) ? var_10 : (arr_27 [i_6] [i_5] [i_6])))));
                        var_20 += var_5;
                        var_21 = ((!((max((arr_21 [i_7] [i_5] [i_6]), (arr_9 [i_4]))))));
                        var_22 = (max(var_22, (((+(((-101 >= 39095) ? 4168890274 : 33817)))))));
                    }
                }
                /* vectorizable */
                for (int i_9 = 1; i_9 < 8;i_9 += 1)
                {
                    arr_31 [i_9] [i_5] [i_5] [i_4] &= 113;

                    for (int i_10 = 4; i_10 < 8;i_10 += 1)
                    {
                        var_23 *= var_1;
                        arr_34 [6] [i_5] [i_6] [6] [i_10] &= (((arr_7 [i_6]) ? var_5 : -var_9));
                        arr_35 [i_6] [i_10] = (((arr_22 [i_5] [i_6] [i_10 - 1]) ? (((arr_7 [i_4]) ? (arr_14 [i_9] [i_9]) : (arr_2 [i_5] [i_5] [5]))) : (!var_10)));
                        var_24 = ((!(((var_9 ? (arr_33 [i_4] [9]) : var_4)))));
                    }
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        arr_38 [i_6] [i_6] [i_6] [i_9 + 1] [i_11] = 57783;
                        arr_39 [i_5] [i_6] [i_5] [i_6] [i_4] = (~(arr_23 [i_9] [i_9 - 1] [i_9] [i_9 - 1]));
                    }
                    var_25 -= var_3;
                }
                /* vectorizable */
                for (int i_12 = 0; i_12 < 10;i_12 += 1)
                {

                    for (int i_13 = 1; i_13 < 9;i_13 += 1) /* same iter space */
                    {
                        var_26 = ((-((~(arr_4 [i_5] [i_5])))));
                        var_27 = (max(var_27, (((-(arr_23 [i_4] [i_4] [i_6] [i_5]))))));
                        arr_47 [i_4] [i_4] [i_6] [i_6] [i_13] [i_6] = ((-((((arr_15 [i_4] [8]) == (arr_23 [i_4] [i_4] [7] [i_4]))))));
                        var_28 = (arr_36 [i_6] [i_6] [i_13 - 1] [i_6] [i_6] [i_13 + 1] [i_13 - 1]);
                    }
                    for (int i_14 = 1; i_14 < 9;i_14 += 1) /* same iter space */
                    {
                        var_29 = (min(var_29, (arr_30 [i_14 + 1] [i_12] [i_12] [i_5])));
                        var_30 = (((arr_22 [i_4] [i_4] [0]) == (arr_22 [i_4] [i_5] [i_6])));
                    }
                    var_31 = (~(arr_12 [i_6]));
                    arr_50 [i_6] [i_5] [i_6] [i_6] = ((+((((arr_40 [i_4] [i_6]) == (arr_46 [1]))))));
                }

                /* vectorizable */
                for (int i_15 = 0; i_15 < 10;i_15 += 1)
                {
                    var_32 = (arr_46 [i_4]);
                    var_33 = ((((((arr_33 [i_4] [i_4]) ^ (arr_14 [i_5] [i_5])))) ? (arr_21 [i_4] [i_4] [i_4]) : ((((arr_5 [i_6] [i_6]) <= (arr_51 [i_4] [i_4] [i_15] [i_15] [i_15] [i_4]))))));
                }
            }
            for (int i_16 = 0; i_16 < 1;i_16 += 1) /* same iter space */
            {
                var_34 = (max(33817, 1));
                var_35 &= ((((!(((-(arr_17 [i_4] [i_4])))))) ? (((arr_55 [i_4] [i_4]) ? ((-13824 ? 126077022 : 2249133313512206202)) : (arr_44 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]))) : (179 >= 0)));
            }
            for (int i_17 = 0; i_17 < 1;i_17 += 1) /* same iter space */
            {
                arr_58 [i_4] [i_5] [i_17] = (((((!(((arr_17 [7] [i_5]) < var_10))))) - (var_10 || var_7)));
                var_36 += ((((min((arr_13 [i_5]), (((var_6 ? (arr_55 [i_4] [i_5]) : var_4)))))) ? (((arr_23 [i_4] [i_4] [i_4] [i_4]) ? (var_6 * var_9) : (-1864193244 >= -1))) : var_0));
                arr_59 [i_17] = ((-var_6 * (arr_52 [i_17] [i_5] [i_17] [i_5] [i_4] [i_4])));
            }
            arr_60 [i_4] [6] [i_5] = (arr_1 [i_5]);
            var_37 = (arr_29 [i_5] [i_4] [i_4] [i_4]);
            var_38 += (arr_5 [i_4] [i_4]);

            for (int i_18 = 1; i_18 < 8;i_18 += 1)
            {
                var_39 = ((((-((223 ? -44 : -55)))) - (min((min(1238775563, -1255211567)), (((((arr_57 [i_5] [i_5]) + 2147483647)) >> (((arr_43 [i_4] [i_5] [i_5] [i_4]) - 12577))))))));
                var_40 ^= (min((arr_49 [i_18] [i_18] [i_18 + 1] [i_18] [i_18] [i_5] [i_18]), (arr_15 [i_4] [i_5])));
                arr_63 [i_4] [i_5] [i_4] [i_5] = (((arr_56 [i_5]) + (max((arr_23 [i_18 + 2] [i_18 + 2] [i_18 + 1] [i_18 + 1]), var_0))));
            }
        }
    }
    #pragma endscop
}
