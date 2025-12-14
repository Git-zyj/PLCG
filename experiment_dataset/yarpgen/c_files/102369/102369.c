/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((min(((var_4 ? var_8 : 3323)), var_6))) <= var_7));
    var_16 = ((var_1 >= ((var_6 * (min(var_10, var_13))))));
    var_17 *= ((~(((var_14 <= ((var_14 ? -2147483643 : var_13)))))));

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_18 = (min(((min(var_9, (min(var_1, var_8))))), 3085155777));
        var_19 &= (((((((-1134739065 == (arr_0 [i_0] [i_0])))))) ? var_3 : ((((-1134739065 | 41) ? ((var_10 ? var_5 : var_8)) : ((((arr_1 [i_0 + 3]) > var_3))))))));

        /* vectorizable */
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            var_20 ^= (var_9 + 47547);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_21 = (max(var_21, (-19 ^ 92)));
                        var_22 = (((arr_5 [i_0 + 2] [i_1 - 1] [i_2] [4]) == ((var_5 ? (arr_1 [i_0]) : var_0))));
                    }
                }
            }
            var_23 = (min(var_23, (((var_9 || (arr_5 [i_0 + 1] [i_0 + 1] [i_1 + 1] [i_1 + 1]))))));
            var_24 = -1134739068;
        }
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {

        /* vectorizable */
        for (int i_5 = 1; i_5 < 24;i_5 += 1)
        {
            var_25 = (arr_14 [i_5 - 1] [i_5 - 1] [i_4]);
            var_26 *= (~var_3);
        }
        var_27 = 35184371040256;
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            {
                arr_21 [i_6] [1] [4] = (min(32767, 108));
                arr_22 [i_6] [i_6] [i_6] = (min(19, 799484271836803466));
                arr_23 [i_7] = (((var_10 < var_2) ? (((((arr_7 [i_6] [i_7]) + 2147483647)) << (((((arr_7 [i_6] [i_7]) + 127)) - 20)))) : (((arr_7 [i_6] [i_6]) ? var_9 : (arr_7 [i_6] [i_7])))));
                arr_24 [i_6] [i_7] = (((((53 | (arr_20 [i_6])))) ? (arr_20 [i_6]) : 35184371040269));
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 12;i_10 += 1)
                        {
                            {
                                var_28 += (((-35184371040250 <= (arr_19 [i_6] [i_7] [i_8]))) ? (min(((((arr_28 [i_9] [10] [i_8]) && var_1))), 37533)) : ((((!(arr_31 [i_6] [i_7] [i_8] [i_9] [i_10]))))));
                                var_29 = arr_16 [1];
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
