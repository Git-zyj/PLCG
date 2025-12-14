/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_11 = var_4;
            var_12 *= (arr_0 [1]);

            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                var_13 = -159;
                var_14 ^= (((-(((146 <= (arr_1 [i_2])))))) >> ((((((max((arr_6 [i_2] [20] [i_0 + 4] [i_0]), (arr_2 [i_1] [i_2])))) ? 18446744073709551615 : (arr_4 [i_0] [i_1]))) - 253)));
            }
            for (int i_3 = 3; i_3 < 21;i_3 += 1)
            {
                arr_10 [i_0] = ((((arr_7 [i_3 + 1] [i_1] [i_0]) ? 203 : 13)));
                arr_11 [i_0] [i_0] [i_1] [i_0] = ((!(190 | var_0)));
                var_15 = (!(arr_8 [i_0] [i_0]));
                var_16 = (arr_0 [i_0 + 1]);
                arr_12 [i_0] [i_1] [i_1] [i_0] = (!var_9);
            }
            for (int i_4 = 2; i_4 < 22;i_4 += 1)
            {
                arr_15 [i_0] [i_0] = (arr_6 [i_0] [i_0] [i_1] [i_0]);
                var_17 *= (max(-65, ((((((var_1 ? (arr_4 [i_0] [i_4]) : var_0))) <= 6167343042985073417)))));
                var_18 = 211;
                var_19 *= -1;
            }
            arr_16 [i_0] [i_1] = ((((((arr_7 [i_0 + 1] [i_0 + 4] [i_0 + 2]) >= (arr_1 [i_0])))) >> ((min(1, var_2)))));
        }
        for (int i_5 = 1; i_5 < 23;i_5 += 1)
        {
            arr_20 [i_0] [i_0] [i_5] = ((var_6 % ((((-(arr_6 [i_0] [i_5] [i_0] [i_5])))))));
            /* LoopNest 2 */
            for (int i_6 = 4; i_6 < 23;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    {
                        arr_26 [i_0] = (max((arr_0 [i_0 - 1]), (arr_17 [i_0])));
                        arr_27 [18] [i_0] = (((var_2 >= (((!(arr_3 [i_0])))))));
                        var_20 = (min(var_20, (arr_8 [i_5 - 1] [i_6])));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        {
                            var_21 = (arr_6 [i_0] [0] [1] [i_10]);
                            var_22 *= ((!(((-var_5 ? (arr_2 [i_9] [i_8]) : var_4)))));
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            for (int i_12 = 4; i_12 < 21;i_12 += 1)
            {
                {
                    arr_41 [i_0] [21] [i_12] [i_0] = ((!((min(((var_1 ? 1451837975 : 0)), (arr_18 [i_0] [i_12]))))));
                    var_23 = 11189585059316979618;
                }
            }
        }
        arr_42 [20] [i_0] = 32;

        for (int i_13 = 3; i_13 < 22;i_13 += 1)
        {
            arr_46 [i_0] = (arr_0 [i_0]);
            arr_47 [i_0] = arr_29 [i_0] [i_13 - 2] [i_13 + 2] [i_13 + 2];
            var_24 = (arr_8 [i_0] [i_13 + 2]);
            arr_48 [i_0] [16] [i_0] = (arr_1 [i_0]);
            var_25 = (max(var_25, 709));
        }
        for (int i_14 = 1; i_14 < 22;i_14 += 1)
        {
            arr_51 [i_0] = var_10;
            arr_52 [i_0 + 1] [i_0] [i_0] = max(var_5, var_10);
        }
        var_26 = var_6;
    }
    for (int i_15 = 1; i_15 < 20;i_15 += 1) /* same iter space */
    {
        var_27 ^= ((((((((!(arr_7 [i_15] [i_15] [7])))) >= (((arr_5 [i_15]) ? (arr_23 [i_15] [i_15 + 4] [i_15] [12]) : var_0))))) % (arr_17 [4])));
        var_28 = (max(var_28, (((((-29179 + 2147483647) >> (138 - 133)))))));
    }
    for (int i_16 = 1; i_16 < 20;i_16 += 1) /* same iter space */
    {
        var_29 = min((((!(arr_35 [i_16] [i_16 + 3] [i_16 - 1] [i_16 + 4] [i_16 + 3])))), 128);
        /* LoopNest 3 */
        for (int i_17 = 0; i_17 < 24;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 24;i_18 += 1)
            {
                for (int i_19 = 1; i_19 < 23;i_19 += 1)
                {
                    {
                        arr_67 [i_16] [i_17] [i_19] = (arr_17 [i_16]);

                        for (int i_20 = 4; i_20 < 22;i_20 += 1)
                        {
                            var_30 = (arr_53 [i_16] [i_17]);
                            var_31 = (arr_25 [i_17]);
                            var_32 ^= (211 | 18446744073709551615);
                        }
                        for (int i_21 = 1; i_21 < 22;i_21 += 1)
                        {
                            arr_74 [11] [i_17] [11] [i_16] [i_21] = var_3;
                            var_33 ^= ((!(arr_35 [i_21] [i_19] [i_16] [i_16] [i_16])));
                            arr_75 [i_16] [3] = (-(max((arr_66 [i_19 + 1] [i_16 - 1] [i_21 + 1]), (arr_66 [i_19 - 1] [i_16 + 2] [i_21 + 2]))));
                        }
                        var_34 ^= max(1327233745, -1814263338);
                        var_35 ^= ((var_4 > (max((18446744073709551615 >> var_2), 32767))));
                        var_36 = (min(var_36, (!var_1)));
                    }
                }
            }
        }
    }
    var_37 = var_6;
    var_38 ^= (var_0 < var_5);
    var_39 = 699195620;
    #pragma endscop
}
