/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_12 ^= (((arr_0 [i_0] [10]) <= (arr_0 [i_0] [i_0])));

        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            var_13 = ((-1939040286053628989 ? var_1 : -var_9));
            arr_5 [i_0] [i_1] = -var_9;
        }
        var_14 = (max(var_14, (((var_5 ? (arr_1 [i_0]) : var_10)))));

        for (int i_2 = 1; i_2 < 12;i_2 += 1)
        {

            for (int i_3 = 1; i_3 < 11;i_3 += 1) /* same iter space */
            {
                arr_11 [i_0] [i_0] [i_2] [i_2] = ((115 << (234 - 229)));
                var_15 = var_9;
                var_16 = (((var_9 || var_3) ? (arr_0 [i_2] [1]) : (arr_3 [i_0] [i_2 - 1] [i_3 + 1])));
            }
            for (int i_4 = 1; i_4 < 11;i_4 += 1) /* same iter space */
            {
                arr_14 [6] [i_2] [i_4 - 1] = (((arr_12 [i_0] [i_2] [i_4 + 2]) - -86));
                var_17 += ((var_11 ? var_4 : 111));
            }
            /* LoopNest 2 */
            for (int i_5 = 4; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    {
                        var_18 -= 104;
                        arr_21 [i_2] [12] [i_2] [i_2] = ((var_11 == ((-(arr_8 [3] [3] [4] [1])))));
                        var_19 &= 31;
                        var_20 = (max(var_20, ((((((arr_3 [0] [4] [i_2 + 1]) != var_5)) ? (-31133 >= 33554431) : (((arr_19 [i_0] [1] [i_6]) ^ 54563)))))));
                    }
                }
            }
        }
        arr_22 [i_0] = var_8;
    }
    for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
    {
        arr_27 [i_7] [i_7] = 225;
        var_21 = (min(var_21, 2147483647));
        var_22 = ((((max(19, 42))) ? var_5 : (((var_10 ? var_3 : (-2147483647 - 1))))));
    }
    for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
    {
        arr_30 [i_8] = (((max((arr_7 [i_8] [i_8]), (arr_25 [i_8])))));
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                for (int i_11 = 3; i_11 < 9;i_11 += 1)
                {
                    {
                        var_23 = (min(var_23, (arr_7 [10] [1])));
                        var_24 += (min(var_5, (arr_23 [i_8] [12])));
                        var_25 = (max(var_25, ((((((~(arr_4 [i_9] [i_10] [i_10])))) || (((~(arr_18 [i_11] [i_10] [i_9] [i_8])))))))));
                        arr_38 [i_8] [i_8] [i_8] [i_8] [1] &= ((255 * ((((min(1, 0))) % -100))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 13;i_12 += 1) /* same iter space */
    {
        var_26 = ((0 ? -51076 : -39));
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 13;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 13;i_14 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 13;i_15 += 1)
                    {
                        for (int i_16 = 4; i_16 < 10;i_16 += 1)
                        {
                            {
                                var_27 ^= ((~(!-424896037445798523)));
                                arr_51 [i_12] [5] [i_14] = (-22 >= var_3);
                                arr_52 [4] [i_16 + 3] [i_14] [i_16 + 2] [i_15] [i_15] [4] &= (var_1 / (arr_50 [i_16 - 1] [i_16 - 1] [i_16 + 1] [i_16 - 2] [i_16]));
                            }
                        }
                    }
                    var_28 &= (((arr_29 [i_13] [i_13]) > ((8040158426511266874 ? 60414 : 173))));
                    var_29 &= (((~(arr_16 [i_12] [i_13] [i_13]))));
                    var_30 = ((-6947244356962093217 ? (((-(arr_37 [i_12])))) : var_9));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_17 = 1; i_17 < 16;i_17 += 1)
    {
        for (int i_18 = 0; i_18 < 19;i_18 += 1)
        {
            {
                arr_58 [1] [1] [i_17 + 3] = ((((~((~(arr_53 [1]))))) ^ ((max((min(-9, var_10)), var_3)))));
                arr_59 [i_17 + 3] [i_17 + 1] [i_17 + 3] = (max(5, (-118 || 1)));
            }
        }
    }
    var_31 = (min(((var_10 ? 0 : var_2)), var_2));
    #pragma endscop
}
