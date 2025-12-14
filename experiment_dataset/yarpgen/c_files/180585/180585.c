/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_6;
    var_16 = var_3;

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_17 += ((!(min((arr_0 [i_0]), (arr_0 [1])))));
        var_18 = (min(var_18, (((min(var_3, var_8))))));
        arr_4 [i_0] |= var_4;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_11 [i_2] [i_1] [i_2] = ((-(arr_6 [i_0] [i_0])));
                    arr_12 [i_2] = ((((min(((var_10 << (((arr_8 [i_0]) - 505523073)))), ((-(arr_5 [i_0] [i_1] [i_0])))))) == ((var_12 ? ((var_8 ? var_1 : var_11)) : var_14))));
                }
            }
        }
        var_19 ^= (((((!(arr_7 [i_0] [i_0])))) >> (var_5 - 3171193325976060379)));
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
    {
        var_20 = (min(var_20, (((var_11 ? var_7 : ((18446744073709551615 ? 203 : -7)))))));
        arr_15 [i_3] [i_3] = var_4;
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
        {
            arr_22 [i_4] [i_4] = var_2;
            var_21 -= -var_6;
            arr_23 [i_4] [i_4] [i_4] = var_10;
            arr_24 [i_4] = (((var_6 && var_7) ? (min(1459299076, var_0)) : ((max((arr_19 [i_4]), (arr_19 [i_4]))))));
        }
        for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
        {
            var_22 &= (-127 - 1);
            var_23 = (max(var_23, ((((min((arr_26 [i_6] [i_6]), (arr_26 [i_6] [i_6])))) ? (arr_6 [i_6] [i_4]) : (((arr_21 [i_4] [i_4]) ? (min(var_5, 2)) : (arr_16 [i_6] [i_6])))))));
            var_24 = var_12;
            var_25 = (min(var_25, ((min(((-3 | (arr_25 [i_6] [i_4]))), var_0)))));
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                {
                    arr_34 [i_4] = (min((((var_2 == (arr_32 [i_4] [1] [i_4])))), (((arr_31 [i_8] [i_7] [i_4]) ? (arr_31 [i_4] [i_7] [i_7]) : 255))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            {
                                var_26 = ((~(max((arr_8 [i_4]), (arr_8 [i_7])))));
                                arr_39 [2] [i_4] [i_4] = 8300361857909339486;
                            }
                        }
                    }
                    arr_40 [i_4] [i_4] = var_3;
                }
            }
        }
        var_27 -= var_7;
        arr_41 [i_4] = var_4;
        var_28 = ((((((arr_9 [i_4] [i_4] [i_4]) ? (arr_9 [i_4] [i_4] [i_4]) : var_6))) ? ((((arr_38 [i_4] [i_4] [i_4]) ? (arr_38 [i_4] [i_4] [i_4]) : var_3))) : (((arr_38 [i_4] [6] [i_4]) ? (arr_9 [i_4] [i_4] [21]) : var_9))));
    }
    var_29 = 2;

    /* vectorizable */
    for (int i_11 = 0; i_11 < 10;i_11 += 1)
    {
        var_30 = ((var_0 - ((10146382215800212130 ? var_8 : var_8))));
        var_31 = var_6;
    }
    #pragma endscop
}
