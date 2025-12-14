/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167281
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    var_11 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_12 -= (((min((33554176 < var_0), 1)) ? (((var_4 * ((var_2 ? (arr_3 [i_1] [i_0] [13]) : var_9))))) : (((arr_1 [i_0] [i_1]) ? (arr_1 [i_1] [i_0]) : 0))));
                var_13 = ((~(min(1, (6371 | 1)))));

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    var_14 ^= -var_4;
                    var_15 = (max(var_15, ((min((arr_5 [i_1]), ((~((~(arr_3 [i_0] [i_0] [i_2]))))))))));
                    var_16 = (max(var_16, 1));

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        arr_8 [i_0] [i_1] = ((+((((((max((arr_5 [i_0]), (arr_5 [i_0]))))) != (arr_4 [i_3] [i_2] [3] [i_0]))))));
                        var_17 = (max(var_17, (((((var_2 << (var_1 - 17277630218673002562))) * (min(var_1, ((-(arr_1 [i_0] [i_0]))))))))));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 15;i_5 += 1)
                        {
                            {
                                var_18 = (max(var_18, (min((0 | -3797141962609539220), (!var_5)))));
                                arr_14 [i_0] [1] [i_1] [i_1] = ((~(arr_12 [1] [i_1] [i_5 - 1] [i_5 + 4] [i_5 - 1] [i_5])));
                                var_19 = (((4092 - 52948) || (var_0 != var_2)));
                            }
                        }
                    }
                }
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    arr_18 [i_0] [13] [i_0] = (((((var_8 + (max(var_2, var_2))))) ? (((arr_5 [8]) - 18047426233720782916)) : 41919));
                    var_20 ^= ((((min(-33554176, (arr_9 [10] [i_1] [i_6] [i_6])))) ? (arr_15 [i_0] [i_1] [i_6]) : var_6));

                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_21 = (min((arr_1 [i_1] [i_6]), (((var_1 ? (((9486 < (arr_21 [i_0] [i_1])))) : (arr_15 [i_1] [i_1] [i_6]))))));
                        arr_23 [i_6] [i_1] [i_6] [i_6] [i_6] |= (+-3797141962609539220);
                    }
                    var_22 = 33554176;
                    var_23 -= max((min(((var_1 ? (arr_16 [i_0] [i_1] [i_6]) : 1)), (arr_0 [i_0] [i_0]))), (var_1 & var_5));
                }
                for (int i_8 = 1; i_8 < 18;i_8 += 1)
                {
                    var_24 = (max(1, ((((-22 + 2147483647) << 0)))));
                    arr_26 [i_0] [15] [i_8] [i_0] = ((((((arr_15 [i_0] [i_8 + 1] [i_0]) / var_7))) || (arr_4 [i_8] [3] [i_8 - 1] [i_1])));
                    arr_27 [5] [i_8] [i_1] [i_8] = ((((min(var_4, var_9))) ? ((var_1 ? 1 : (arr_6 [i_8 - 1] [0] [i_8 + 1] [i_8 - 1]))) : (((((arr_6 [i_8 - 1] [i_8] [i_8 + 1] [i_8 + 1]) != var_7))))));
                    var_25 += var_2;
                    arr_28 [i_0] [i_1] [i_8] [i_8] = (((((2209576002773160540 | (arr_15 [1] [i_1] [i_1]))))));
                }
                arr_29 [5] [i_1] = ((~(arr_21 [i_0] [i_1])));
            }
        }
    }

    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {

        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            arr_34 [i_9] = (arr_31 [i_10]);
            var_26 -= ((+(((!9478) ? 0 : (arr_30 [i_9])))));
            arr_35 [i_9] [i_9] = (((-(min(var_3, (-32767 - 1))))) != 1020);
        }
        for (int i_11 = 0; i_11 < 20;i_11 += 1)
        {
            arr_39 [10] [10] |= 1;
            var_27 = (min(var_27, (((max(((var_4 & (arr_36 [i_9] [4]))), (arr_38 [i_9] [i_9] [i_11])))))));
            var_28 -= 1;
        }
        /* LoopNest 3 */
        for (int i_12 = 1; i_12 < 1;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 20;i_14 += 1)
                {
                    {
                        arr_51 [3] [i_13] [1] = var_1;
                        arr_52 [i_9] [i_14] = var_4;
                    }
                }
            }
        }
    }
    for (int i_15 = 0; i_15 < 16;i_15 += 1)
    {
        var_29 = (((((arr_45 [0]) && var_2)) ? (1 * var_6) : (((arr_10 [i_15]) * (arr_10 [i_15])))));
        arr_55 [4] = (arr_45 [i_15]);
    }
    #pragma endscop
}
