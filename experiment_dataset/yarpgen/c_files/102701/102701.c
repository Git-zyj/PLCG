/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_17 = (min(var_17, (((~(min(0, ((((arr_5 [1] [1] [1] [i_2]) ? (arr_5 [i_2] [i_2] [i_2] [i_2]) : (arr_3 [i_0] [i_1] [17])))))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_18 |= (max((((max(-1, var_4)) / 7235725273083701838)), ((((((-7235725273083701839 ? var_5 : -1))) && ((max(0, var_4))))))));
                                var_19 = (min(var_19, (arr_6 [i_3] [i_3] [1])));
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] &= (arr_9 [i_0] [i_0] [21] [i_0]);
                            }
                        }
                    }
                    arr_13 [i_0] [i_0] [i_2] |= (max((((((!(arr_4 [i_1]))) || (arr_0 [1])))), ((~(min(32767, (arr_2 [i_0] [i_0] [i_2])))))));
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 17;i_8 += 1)
                {
                    {

                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            var_20 = (max(var_20, (arr_3 [i_7] [21] [21])));
                            var_21 = (min(var_21, 170364428974160705));
                            var_22 &= 12080;
                            var_23 = (min(var_23, ((max(4294967277, (arr_20 [i_7 - 1] [i_8]))))));
                            var_24 += (arr_4 [i_5]);
                        }
                        for (int i_10 = 2; i_10 < 15;i_10 += 1)
                        {
                            var_25 *= (arr_27 [i_5] [i_5] [i_5] [8] [i_5]);
                            var_26 |= ((((min((((-(arr_26 [i_5] [i_6] [i_7 - 1] [18] [i_10])))), ((4192964468 ? -18 : 7))))) ? (arr_9 [i_10 - 1] [i_8 + 2] [i_8] [i_5]) : (((arr_21 [i_7] [i_7 - 1] [i_7] [18]) ? (arr_21 [16] [i_7] [17] [i_7]) : (arr_19 [i_7] [i_7] [i_7])))));
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 19;i_11 += 1)
                        {
                            arr_30 [10] [i_6] [2] [i_6] [i_7] [10] [i_6] |= ((-((var_3 ? (arr_15 [i_11]) : 8657))));
                            var_27 -= var_13;
                            var_28 ^= ((((arr_22 [i_5] [i_7] [i_11]) >= 56878)));
                        }
                        for (int i_12 = 0; i_12 < 19;i_12 += 1)
                        {
                            var_29 &= 73;
                            var_30 = (min(var_30, ((((arr_31 [i_5] [i_5] [i_7] [i_5] [i_7]) ? (arr_21 [15] [15] [11] [15]) : (((min((arr_6 [i_5] [i_12] [i_6]), 247)) - (arr_24 [1] [i_12] [i_7 - 1] [i_7] [i_7 + 2]))))))));
                            arr_35 [i_12] [6] [i_7] [i_6] [i_6] [4] [2] &= max(var_12, (((max(0, var_9)) >> (((arr_1 [i_5]) - 1926010659)))));
                            arr_36 [16] [i_6] [14] [i_5] [i_12] |= 9;
                        }
                        var_31 &= (arr_15 [i_6]);
                    }
                }
            }
        }
        var_32 = (min(var_32, (arr_0 [i_5])));
    }
    for (int i_13 = 3; i_13 < 17;i_13 += 1) /* same iter space */
    {
        var_33 &= ((arr_33 [6] [6] [i_13] [i_13] [7]) & (1 * 60632));
        arr_40 [i_13] [i_13] &= (min(((65535 ? -127 : -1), var_10)));
    }
    for (int i_14 = 3; i_14 < 17;i_14 += 1) /* same iter space */
    {
        var_34 -= (arr_4 [i_14 - 1]);
        var_35 = (max(var_35, ((max((min((arr_15 [i_14 - 1]), (arr_4 [i_14 + 1]))), 13)))));
    }
    for (int i_15 = 3; i_15 < 17;i_15 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_16 = 0; i_16 < 19;i_16 += 1)
        {
            for (int i_17 = 1; i_17 < 1;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 19;i_18 += 1)
                {
                    {
                        var_36 = (max(var_36, ((((arr_43 [i_15 + 1]) ? 5398887923491133889 : ((((arr_37 [i_17 - 1] [i_15 + 2]) ? (arr_51 [i_17 - 1] [i_15 - 1]) : var_14))))))));
                        var_37 += ((53030 ? 2146959360 : 170));
                        var_38 ^= (((max(((max((arr_21 [i_18] [i_17 - 1] [5] [5]), var_1))), (arr_46 [14] [i_17 - 1] [i_15 - 2]))) << (((((((var_0 + (arr_31 [8] [i_16] [8] [i_16] [i_16])))) ? (max(9412, 2251765453946880)) : var_10)) - 2251765453946841))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_19 = 0; i_19 < 19;i_19 += 1)
        {
            for (int i_20 = 3; i_20 < 16;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 19;i_21 += 1)
                {
                    {
                        var_39 |= (((((((arr_26 [i_15] [i_19] [i_19] [i_21] [1]) != var_2)))) && (((-951225320856070146 >= 9223372036854775807) != (arr_17 [18])))));
                        var_40 = (min(var_40, ((((((arr_33 [i_15 - 3] [18] [i_19] [i_20] [i_21]) ? (arr_31 [i_15 - 1] [18] [3] [16] [18]) : (min(17, 1023)))) / (arr_11 [i_15] [21] [24] [i_15 + 2] [i_15 + 2] [24] [17]))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
