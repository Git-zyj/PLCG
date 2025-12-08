/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21
Invocation: ../scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21 -o /data/zyj/loop_generator/baselines/yarpgen/mytest/c_files/21
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (unsigned int i_0 = 1; i_0 < 24; i_0 += 3)
    {
        var_17 = ((((arr_1 [i_0 - 1]) ? 1 : (arr_1 [i_0 - 1]))) | (var_4 || var_0));
        var_18 = (min(1, ((((((arr_1 [i_0 + 1]) >> 0))) ^ (max(var_0, (arr_2 [i_0])))))));
        arr_4 [i_0 - 1] [i_0] = var_6;
        var_19 ^= ((((min((min(32767, 1)), (((!(arr_0 [i_0]))))))) & (!var_16)));
        var_20 = ((!(9473874873364982264ULL)));
    }
    for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1)
    {
        arr_9 [14] [i_1] = (var_12 ? (max(-var_6, (var_5 + var_3))) : ((((!(arr_6 [i_1]))))));
        var_21 ^= ((-(((!var_16) ? (arr_7 [i_1] [i_1]) : -var_9))));
        var_22 = ((((((((min(var_11, 0))) || (((var_15 ? (arr_1 [i_1]) : var_13))))))) * (((((var_15 ? var_10 : var_4))) ? (arr_7 [i_1] [i_1]) : (var_11 > var_2)))));
    }
    var_23 = ((var_10 >> (var_9 - 936440214)));

    /* vectorizable */
    for (int i_2 = 4; i_2 < 20; i_2 += 3) /* same iter space */
    {

        for (int i_3 = 1; i_3 < 18; i_3 += 3)
        {
            var_24 = ((1 ? -5339 : 255));
            var_25 = -1;
            var_26 = (arr_1 [i_2]);
            var_27 = ((-625403420 ? -15 : -164799283));
        }
        var_28 ^= (((-897 + 2147483647) << (((((arr_14 [0] [i_2]) ? var_1 : (arr_12 [4]))) - 301607720))));
        arr_16 [i_2] = (((arr_1 [i_2 + 1]) >> (((arr_1 [i_2 - 3]) - (3583266831U)))));
        var_29 = var_1;
        var_30 = -4;
    }
    for (int i_4 = 4; i_4 < 20; i_4 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 22; i_5 += 4)
        {
            for (int i_6 = 0; i_6 < 22; i_6 += 4)
            {
                {
                    arr_26 [i_4 + 2] [i_5] [i_5] [i_6] = (((((var_13 % (arr_19 [i_4 - 1] [i_4 - 1])))) ? (((1 / 46809) * ((12 ? (197546410777692472ULL) : (134209536LL))))) : ((((!(((-2056787446 - (arr_2 [i_5]))))))))));
                    var_31 += var_3;
                    arr_27 [i_4] [2] [i_4] [i_4] = var_2;
                    var_32 &= -24;
                }
            }
        }
        var_33 = ((+(var_16 % var_6)));
        arr_28 [i_4] [i_4 - 2] &= (arr_12 [1]);
        var_34 -= (((((arr_22 [i_4 - 1]) ? (arr_22 [i_4 - 3]) : 4)) & (!0)));
    }
    for (int i_7 = 4; i_7 < 20; i_7 += 2)
    {
        var_35 = ((((min(((var_12 ? -55 : var_16)), 0))) ? (arr_22 [i_7]) : (((arr_20 [i_7] [i_7 + 2] [i_7]) - ((+(8228682733467440531LL)))))));
        var_36 = ((!((!(arr_32 [i_7 - 2])))));
        var_37 = (((((~(((4014114727U) & 1))))) | ((var_11 ? var_14 : (arr_21 [i_7 - 1])))));

        for (int i_8 = 0; i_8 < 0; i_8 += 1) /* same iter space */
        {
            arr_37 [i_8] [16] [i_7] = var_9;
            var_38 = ((((var_3 ? ((min(206, -5339))) : ((min(1, 0))))) <= (min(443380791, ((var_6 << (var_9 - 936440233)))))));
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 22; i_9 += 2)
            {
                for (int i_10 = 1; i_10 < 20; i_10 += 3)
                {
                    for (unsigned int i_11 = 1; i_11 < 20; i_11 += 3)
                    {
                        {
                            arr_49 [i_11] [i_11] [i_9] [i_11] [i_11] = (((((arr_3 [i_7]) ? var_10 : (var_6 > var_14))) < 56));
                            var_39 = ((-((+(arr_43 [i_8 + 1] [i_9] [i_10] [i_10 + 2])))));
                        }
                    }
                }
            }
        }
        for (int i_12 = 0; i_12 < 0; i_12 += 1) /* same iter space */
        {
            var_40 = (8228682733467440532LL);
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 1; i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 19; i_14 += 2)
                {
                    {
                        arr_57 [i_13] [i_12] [i_12] [i_14] = (((arr_13 [i_7] [i_12 + 1] [i_13]) >> ((((((((arr_29 [i_7 - 4]) / var_3))) ? ((((!(8228682733467440532LL))))) : ((var_2 ? var_14 : var_15)))) - (10651126700300621701ULL)))));
                        var_41 += (((((max(var_3, -643453247)))) + 1));
                    }
                }
            }
            arr_58 [i_7] [16] = (arr_35 [i_7] [i_12]);
            var_42 -= (arr_31 [1] [1]);
        }
    }
    var_43 = ((((((((1 ? 32768 : 1))) ? (0ULL) : (9223372036854775807LL)))) ? var_15 : 12549));
    #pragma endscop
}
