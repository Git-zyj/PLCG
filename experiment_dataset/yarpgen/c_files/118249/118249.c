/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_13 &= arr_2 [i_0];

        for (int i_1 = 2; i_1 < 10;i_1 += 1) /* same iter space */
        {
            arr_7 [i_0] = ((-(((min(var_2, (arr_0 [i_1]))) & (-127 - 1)))));

            for (int i_2 = 4; i_2 < 7;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 3; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        {
                            var_14 = ((((max((arr_11 [i_0] [i_1 - 1] [i_2 - 3] [i_3] [i_3 - 3] [i_2 - 3]), (arr_11 [i_0] [i_0] [i_2 + 3] [i_0] [i_3 - 3] [i_3])))) ? ((max(var_0, (arr_11 [i_0] [i_0] [i_2] [i_3 - 1] [i_3 - 2] [i_0])))) : (arr_11 [i_0] [i_1] [i_1] [i_1] [i_3 - 3] [i_3 - 3])));
                            arr_15 [i_3] [i_1] [i_2 - 2] [i_0] [i_1 - 1] [i_2 - 2] = (((var_9 % var_11) <= (((arr_2 [i_0 - 2]) / 72057576858058752))));
                            arr_16 [i_0] [i_1 - 1] [i_0] [i_0] [i_4 - 1] = ((((((min(7219, (arr_12 [i_0] [i_0])))) == var_3)) ? 33343 : (arr_11 [i_0] [i_0] [i_4] [i_4 - 1] [i_4] [i_4 - 1])));
                            var_15 = (min((max(var_7, ((3 ? (arr_12 [i_3 - 2] [i_0]) : var_1)))), var_8));
                            var_16 = (((~var_9) ? (max((98 ^ 8), var_7)) : (((((arr_3 [i_0] [i_0] [i_3]) || var_4)) ? var_7 : (arr_14 [i_0 + 1] [i_0 + 1] [i_2] [i_4 - 1] [i_0])))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 9;i_6 += 1)
                    {
                        {
                            var_17 = ((!((((max(var_4, 1)) - 65533)))));
                            var_18 *= ((!(((((max(var_11, var_3))) ? (arr_14 [i_6] [i_6 - 1] [i_6 + 1] [i_6 + 1] [i_1]) : (arr_3 [i_0] [i_1] [i_6 + 2]))))));
                        }
                    }
                }
                var_19 -= (max(((+((var_12 << (((arr_3 [i_2] [i_1] [i_0 - 2]) - 10882413669263413966)))))), var_7));
            }
            arr_24 [i_0] [i_0] [i_1] |= var_9;
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 10;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {
                        var_20 ^= (min(((var_10 | (arr_21 [i_1 - 2] [i_1 - 1] [i_1 - 1]))), var_1));
                        var_21 = (min(var_21, 3));
                        var_22 = var_9;
                    }
                }
            }
            arr_29 [i_0] = ((max(((1 % (arr_10 [i_0 - 2])), (arr_12 [i_0] [i_0])))));
        }
        /* vectorizable */
        for (int i_9 = 2; i_9 < 10;i_9 += 1) /* same iter space */
        {
            var_23 = 48829;
            var_24 ^= (((arr_21 [i_9] [i_0 - 2] [i_9 - 1]) ? (arr_21 [i_0] [i_0 - 1] [i_9 - 1]) : 12260));
            arr_32 [i_0] = (arr_20 [i_0] [i_0 - 1] [i_0 - 1] [i_0 + 1]);
            arr_33 [i_0] [i_0] = (((arr_5 [i_0]) ? 39 : -22499));
        }
    }
    for (int i_10 = 1; i_10 < 16;i_10 += 1)
    {
        /* LoopNest 2 */
        for (int i_11 = 2; i_11 < 14;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 16;i_12 += 1)
            {
                {
                    var_25 -= ((var_6 ? ((var_7 ? 15 : (var_3 - var_2))) : (max(((-(arr_36 [i_12]))), ((max(var_10, var_8)))))));
                    arr_44 [i_10 - 1] [i_10 + 1] [i_10 + 1] [i_10 + 1] = ((~(max(18, 15125061784335389015))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_13 = 2; i_13 < 16;i_13 += 1)
        {
            for (int i_14 = 1; i_14 < 16;i_14 += 1)
            {
                {
                    var_26 = (min(((var_11 ? var_6 : 7065)), (2047 - 61444)));
                    var_27 = (min(var_27, (!var_6)));
                    /* LoopNest 2 */
                    for (int i_15 = 1; i_15 < 14;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 17;i_16 += 1)
                        {
                            {
                                arr_55 [i_10 + 1] [i_10 + 1] [i_14] [i_15 - 1] [i_14] [i_10] = ((((((1 ? (arr_42 [i_10] [i_10] [i_10]) : var_9)) % (var_3 + var_1))) == ((var_5 ? ((max(var_0, var_1))) : ((var_5 << (var_6 - 28730)))))));
                                var_28 ^= ((((max((arr_52 [i_10] [i_10] [i_14] [i_10] [i_16]), (arr_52 [i_14 + 1] [i_13 - 2] [i_14 + 1] [i_15] [i_16])))) < -4));
                            }
                        }
                    }
                    var_29 = (min(var_29, ((min(((1 ? (((min(64459, (arr_45 [i_10]))))) : (((arr_38 [i_13 - 1]) % var_4)))), (arr_37 [i_13] [i_13 + 1] [i_14]))))));
                }
            }
        }
        arr_56 [i_10] [i_10] = ((-(((arr_46 [i_10 - 1]) ? (arr_46 [i_10]) : ((max(1, 56670)))))));
    }
    var_30 = ((((min((1 || var_2), (!var_9)))) >= (((~var_2) ? var_9 : ((53267 ? var_1 : 1))))));
    #pragma endscop
}
