/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (max(((((arr_1 [i_0] [i_0]) ? var_12 : var_8))), (((!(((var_9 ? 676616117 : var_1))))))));

        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            var_13 ^= ((((((!14855) ? ((max(var_12, (arr_5 [2] [i_0] [i_1 - 1])))) : 28))) ^ ((~(min((arr_2 [i_1]), var_5))))));
            var_14 = 134;
            var_15 = (arr_2 [i_1 + 3]);
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_0] [i_1] [2] = (max(((min((!16248491), ((134 ? (arr_5 [i_0] [1] [i_0]) : (arr_7 [i_0] [i_1 - 1] [i_2 - 3])))))), (max((max(134, 5740570936646718382)), ((max(-6773501700188732955, 59)))))));
                        arr_12 [i_1] = (+(((var_1 >= ((max((arr_1 [i_2] [i_1]), 63)))))));
                    }
                }
            }

            for (int i_4 = 1; i_4 < 18;i_4 += 1)
            {
                var_16 = var_12;
                arr_15 [i_0] [i_1] = (max((arr_13 [i_1 - 1] [i_4 - 1] [i_4 - 1]), (arr_13 [i_0] [i_0] [3])));
            }
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                var_17 = (((((-(arr_8 [i_0] [i_1 + 2] [i_1])))) ? (arr_14 [i_1 + 2] [1] [i_5]) : (min(((((-2147483647 - 1) ? (arr_16 [i_0] [i_1] [i_1] [i_0]) : -82))), (((arr_14 [i_0] [i_1] [i_5]) ? (arr_8 [i_0] [i_1 + 1] [i_1]) : (arr_6 [i_1] [i_1] [i_1])))))));
                arr_19 [i_1] [i_1] = (min((((6764 ? ((min(13, 62853))) : var_4))), (arr_10 [i_5] [i_1] [i_5] [i_0])));
                var_18 = (max(((max(var_12, (arr_4 [i_1])))), -69));
            }
        }
    }
    for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
    {
        var_19 *= (((min((arr_21 [i_6]), var_2)) << (((arr_21 [i_6]) - 34277))));
        var_20 = (max((arr_21 [i_6]), (arr_21 [i_6])));
    }
    for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
    {
        var_21 = ((9223372036854775807 ? (((arr_25 [i_7]) ? (arr_20 [i_7]) : ((min(255, var_0))))) : 2147483647));
        var_22 = (min(var_22, ((((~(arr_21 [i_7])))))));
        var_23 = ((3940893934 ? 1 : 41941));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
    {
        var_24 = ((((((var_6 ? -16 : 25140)) + 2147483647)) << (var_8 - 57662)));
        arr_28 [i_8] = (((((var_10 ? var_8 : var_5))) && var_7));
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 18;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 19;i_10 += 1)
            {
                {
                    arr_34 [i_8] [2] [4] = (var_10 && var_12);
                    /* LoopNest 2 */
                    for (int i_11 = 2; i_11 < 18;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 20;i_12 += 1)
                        {
                            {
                                arr_39 [i_8] [i_9] [i_10 + 1] [i_11] [i_8] [i_9] = (32 ? -117 : 180);
                                arr_40 [1] [i_8] [i_10] = (((arr_33 [i_9 + 2]) / var_3));
                                var_25 ^= 188;
                                arr_41 [15] [i_8] [i_8] [0] [i_8] [i_12] = var_4;
                            }
                        }
                    }
                }
            }
        }
        var_26 = ((~((7746033349334225601 ? var_10 : (arr_38 [i_8] [i_8] [i_8] [i_8] [i_8])))));
        var_27 = (max(var_27, (arr_32 [i_8] [7] [i_8] [i_8])));
    }
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 21;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 21;i_14 += 1)
        {
            {
                var_28 = (arr_43 [i_13]);
                var_29 *= (((((144112989052600320 ? 14427 : 206))) ^ ((110 ? (max(var_2, 1)) : var_12))));
                var_30 += (((((min(-9223372036854775793, (arr_42 [i_14] [14]))) == (~var_5))) ? (((!(((~(arr_45 [0] [i_13]))))))) : ((max((max((arr_44 [i_14] [i_14]), 4)), ((((arr_44 [i_13] [i_13]) <= 3343989431))))))));
                arr_46 [i_14] [i_14] = ((min((arr_43 [i_14]), (~var_1))));
            }
        }
    }
    var_31 = var_3;
    var_32 -= ((!(!var_7)));
    #pragma endscop
}
