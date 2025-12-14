/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_10 = ((var_7 > ((((arr_3 [i_0]) > (~var_9))))));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_6 [i_1] [i_1] [i_1] = ((+(((~var_1) ? ((max((arr_2 [2]), 92))) : (var_5 >> var_0)))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        {
                            var_11 = (max(var_11, (arr_13 [i_0] [i_1] [i_2] [i_3] [5])));
                            arr_14 [i_1] [i_1] [i_1] [10] [0] [i_3] [i_4] = (((((arr_13 [6] [i_3] [i_2] [i_1] [i_0]) * var_5)) << ((((((19529 ? var_1 : (arr_9 [i_3 + 1] [i_1] [i_3 - 3] [i_3 - 3] [i_3 - 1] [i_3]))) + 3675491238125875145)) - 26))));
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_1] = (i_1 % 2 == zero) ? (((-((((min(var_7, 668))) ^ (((arr_2 [8]) << (arr_8 [i_1] [i_1] [i_2])))))))) : (((-((((min(var_7, 668))) ^ (((arr_2 [8]) << (((arr_8 [i_1] [i_1] [i_2]) - 104)))))))));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_5 = 2; i_5 < 9;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 10;i_6 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            arr_22 [i_5] [i_1] [i_1] [i_5] [6] [i_7] &= (((arr_0 [i_0] [i_0]) < (((arr_3 [i_7]) ? (arr_9 [i_0] [i_5] [4] [i_6] [i_7] [i_7]) : 32750))));
                            arr_23 [i_0] [i_0] [i_0] [i_0] [i_1] = var_0;
                        }
                        var_12 = (((arr_12 [i_0] [i_1] [i_5] [i_6] [i_0] [i_5]) ? (((((arr_12 [i_0] [i_0] [i_1] [i_1] [i_5] [i_6]) != (arr_12 [i_0] [i_1] [i_5] [i_5] [i_0] [i_6]))))) : -var_1));
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                {
                    var_13 -= (arr_13 [i_8] [i_8] [4] [i_8] [i_8]);
                    var_14 = (min(var_14, ((((max(1, (arr_16 [i_8] [i_8] [i_8])))) ? (arr_16 [i_8] [i_8] [i_8]) : ((((arr_16 [i_10] [i_10] [i_10]) < (arr_16 [i_8] [i_9] [i_10]))))))));
                    arr_32 [i_9] [i_10] = (min(2417570138144531766, ((((arr_13 [i_10] [i_10] [i_9] [i_9] [i_8]) ? ((min(var_2, var_2))) : ((668 ? var_6 : var_9)))))));
                    arr_33 [i_9] [i_9] = -19545;
                }
            }
        }
        var_15 = var_7;
    }
    var_16 = ((~((var_9 ? var_9 : var_5))));
    var_17 = var_5;
    /* LoopNest 3 */
    for (int i_11 = 0; i_11 < 24;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 24;i_12 += 1)
        {
            for (int i_13 = 4; i_13 < 21;i_13 += 1)
            {
                {

                    for (int i_14 = 0; i_14 < 24;i_14 += 1)
                    {
                        arr_45 [0] = -19546;
                        var_18 = (min(var_18, (((((((arr_44 [i_11] [i_12] [i_13] [i_14]) << (((arr_42 [i_12] [i_11]) + 708500414)))) != ((min(var_0, var_5))))) ? (min((var_9 != var_6), ((4 ^ (arr_44 [i_14] [14] [i_12] [17]))))) : 672))));
                        arr_46 [i_12] [i_13] [i_12] [i_12] [i_11] = (((((min(var_6, 2417570138144531753)))) ? ((~(arr_34 [i_13 + 1]))) : var_7));
                    }
                    for (int i_15 = 2; i_15 < 23;i_15 += 1)
                    {
                        var_19 = ((+(min((arr_43 [i_11] [i_12] [i_15 + 1]), (arr_37 [i_13 - 4])))));
                        var_20 = (arr_40 [i_11] [i_11] [i_11] [i_11]);
                        arr_49 [i_15] [i_13] [i_12] [i_15] = ((-(((arr_44 [i_15] [i_13 - 2] [i_12] [i_11]) + var_4))));
                        arr_50 [i_11] [i_12] [2] [i_15] [14] &= (((arr_37 [i_13 + 3]) ? (max(var_6, (arr_37 [i_11]))) : var_4));
                    }
                    for (int i_16 = 0; i_16 < 24;i_16 += 1)
                    {
                        var_21 = (min(var_21, ((((((var_5 ? (arr_35 [i_12]) : var_2))) ? (var_5 != var_4) : ((~(~var_6))))))));
                        var_22 = ((~((((arr_47 [i_11] [4] [i_16] [i_13 - 2] [4] [i_11]) >= -19530)))));
                        var_23 = ((+(max((~1), (var_9 || var_1)))));
                        var_24 = (min(var_24, ((166 ? ((-(arr_47 [i_12] [8] [i_13] [i_13 - 3] [i_13] [i_13 - 2]))) : (var_0 >= var_3)))));
                    }
                    var_25 = (max(((var_5 << (var_5 - 13990))), var_3));
                }
            }
        }
    }
    #pragma endscop
}
