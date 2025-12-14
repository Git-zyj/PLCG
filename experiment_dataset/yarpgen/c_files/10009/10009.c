/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10009
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_17 = 6;
        arr_4 [i_0] = ((199 ? 6836316301551703089 : var_4));
        var_18 = (min(var_18, (((1 ? -10352 : 1)))));
    }

    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_19 = (((var_11 + 2820260340685519995) | (((((var_8 ? -75775839 : var_5)))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    var_20 = ((!(!var_11)));

                    for (int i_4 = 1; i_4 < 19;i_4 += 1)
                    {
                        arr_17 [i_1] [i_2] [i_2] [i_2] [i_1] [i_4] = (((672221271 >> 1) ? (!1) : (9223372036854775784 * var_8)));
                        var_21 = ((8197521410905062141 ? 1 : 1));
                    }
                    arr_18 [i_2] [i_2] [i_1] = ((((max(var_11, 1156179651))) ? ((var_0 ? 8197521410905062128 : var_9)) : (var_9 || 31493)));
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        arr_21 [i_5] [i_5] = ((!(((1 ? (max(var_4, var_10)) : (var_8 && 36))))));
        /* LoopNest 3 */
        for (int i_6 = 2; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 1;i_8 += 1)
                {
                    {
                        arr_31 [i_5] [i_5] [i_6] [i_7] [i_7] [i_5] = (((((var_2 ? 23 : var_13))) ? (((214082973219476899 != var_8) ? -9223372036854775779 : -32763)) : (var_16 & 2147483640)));
                        var_22 = (((((var_5 ? var_2 : 18446744073709551615))) ? 36 : 7));
                        arr_32 [i_5] [i_6] [i_5] [i_7] [i_5] = -120;
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                for (int i_11 = 3; i_11 < 11;i_11 += 1)
                {
                    {
                        var_23 = (((((-32206 ? (min(6836316301551703109, 10410102222951323091)) : 25675))) ? ((-var_12 ? (6836316301551703095 % var_15) : (var_16 - var_9))) : 28377));
                        arr_43 [i_9] [i_5] = var_9;
                    }
                }
            }
        }
        arr_44 [i_5] = ((var_4 ? -26 : (7 > var_5)));
    }
    #pragma endscop
}
