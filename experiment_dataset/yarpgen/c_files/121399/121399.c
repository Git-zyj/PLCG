/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121399
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= ((max(3927265187943584115, var_0)));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_17 = (min(var_17, ((((arr_1 [1]) ? (var_11 + var_15) : var_11)))));
        arr_2 [i_0] [0] = (arr_0 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_18 = ((((var_7 ? var_8 : var_0)) + (arr_5 [i_1] [i_1])));

            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                arr_9 [i_1] = (arr_7 [i_1] [1] [1]);
                var_19 |= var_15;
                var_20 = (arr_7 [i_1] [i_1] [i_1]);
                var_21 = var_15;
                arr_10 [i_3] [i_1] [i_1] = var_4;
            }
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        {
                            var_22 = ((-((-7414 ? 2147483647 : 1139299757))));
                            var_23 |= (4080 ? (arr_16 [i_1] [4] [i_4] [4] [i_6]) : (arr_13 [i_5 - 3] [8] [0] [i_5] [i_6] [i_4]));
                        }
                    }
                }

                for (int i_7 = 3; i_7 < 13;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        arr_23 [i_8] [i_4] [12] = ((var_6 * (arr_17 [i_7] [i_2] [i_7] [i_7] [i_8] [i_7])));
                        var_24 = (arr_13 [i_8] [i_4] [i_4] [i_2] [i_4] [4]);
                        arr_24 [9] [i_4] [i_4] [i_4] [i_1] = var_7;
                        var_25 = ((100 * (arr_21 [11] [12] [4] [9] [i_8] [i_7 - 2] [i_2])));
                    }

                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        arr_27 [i_4] = 16709660033324018747;
                        var_26 = (var_9 ? 1 : (arr_21 [i_1] [i_2] [i_2] [i_2] [i_4] [i_2] [i_9]));
                        var_27 &= (((arr_22 [i_4] [i_7 - 1] [i_7 - 3] [i_9] [i_9]) == (arr_22 [i_4] [i_7 - 1] [i_7 - 3] [i_7] [i_9])));
                        arr_28 [i_4] [i_1] [i_2] [i_4] = (arr_3 [i_7] [i_9]);
                    }
                    for (int i_10 = 1; i_10 < 13;i_10 += 1)
                    {
                        arr_32 [i_1] [i_4] = ((((var_3 ? var_6 : (-2147483647 - 1))) > (arr_16 [i_4] [3] [i_4] [i_7 - 2] [i_10])));
                        var_28 = (min(var_28, (arr_18 [i_2])));
                    }
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        var_29 = (arr_6 [3] [i_4] [3]);
                        var_30 = (((((var_14 ? (arr_8 [i_1] [i_1] [i_1]) : 85))) ? ((var_4 ? var_3 : (arr_16 [i_4] [i_2] [i_4] [i_4] [4]))) : var_3));
                    }
                    var_31 = ((1 ? (var_8 != var_10) : (arr_29 [i_1] [i_7 - 2] [i_4])));
                    var_32 = var_10;
                }
            }
        }
        for (int i_12 = 0; i_12 < 14;i_12 += 1)
        {
            var_33 = (max(var_33, (arr_16 [i_1] [i_1] [i_12] [i_12] [i_1])));
            var_34 = (((((arr_36 [i_1] [i_12] [i_1]) < var_13)) ? ((-1 ? var_3 : 2147483647)) : (arr_29 [i_1] [i_12] [i_12])));
            var_35 = ((var_0 ? (((arr_6 [5] [10] [5]) ? 9785686858837352608 : (arr_0 [i_1]))) : ((((arr_3 [i_12] [i_1]) - (arr_33 [i_1] [i_1] [i_12] [i_12] [i_12]))))));
        }
        arr_37 [i_1] = ((~((3487107999 ? 1 : -1793639365101073334))));
        arr_38 [i_1] = ((((var_1 >> (var_4 - 2687784607937615143))) | (arr_12 [i_1] [i_1])));
        var_36 = (((arr_21 [i_1] [i_1] [i_1] [i_1] [3] [2] [i_1]) <= (((arr_8 [i_1] [i_1] [2]) ? (arr_17 [i_1] [6] [i_1] [1] [5] [i_1]) : var_7))));
    }
    var_37 = ((var_0 ? var_10 : -var_6));
    var_38 = (((((62 ? 2147483647 : 122248281))) ? var_2 : var_2));
    var_39 |= (max(var_10, (((((var_9 ? -126 : var_5))) ? ((var_12 ? 337999125 : var_12)) : ((max(var_2, var_1)))))));
    #pragma endscop
}
