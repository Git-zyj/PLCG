/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121402
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_18;
    var_20 = (min(var_20, (((-(min(((var_0 ? 13 : var_10)), (max(var_16, var_15)))))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = (min(13, (max((arr_1 [i_0]), (arr_1 [i_0])))));
        var_21 = (max((arr_0 [i_0]), (~var_7)));
        var_22 = (((((!(((arr_2 [i_0]) != var_10))))) >= ((min(242, 243)))));
        arr_4 [i_0] = (min((max((max(var_5, (arr_2 [i_0]))), var_15)), ((14 ? (arr_2 [i_0]) : var_12))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_14 [i_0] [i_1] [i_2] [i_3] &= ((((((arr_9 [16] [i_3] [i_3] [i_3]) ? (max(2284899598, var_8)) : ((min(var_15, (arr_9 [i_0] [i_1] [i_2] [17]))))))) ? ((((((arr_12 [i_0] [i_0] [i_0] [i_0]) ? var_1 : var_6)) == (arr_0 [i_3])))) : (~1)));
                        var_23 = ((2010067671 ? -4714 : -4687));
                        var_24 = (!-5);
                        var_25 = 4;
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
    {
        var_26 ^= ((-26343 || (arr_8 [1] [i_4] [14])));
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                {
                    var_27 |= (min(var_11, 3522035562639970689));
                    arr_21 [i_4] [i_5 + 2] [5] = ((((((min((arr_12 [i_5] [i_5] [i_5 - 2] [i_5 - 1]), var_18))))) - (((((82 ? (arr_10 [i_4] [i_5] [1]) : var_18))) ? (arr_13 [i_4] [i_4] [21] [i_4]) : (max((arr_19 [i_4] [10] [i_4]), (arr_0 [i_4])))))));
                }
            }
        }
        var_28 = ((2048 ? 16132 : (arr_18 [14])));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                {
                    var_29 = (max(var_29, var_6));
                    var_30 = (!-82);
                }
            }
        }
        var_31 = (max(((((7591270563736957761 ? var_14 : -14389)))), ((var_15 - ((((arr_25 [i_4] [19]) == 3)))))));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
    {
        var_32 = (((1 > -14337) ? ((var_18 ? var_17 : var_4)) : var_15));
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 22;i_11 += 1)
            {
                {
                    var_33 = ((((6678 ? var_5 : 2010067671)) + ((((arr_36 [1] [i_9]) ? var_1 : var_12)))));
                    arr_38 [i_11] [i_10] [15] = (arr_37 [7] [20] [i_10] [i_10]);
                }
            }
        }
    }
    #pragma endscop
}
