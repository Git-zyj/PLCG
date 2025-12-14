/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (var_3 - var_6);
    var_12 += var_5;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (16932141053383684853 + 1);
        arr_3 [i_0] [i_0] = (((((var_5 + (var_9 / var_4)))) ? (max(var_6, ((7891 ? -5164 : 8587)))) : var_9));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            arr_9 [14] [i_2] &= (var_2 ? var_1 : var_5);
            var_13 = (min(var_13, var_5));
        }
        arr_10 [i_1] = (((((var_4 ? 1608275094 : 32767))) ? var_2 : ((var_4 ? var_5 : var_1))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    {
                        arr_21 [i_1] [i_1] [i_1] [i_1] [i_1] = ((~(min(var_3, var_4))));

                        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                        {
                            arr_25 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (((var_4 && var_9) ? (!var_9) : var_1));
                            arr_26 [i_1] [i_1] [i_3] = ((var_2 ? var_5 : ((var_1 ? var_6 : var_6))));
                            var_14 = (((((var_1 ? var_4 : (((2396 ? 734258548 : 127)))))) ? ((((!(var_2 > var_7))))) : ((var_0 ? ((min(var_9, var_7))) : ((var_2 ? var_0 : var_6))))));
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                        {
                            var_15 = (max((!var_10), ((var_9 ? var_10 : var_7))));
                            arr_30 [i_7] [i_5] [i_1] [i_1] [i_1] [i_1] = ((((((((var_8 ? var_9 : var_2))) ? -var_5 : ((var_10 ? var_10 : var_0))))) ? var_6 : ((min(var_1, var_10)))));
                        }
                        arr_31 [i_1] = var_5;
                        var_16 = (max(var_16, var_7));
                    }
                }
            }
        }

        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            arr_35 [i_1] [i_1] = var_1;
            arr_36 [i_1] = var_1;
        }
        for (int i_9 = 1; i_9 < 14;i_9 += 1)
        {
            var_17 = (min(var_17, ((((min(var_3, ((2692 ? -7893 : 2147483625))))) ? ((var_0 ? (var_0 - var_6) : (((var_7 ? var_3 : var_6))))) : (!var_10)))));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 16;i_10 += 1)
            {
                for (int i_11 = 2; i_11 < 15;i_11 += 1)
                {
                    {
                        var_18 = (max(var_18, (((((var_4 ? var_9 : var_4))) ? var_8 : ((var_10 ? var_3 : var_10))))));
                        arr_45 [i_1] = ((var_8 ? (((var_2 - var_9) ? var_4 : var_5)) : var_1));
                        var_19 = (!1);
                        arr_46 [i_1] [i_9 - 1] [i_1] [i_11] [i_9] [i_1] = (((max(var_3, var_0))) ? ((var_9 ? var_2 : var_10)) : (((13850589969470195067 ? 10995 : -24099))));
                    }
                }
            }
            arr_47 [i_1] [i_1] [i_9] = -var_2;
            arr_48 [i_1] [10] [i_9] &= (((((var_7 ? ((var_5 ? var_4 : var_5)) : (var_1 + var_1)))) ? ((var_4 ? var_2 : var_9)) : ((var_3 ? ((var_7 ? var_2 : var_6)) : var_7))));
        }
        for (int i_12 = 0; i_12 < 16;i_12 += 1)
        {
            arr_52 [i_1] [i_12] = var_4;
            var_20 = (max(var_20, (((((var_5 || (((var_2 ? var_2 : var_6))))) ? -var_10 : ((((var_6 ? var_10 : var_4)) / var_5)))))));
            arr_53 [i_12] [i_1] [i_1] = (~var_1);
            arr_54 [i_1] = (var_4 ? var_10 : ((var_2 ? (2252349132804379591 + 0) : var_8)));
            arr_55 [i_1] [i_1] = (((var_8 ? (((var_6 ? var_8 : var_9)) : ((var_3 ? var_4 : var_6))))));
        }
    }
    #pragma endscop
}
