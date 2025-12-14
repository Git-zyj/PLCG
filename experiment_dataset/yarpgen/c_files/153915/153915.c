/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_3;
    var_15 |= var_4;

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_16 = ((-(~var_9)));
        var_17 = var_0;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_18 = (max(var_18, var_10));
        var_19 = (((((var_0 ? var_10 : var_1))) ? var_4 : ((var_4 - (arr_3 [i_1])))));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 11;i_3 += 1)
            {
                {
                    var_20 = (((((var_12 ? var_1 : var_1))) ? var_10 : (((arr_7 [i_1] [i_1] [i_2 - 3] [i_1]) ? var_6 : var_6))));
                    var_21 |= var_7;
                    var_22 = ((var_10 ? 37318 : ((var_12 ? var_5 : var_2))));
                    var_23 = (var_6 & var_4);
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        var_24 = ((((((var_0 > var_10) ? var_5 : (var_7 == 127)))) ? -var_13 : (min(var_10, (!var_2)))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 10;i_6 += 1)
            {
                {
                    var_25 &= (arr_11 [i_6] [i_5]);
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 9;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 11;i_8 += 1)
                        {
                            {
                                var_26 = (arr_2 [i_4] [i_4]);
                                var_27 = (((((var_4 ? (((!(-127 - 1)))) : 0))) ? ((var_10 ? var_2 : var_8)) : ((var_13 ? -var_5 : var_2))));
                            }
                        }
                    }
                }
            }
        }
        var_28 = (min(var_11, (((var_8 ? var_3 : (arr_5 [i_4] [i_4]))))));
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                {
                    var_29 -= ((((min(((var_8 << (var_10 - 21))), (((arr_27 [i_4] [i_4] [i_4] [i_10]) ? var_13 : var_4))))) ? (min(var_4, (max((arr_16 [i_10] [i_9 - 1] [i_4]), var_6)))) : ((((255 ^ 253) ? ((min(var_3, (arr_9 [i_4] [0] [i_4] [i_10])))) : ((var_4 ? var_9 : var_10)))))));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            {
                                var_30 = (min(((-(-127 - 1))), ((min(var_0, 240)))));
                                var_31 ^= (((((var_13 | (!var_4)))) ? (((var_9 ? (arr_29 [i_4] [8] [i_10] [i_12]) : ((var_11 ? var_12 : var_11))))) : (((-127 - 1) ? (((arr_30 [i_10] [i_10] [i_10] [i_9 - 1] [i_4]) ? (arr_23 [i_10] [i_10]) : (arr_26 [i_9]))) : (((var_12 ? (arr_24 [i_4] [i_4]) : var_10)))))));
                            }
                        }
                    }
                }
            }
        }
        var_32 = var_3;
    }
    #pragma endscop
}
