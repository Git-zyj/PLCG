/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151278
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((((var_3 ? var_9 : 0))) ? var_4 : ((var_10 ? var_5 : var_6)))) != ((((~var_2) * (12 != var_0))))));
    var_13 = (max(var_10, ((min(var_0, var_10)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_14 = ((+((((((arr_0 [i_1]) ? (arr_1 [i_0] [i_0]) : (arr_2 [i_1] [i_1] [20])))) ? ((22 ? var_7 : (arr_1 [i_1] [i_1]))) : (arr_0 [i_1])))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_15 = (~-4294967288);
                    var_16 = ((!(((254 ? (arr_2 [i_2] [i_2] [i_2]) : (arr_2 [i_2] [i_1] [i_0]))))));
                    var_17 = ((((((arr_5 [i_1] [i_1] [i_2] [i_0]) ? (arr_6 [i_1] [i_1] [i_1] [i_0]) : (arr_5 [i_2] [i_1] [i_1] [i_2])))) ? (arr_1 [i_1] [i_2]) : (arr_6 [i_0] [i_0] [i_1] [i_0])));

                    for (int i_3 = 4; i_3 < 22;i_3 += 1)
                    {
                        arr_10 [i_1] [i_1] [i_1] [i_3] [i_1] = (min(4294967295, var_9));
                        var_18 = (min((((((arr_9 [i_0] [i_0] [i_0]) ? (arr_9 [3] [16] [i_2]) : (arr_3 [i_0]))) / var_6)), 254));
                    }
                    for (int i_4 = 3; i_4 < 23;i_4 += 1)
                    {
                        arr_15 [i_1] = ((((((arr_8 [i_0] [i_1] [i_1] [i_0] [21] [i_4 - 3]) ? var_2 : (arr_8 [i_0] [i_0] [i_0] [23] [15] [i_4 - 3])))) ? (arr_8 [i_2] [17] [1] [i_1] [0] [i_4 - 2]) : (max((arr_8 [i_4] [i_1] [10] [i_1] [i_0] [i_4 + 1]), (arr_8 [1] [1] [i_2] [i_0] [i_2] [i_4 - 3])))));
                        arr_16 [i_0] [1] [i_2] [i_1] = ((~(((arr_0 [i_4]) ? (arr_7 [i_2] [i_2] [i_4] [i_1]) : (((arr_3 [i_0]) ? (arr_14 [i_4] [i_1] [i_1]) : var_10))))));
                        var_19 ^= ((((arr_2 [i_0] [i_0] [i_0]) ? (max((arr_14 [i_0] [i_0] [i_0]), 3)) : (((-254 ? (arr_12 [i_0]) : var_2))))));
                    }
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {

                        for (int i_6 = 2; i_6 < 22;i_6 += 1) /* same iter space */
                        {
                            var_20 = (((!(arr_19 [i_6 - 2] [i_6 - 1] [i_6 - 2] [i_6 - 1] [i_6 - 2] [3]))));
                            var_21 = ((-(min((arr_8 [i_6 + 2] [i_6] [i_6] [i_6 + 2] [1] [i_6 - 2]), ((((arr_3 [i_1]) ? (arr_3 [i_6]) : var_11)))))));
                        }
                        /* vectorizable */
                        for (int i_7 = 2; i_7 < 22;i_7 += 1) /* same iter space */
                        {
                            arr_27 [i_1] [i_1] [i_7 - 2] [i_0] [i_0] [i_0] [i_7] = arr_19 [i_7 - 2] [i_7] [i_7 - 1] [i_7] [i_7 - 2] [i_7];
                            var_22 ^= (((arr_13 [i_0] [i_1] [i_5] [i_7]) ? (((var_0 ? (arr_2 [i_5] [i_2] [i_0]) : 12))) : (((arr_21 [i_0] [i_0] [i_0] [i_0]) ? -3 : var_3))));
                            var_23 &= 33554431;
                            var_24 = (((arr_17 [i_2] [i_5] [12]) ? (((arr_8 [i_5] [i_1] [i_1] [i_5] [6] [i_0]) ? (arr_20 [i_5] [i_5] [i_2] [i_5] [9]) : (arr_22 [i_1]))) : (((-(arr_21 [i_0] [i_1] [i_2] [i_1]))))));
                        }
                        arr_28 [i_0] [i_1] [i_1] [i_5] [i_0] = 0;
                    }
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        var_25 ^= ((~(max((arr_20 [20] [i_0] [i_1] [i_0] [20]), ((max((arr_25 [4]), var_8)))))));

                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            arr_34 [i_1] [i_1] [i_2] [i_1] = (var_7 ? (arr_2 [i_0] [i_1] [i_2]) : (arr_30 [i_1] [i_1] [7]));
                            var_26 -= (min(((1 ? (arr_14 [i_0] [i_9] [i_2]) : (arr_21 [i_9] [i_2] [i_1] [i_9]))), (arr_29 [i_2] [i_8] [i_2] [i_1] [i_0])));
                            arr_35 [i_0] [i_1] [i_1] [9] [1] = (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
                        {
                            var_27 = ((((((arr_38 [1] [1] [1] [i_8] [i_8] [i_10]) ? (arr_17 [1] [7] [i_2]) : (arr_21 [i_0] [i_1] [i_2] [i_1])))) ? ((var_11 ? var_11 : (arr_0 [i_1]))) : (arr_18 [i_2])));
                            arr_40 [i_1] [i_1] = (((arr_38 [i_10] [1] [i_2] [i_1] [i_1] [i_0]) ? (arr_38 [i_2] [i_8] [i_2] [i_1] [i_1] [i_0]) : (arr_38 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                            var_28 |= var_1;
                            var_29 = ((((((arr_19 [i_0] [i_1] [i_0] [i_8] [i_8] [i_10]) ? (arr_38 [5] [i_1] [5] [i_1] [i_1] [i_1]) : var_9))) ? (arr_39 [i_0] [i_1] [i_2] [i_2] [i_1] [i_8] [16]) : 14261648984746802345));
                            var_30 *= (arr_25 [i_0]);
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
                        {
                            arr_44 [i_11] [i_11] [i_11] [i_11] [i_1] = var_1;
                            arr_45 [i_0] [i_0] [i_0] [i_0] [i_1] = (arr_4 [i_2]);
                            var_31 = ((!(arr_26 [i_2] [i_2] [3] [i_2] [i_2])));
                            arr_46 [i_1] = (arr_38 [i_0] [i_1] [i_2] [i_2] [i_8] [i_11]);
                        }
                        var_32 ^= ((-(max((arr_9 [i_0] [i_1] [i_1]), 4294967271))));
                        arr_47 [i_0] [i_1] [i_0] [i_0] [i_2] = (arr_25 [i_1]);
                    }
                    var_33 = ((((arr_38 [i_2] [i_2] [i_1] [i_1] [i_1] [i_0]) ? var_4 : (arr_38 [i_0] [i_1] [i_1] [14] [i_2] [i_2]))));
                }
                var_34 = (min(((~(((!(arr_11 [i_1] [i_1] [i_1] [i_1] [i_0] [i_0])))))), ((-(arr_7 [i_0] [i_0] [i_0] [i_1])))));
            }
        }
    }
    var_35 = (min(var_8, ((min(32236, ((4294967273 ? 254 : 32704)))))));
    #pragma endscop
}
