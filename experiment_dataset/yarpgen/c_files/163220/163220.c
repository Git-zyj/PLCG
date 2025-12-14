/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= ((var_7 % (1 & 13)));
    var_11 = (min(((var_9 | (var_8 & var_7))), var_3));
    var_12 |= (max(var_6, ((var_5 ? var_9 : var_1))));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_13 = (max(var_13, 113));
        var_14 = (min(var_14, (((~(min(((min(var_4, 32759))), ((var_7 << (((arr_0 [i_0]) - 73)))))))))));
        var_15 = 1;
        arr_2 [i_0] [9] = var_2;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_16 = ((((((((arr_1 [i_0] [i_0]) / var_4))) ? (arr_0 [i_0]) : var_2))) ? -1807315580 : (((((var_8 ? var_4 : var_2))) ? var_6 : 2112149768)));
                    var_17 += (arr_6 [i_0 + 1] [i_2 + 2]);
                    var_18 = ((((((32755 ? 1807315580 : var_4)) >= ((max(var_6, var_9))))) ? ((-32759 ? 18446744073709551611 : 1807315580)) : (((var_2 >> (7 >= -1807315581))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        var_19 = (((var_8 >= 1946015518) | var_8));
        arr_13 [i_3] = (var_5 & var_6);
        var_20 ^= ((((arr_9 [8]) - (arr_10 [i_3]))));
        arr_14 [i_3] = 2348951788;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        arr_17 [i_4] = (((((var_4 / (arr_15 [i_4])))) ? (arr_16 [i_4]) : (!var_4)));

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_21 = (arr_15 [i_5]);
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 22;i_7 += 1)
                {
                    {
                        arr_27 [0] [i_4] [i_5] [13] [i_5] [i_7] = var_7;
                        var_22 = (max(var_22, ((((arr_16 [i_7 - 1]) != (arr_16 [i_7 + 1]))))));
                        arr_28 [i_4] [i_4] [i_6] [i_4] [i_5] [5] = var_2;
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            var_23 = (max(var_23, (~8191)));
            var_24 = -var_3;
        }
    }
    var_25 *= ((((((var_7 * var_8) ? var_9 : (var_2 & var_2)))) ? (min(((1 ? (-127 - 1) : -1807315566)), ((max(var_5, var_5))))) : (((min(var_7, 1))))));
    #pragma endscop
}
