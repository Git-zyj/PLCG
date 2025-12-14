/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120855
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, var_8));

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_16 = ((((max((~61642), 65535))) ? (max(var_10, 18446744073709551615)) : ((max(61642, var_2)))));
        var_17 *= (min(((max(65535, (!61642)))), (((1811003993 * 1) ? ((max(3893, var_5))) : (var_13 / var_13)))));
        var_18 = (((~0) ? (((+(((arr_1 [i_0]) ? var_6 : var_8))))) : (max((var_0 || var_10), (min(var_6, var_2))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_19 += var_11;
        arr_4 [i_1] = ((65508 ? (arr_2 [i_1]) : (((!(arr_1 [i_1]))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                {
                    arr_10 [i_2] = ((!(arr_5 [i_1] [i_3])));
                    arr_11 [i_3] = (((arr_3 [i_3]) ? (arr_3 [i_1]) : (arr_3 [i_1])));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 20;i_5 += 1)
                        {
                            {
                                var_20 = 166744549;
                                var_21 = (min(var_21, (~var_0)));
                            }
                        }
                    }
                    var_22 -= (((1 * (arr_6 [i_1] [i_1]))) % 1);
                    var_23 = (max(var_23, (((!(arr_3 [i_2]))))));
                }
            }
        }
        var_24 = 0;
        arr_18 [i_1] = (((!var_5) < 1));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
    {
        var_25 = (max(var_25, ((((((arr_0 [16]) ^ var_9)) != (arr_2 [i_6]))))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                {
                    arr_29 [1] [i_7] [i_7] [i_7] = var_9;
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 1;i_10 += 1)
                        {
                            {
                                var_26 += (((arr_14 [i_10 - 1] [i_10 - 1] [i_10 - 1]) ? (arr_14 [i_10 - 1] [i_10 - 1] [i_10 - 1]) : 65508));
                                var_27 = ((1 || (var_4 * var_1)));
                            }
                        }
                    }
                    var_28 += (((arr_17 [i_6] [i_7] [i_8] [20] [i_7]) / (arr_17 [i_6] [i_7] [i_7] [i_7] [i_6])));
                    var_29 = (+-1);
                }
            }
        }
    }
    #pragma endscop
}
