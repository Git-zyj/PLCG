/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = min((max(1472992243970748835, 0)), ((((arr_0 [i_0 - 1]) || var_14))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [1] [i_1] = 0;
                    var_18 = var_2;
                }
            }
        }
        arr_9 [i_0] [i_0] |= max(((16973751829738802781 ? (~var_11) : 181785342734629202)), (min((arr_7 [i_0 - 1] [i_0 - 1] [i_0]), (arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 1]))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    {
                        var_19 = (max((min(1472992243970748835, ((0 ? var_9 : var_5)))), (((((1472992243970748828 ? var_6 : var_4))) ? (arr_7 [i_4] [4] [i_4]) : (max(var_7, var_15))))));
                        var_20 = (((var_9 - var_16) * (max(((max(var_4, 0))), (min(1706359316, var_11))))));
                        var_21 = (min(var_21, 181785342734629186));
                        arr_21 [i_3] [i_3] = ((((max(1, 4294967295))) ? ((var_13 * ((min(var_12, var_10))))) : (max(var_1, (arr_5 [i_4 + 2] [i_4 + 2] [i_0 + 1])))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 13;i_7 += 1)
            {
                {
                    var_22 ^= ((-(max(var_17, 18264958730974922408))));
                    var_23 = var_9;

                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        arr_30 [i_0] [10] [10] [i_0] |= ((-((18264958730974922413 ? (arr_7 [i_0] [i_7 - 2] [5]) : 1))));
                        var_24 = arr_29 [i_0] [6] [i_7] [i_8];
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_25 = (((1 ? var_14 : 1)));
                        arr_33 [i_0] [i_0] [i_0] [12] |= ((((max((arr_20 [i_0 + 1] [i_7 + 1]), ((1 ? (arr_7 [i_9] [6] [i_9]) : (arr_10 [10])))))) ? ((-(max((arr_0 [i_0]), var_12)))) : ((3312040691 | (((12052148576932319745 ? 1 : 1)))))));
                        var_26 = -var_3;
                        var_27 |= ((((((max((arr_0 [i_9]), 1))) ? ((((!(arr_7 [1] [i_6] [i_9]))))) : var_7)) - (((arr_1 [i_0 - 1] [i_7 + 1]) ? (arr_28 [i_0] [4] [1] [i_6]) : ((0 ? 12258767366517679469 : 1))))));

                        for (int i_10 = 2; i_10 < 12;i_10 += 1)
                        {
                            var_28 = (((((~(arr_0 [i_0 + 1])))) ? (1 & 15697103701596507286) : ((((arr_0 [i_0 + 1]) ? (arr_0 [i_0 - 1]) : var_4)))));
                            arr_36 [1] [i_6] [6] [i_7] = max((((!(!13079050046819955225)))), (max(var_16, (arr_0 [i_7 - 3]))));
                            arr_37 [i_7] [i_10] [i_9] [i_9] [i_7] [1] [i_7] = var_6;
                            arr_38 [1] [i_7] = (arr_35 [i_7] [i_7]);
                        }
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        var_29 = (!3764730458);
                        var_30 ^= ((var_8 == (arr_32 [i_0 + 1])));
                    }
                }
            }
        }
    }
    for (int i_12 = 1; i_12 < 14;i_12 += 1) /* same iter space */
    {
        arr_44 [i_12] = ((max((~var_16), var_7)));
        arr_45 [4] |= 0;
    }
    var_31 = ((((min(12576021630391658138, 13079050046819955225))) ? 1 : var_15));
    var_32 = (max(var_32, (((((min((min(var_11, var_4)), -1))) ? var_14 : var_5)))));
    var_33 = (var_4 | var_11);
    #pragma endscop
}
