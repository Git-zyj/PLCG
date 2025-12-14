/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [11] = ((var_8 << (((max(((var_13 ? var_6 : var_14)), (((var_7 ? var_4 : var_9))))) - 40852))));
        arr_3 [i_0] = ((((((var_0 | var_10) ^ (((var_11 ? var_15 : var_8)))))) ? (((var_14 & (9223372036854775798 && 32767)))) : (((((var_7 ? var_7 : var_7))) ? (((var_1 ? var_13 : var_2))) : ((var_8 ? var_4 : var_0))))));
    }
    for (int i_1 = 1; i_1 < 7;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                {
                    var_16 = ((~(((((var_0 ? var_6 : var_4))) ? ((var_14 ? var_4 : var_12)) : ((max(var_9, var_12)))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 9;i_5 += 1)
                        {
                            {
                                arr_18 [i_4] [i_4] &= (((((((max(var_4, var_2))) ? (var_4 & var_11) : ((var_13 ? var_13 : var_15))))) ? (((min((var_7 < var_15), ((511 < (-32767 - 1))))))) : (((var_1 & var_7) ? (~var_10) : (((var_1 + 9223372036854775807) >> (var_10 - 3068957504847945291)))))));
                                var_17 = max((((!var_6) ? var_13 : (var_5 + var_14))), (((~((max(var_13, var_7)))))));
                                arr_19 [i_1] [i_1] [i_1] [i_1] [i_1] = ((((((var_10 ? var_3 : var_14)) == (var_14 + var_1))) ? ((((((255 >> (32744 - 32726)))) != 9223372036854775807))) : ((-((var_10 ? var_4 : var_12))))));
                            }
                        }
                    }
                    var_18 = ((var_5 ? ((~(-32767 - 1))) : var_2));
                    var_19 = (((((min((max(var_3, var_12)), ((var_13 ? var_3 : var_14)))) + 9223372036854775807)) >> 0));
                }
            }
        }
        var_20 = (min(var_20, ((((max((var_3 || var_1), (var_8 | var_8))) >> ((((((min(var_2, var_2))) ? (var_2 + var_15) : (32768 && 0))) - 3100434962918205327)))))));
        var_21 = (max(var_21, (var_5 ^ var_12)));
        var_22 = (max(var_22, ((((((((var_2 ? var_0 : var_12))) || (((var_2 ? var_13 : var_0))))) ? ((((var_13 ? var_13 : var_8)) ^ (~var_7))) : (((var_3 || var_7) ? (var_14 && var_10) : (var_4 | var_2))))))));
    }
    var_23 = (((min(var_2, ((var_9 ? var_9 : var_13))))) ? (max((!var_6), ((-2 / (-32767 - 1))))) : (((var_5 / var_3) ? (var_14 + var_13) : var_7)));

    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        var_24 = var_6;
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                {
                    arr_28 [i_6] [i_7] [i_8] [i_6] = ((var_15 <= (+-32767)));
                    arr_29 [i_6] [i_7] [i_8] = -32744;
                }
            }
        }

        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            var_25 = ((((((var_14 > var_0) >> (((var_14 & var_10) - 2882620502521874425))))) ? ((((var_14 ? var_8 : var_8)) * -var_13)) : (((!(((var_1 ? var_8 : var_13))))))));

            for (int i_10 = 0; i_10 < 11;i_10 += 1) /* same iter space */
            {
                var_26 = (max(var_26, ((min((((((var_3 ? var_2 : var_11))) && (((var_2 ? var_14 : var_1))))), ((!(((var_10 ? var_4 : var_5))))))))));
                var_27 = ((~(((-32762 <= 32744) ? ((var_9 ? var_0 : var_6)) : (((var_12 ? var_11 : var_12)))))));
                var_28 -= var_4;
                var_29 = (min(var_29, ((((((((var_11 ? var_6 : var_13))) ? (-32744 * 32767) : var_13))) ? (((var_9 / var_13) ? -var_12 : var_10)) : (((var_1 - -26) | var_15))))));
                /* LoopNest 2 */
                for (int i_11 = 4; i_11 < 8;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        {
                            arr_43 [i_10] [i_10] [i_10] [i_10] [i_12] [i_12] |= (70368727400448 != 9223372036854775793);
                            arr_44 [i_12] = var_2;
                            arr_45 [i_11] &= (max((((((var_2 ? var_11 : var_5))) ? var_9 : ((var_15 << (var_9 - 45107))))), ((((-32767 - 1) || 504)))));
                        }
                    }
                }
            }
            for (int i_13 = 0; i_13 < 11;i_13 += 1) /* same iter space */
            {
                var_30 = ((var_2 ^ ((-var_9 * (var_13 > var_4)))));
                var_31 = (min(var_31, ((max(var_1, (((var_11 >= var_13) + (max(var_1, var_8)))))))));
                arr_50 [i_9] = (min((((var_0 * var_9) ? var_10 : (var_8 * var_13))), ((var_10 ? (0 / 8388480) : (((max(var_9, var_7))))))));
            }
            arr_51 [i_6] = var_10;
        }
        var_32 = (max(((var_6 ? (((var_8 ? var_9 : var_9))) : ((var_12 ? var_0 : var_3)))), ((((var_8 / var_15) / var_3)))));

        for (int i_14 = 1; i_14 < 8;i_14 += 1)
        {
            arr_54 [i_6] [i_6] [i_6] = max((max((var_14 != var_7), ((var_7 ? var_7 : var_1)))), var_13);
            /* LoopNest 2 */
            for (int i_15 = 1; i_15 < 9;i_15 += 1)
            {
                for (int i_16 = 3; i_16 < 10;i_16 += 1)
                {
                    {
                        var_33 = (max(var_33, var_8));
                        var_34 = var_1;
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_17 = 0; i_17 < 16;i_17 += 1)
    {
        arr_61 [i_17] = var_0;
        arr_62 [4] [i_17] = ((((var_9 ? var_15 : var_9)) % (var_3 & var_14)));
    }
    #pragma endscop
}
