/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108362
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_6 [i_0] [5] [i_0] [i_1] = ((-var_10 == (((~((max(1, 3))))))));
                    var_19 = 7;

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_20 = var_12;

                        for (int i_4 = 3; i_4 < 20;i_4 += 1) /* same iter space */
                        {
                            arr_13 [i_0] [i_1] = 65535;
                            var_21 ^= (((arr_0 [i_4 + 1]) / (max((arr_0 [i_4 - 2]), (arr_0 [i_4 - 1])))));
                        }
                        for (int i_5 = 3; i_5 < 20;i_5 += 1) /* same iter space */
                        {
                            arr_16 [i_0] [i_1] [0] [i_3] = (((arr_14 [i_0] [i_0] [i_3] [i_0] [16] [i_3] [i_0]) + ((max((arr_1 [i_5]), var_5)))));
                            var_22 = (max(var_22, ((max((~4810), (max(var_14, 7890209784342161747)))))));
                            var_23 = (((arr_10 [i_0] [i_0] [4] [i_0] [i_0]) + ((-(arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                        }
                        for (int i_6 = 3; i_6 < 20;i_6 += 1) /* same iter space */
                        {
                            var_24 = (min(var_24, ((min((arr_8 [i_2] [i_6 + 1] [i_6] [i_6 + 2] [i_6 - 2]), (arr_8 [i_2] [i_6 - 3] [i_6] [i_6 + 2] [i_6 - 2]))))));
                            var_25 = (max(var_25, ((max((((((max(var_5, var_16))) | (var_5 ^ var_18)))), (~2))))));
                        }
                        for (int i_7 = 3; i_7 < 20;i_7 += 1) /* same iter space */
                        {
                            var_26 = (((min(13252127122025030008, 3499846706)) * (max((((arr_18 [i_0]) / var_0)), -60))));
                            arr_21 [i_0] [6] [i_2] [i_2] [1] [i_3] [i_0] = var_6;
                        }
                    }
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        var_27 = (max(var_27, var_11));
                        var_28 = (((min(50, -21665))));
                    }
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        arr_27 [i_0] [i_9] [i_2] [10] [i_0] = min(((((arr_22 [i_1] [i_1] [i_1] [i_1] [i_1]) / (arr_22 [i_9] [i_2] [i_1] [i_0] [i_0])))), ((~((~(arr_19 [i_0] [i_0] [i_0] [i_0] [0] [i_0] [i_0]))))));
                        arr_28 [i_1] [i_0] [i_1] [i_1] = var_18;
                    }
                    arr_29 [i_0] [i_0] = (max((((min((arr_9 [i_0] [i_0] [i_0] [i_2]), (arr_14 [i_2] [i_2] [i_2] [i_1] [i_1] [2] [i_0]))) >> (((arr_17 [i_2] [i_2] [i_2] [8] [i_1] [8] [i_0]) - 7090227944169555826)))), (arr_4 [i_0] [i_1] [2] [i_0])));
                    var_29 = ((~(((arr_14 [i_0] [i_1] [i_2] [i_1] [i_0] [i_2] [i_1]) ? (min((arr_1 [i_2]), (arr_25 [4] [5] [i_0]))) : ((~(arr_18 [i_2])))))));
                }
            }
        }
        arr_30 [i_0] = (((arr_18 [i_0]) << (((min(var_14, (min(99, (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [9]))))) - 61))));
        var_30 = (max(var_30, var_3));
    }
    for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
    {
        arr_33 [i_10] [17] = (((((228 >> (((~7) + 33))))) ? 1 : ((((min(2758, -26906))) >> (((arr_20 [i_10] [i_10]) + 1408536778))))));
        var_31 += (((((arr_5 [i_10] [i_10] [i_10] [21]) ^ (((arr_1 [i_10]) & (-9223372036854775807 - 1))))) & (arr_23 [i_10] [i_10] [i_10] [i_10])));
        var_32 ^= (min((max(((1 ? (arr_17 [i_10] [i_10] [i_10] [i_10] [21] [i_10] [i_10]) : -60)), (arr_8 [i_10] [10] [10] [i_10] [3]))), (((-1449452119 ^ (arr_23 [i_10] [i_10] [i_10] [i_10]))))));
    }
    for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
    {
        var_33 += ((!((max(1, (arr_32 [i_11] [1]))))));
        var_34 += ((!(((((806194250 ? 8 : -99)) + (arr_31 [i_11]))))));
    }
    for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
    {
        var_35 = ((-118 || ((min((arr_35 [i_12] [i_12]), var_15)))));
        /* LoopNest 2 */
        for (int i_13 = 2; i_13 < 21;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 22;i_14 += 1)
            {
                {
                    arr_44 [i_12] [i_12] [i_12] [i_12] = var_16;
                    var_36 = (arr_4 [i_12] [i_12] [i_12] [i_12]);
                }
            }
        }
        var_37 = (arr_32 [i_12] [13]);
    }
    /* LoopNest 2 */
    for (int i_15 = 2; i_15 < 8;i_15 += 1)
    {
        for (int i_16 = 2; i_16 < 8;i_16 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_17 = 1; i_17 < 7;i_17 += 1)
                {
                    for (int i_18 = 1; i_18 < 8;i_18 += 1)
                    {
                        {
                            arr_55 [i_18] [6] = (max((((-1449452099 | 440953020024561157) * ((max(33, (arr_26 [i_18] [i_18] [i_17 - 1] [i_15] [i_18] [i_15])))))), (min((arr_47 [i_15] [i_16]), ((min((arr_38 [i_15] [i_17]), var_1)))))));
                            arr_56 [7] [i_18] [7] [i_18] = (max(var_18, ((min((arr_3 [i_17 - 1] [i_18 + 2]), 44290)))));
                        }
                    }
                }
                arr_57 [1] [i_16] = (((min((arr_51 [i_15] [i_16] [i_16 - 1] [i_16]), (0 == var_10))) != ((max((arr_2 [i_15]), (arr_12 [i_15] [i_15 + 2] [i_15 - 1] [i_15] [i_15 - 1]))))));
            }
        }
    }
    var_38 = (max(6993847512772984278, 727148130));
    /* LoopNest 2 */
    for (int i_19 = 2; i_19 < 23;i_19 += 1)
    {
        for (int i_20 = 0; i_20 < 25;i_20 += 1)
        {
            {
                arr_62 [i_20] [i_19 - 1] = var_1;
                arr_63 [i_19] [i_19 - 1] = ((((((!(arr_60 [i_20] [16])) && (((16776192 ? -379392460 : var_3))))))));
            }
        }
    }
    #pragma endscop
}
