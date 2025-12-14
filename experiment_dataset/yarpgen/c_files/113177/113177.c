/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 17;i_2 += 1) /* same iter space */
                {
                    var_12 = var_7;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_13 = var_8;
                                arr_18 [i_3] [i_3] [i_2] [10] [i_2] = ((((((2249187664 ? 21917 : 917504))) ? (((var_10 && (arr_5 [i_0] [i_1])))) : (((!(arr_9 [i_0] [i_1 + 1] [i_2 - 2] [i_3])))))));
                                var_14 -= (((max(var_11, (arr_7 [i_0] [i_1 + 1]))) <= (max(var_6, (arr_7 [i_0] [i_1 + 1])))));
                            }
                        }
                    }
                }
                for (int i_5 = 2; i_5 < 17;i_5 += 1) /* same iter space */
                {
                    arr_21 [i_1] [i_1] = (((((arr_1 [i_0] [i_0]) ? (arr_5 [i_0] [i_0]) : (arr_4 [0] [i_1] [9])))));
                    /* LoopNest 2 */
                    for (int i_6 = 4; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            {
                                var_15 += var_3;
                                var_16 = ((((((7788808727282848546 ? (arr_26 [i_6] [i_1] [i_1]) : (arr_22 [i_7] [i_7] [i_6] [i_5] [2] [i_0])))) / (arr_25 [10] [i_6] [i_6 - 1] [2]))));
                                var_17 -= (((32767 < 1670) ? -21483 : (((-917516 ? 8614 : -51)))));
                            }
                        }
                    }
                }
                var_18 = (((arr_6 [i_1]) ? (((3262 ? var_6 : (arr_16 [i_1 + 1] [1] [i_0] [i_0] [i_0] [i_0])))) : (((-577895318354787823 ? var_7 : var_0)))));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 18;i_9 += 1)
                    {
                        {
                            var_19 += ((((max(238, (arr_17 [i_0] [6] [i_0] [i_0] [i_0] [0] [i_8]))) ? (var_9 || 9223372036854775807) : (arr_1 [i_1 + 1] [i_9 + 2]))));
                            var_20 ^= (arr_13 [i_0] [i_1] [i_9]);
                        }
                    }
                }
                var_21 = (max(((80 ? -31183 : 255)), (((-12 && (((56 ? (arr_13 [i_0] [i_0] [4]) : (arr_16 [i_0] [i_0] [i_0] [17] [i_1] [i_0])))))))));
            }
        }
    }

    for (int i_10 = 0; i_10 < 25;i_10 += 1)
    {
        var_22 = 229;
        arr_34 [i_10] [i_10] = arr_33 [3];
        /* LoopNest 3 */
        for (int i_11 = 1; i_11 < 22;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 25;i_12 += 1)
            {
                for (int i_13 = 1; i_13 < 24;i_13 += 1)
                {
                    {
                        arr_43 [18] [i_10] [i_12] [18] = var_8;

                        for (int i_14 = 0; i_14 < 25;i_14 += 1)
                        {
                            var_23 = 32584;
                            var_24 = (max(var_24, -8963179481229156378));
                            arr_46 [i_10] [i_10] [7] [i_13 - 1] [i_14] = var_8;
                            arr_47 [i_10] = (-(((((arr_35 [i_12]) ? 51 : (arr_45 [i_13]))) - ((((arr_37 [i_10]) + (arr_32 [i_12] [i_11])))))));
                        }

                        for (int i_15 = 0; i_15 < 25;i_15 += 1)
                        {
                            var_25 = (((arr_38 [i_15] [0] [i_11] [16]) != (min(((((arr_39 [i_10] [16] [i_10] [i_10]) ? (arr_44 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]) : (arr_49 [i_15] [i_12])))), (min(var_8, (arr_36 [i_12] [14])))))));
                            var_26 = min((~27), ((((arr_48 [i_13] [i_13 + 1] [i_13 + 1] [i_13]) <= 558446353793941504))));
                            var_27 = (max(var_27, (((1 | (~var_8))))));
                            var_28 -= (((-((var_0 ? (arr_48 [1] [i_12] [i_13 + 1] [i_15]) : 1461393765)))));
                            arr_50 [i_10] [i_11] [i_12] [i_12] [i_10] = ((((59 < ((10 ? -1 : 630640356)))) && 15));
                        }
                        for (int i_16 = 4; i_16 < 24;i_16 += 1)
                        {
                            var_29 = ((-((-(arr_39 [i_10] [i_11 + 2] [i_12] [i_10])))));
                            arr_55 [i_10] [i_10] [i_12] = (arr_54 [i_10] [i_11] [15] [i_13 - 1] [17] [i_13 + 1]);
                        }
                    }
                }
            }
        }
        arr_56 [i_10] = (arr_37 [i_10]);
        var_30 = (arr_49 [i_10] [i_10]);
    }
    #pragma endscop
}
