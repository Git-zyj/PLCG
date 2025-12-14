/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_15;
    var_17 = (max((((max(var_2, var_15)) ^ var_9)), (31799 | var_15)));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_18 -= 31810;

        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            arr_5 [i_0 + 2] = -31676;
            arr_6 [i_0] [4] = ((-(arr_2 [i_0])));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 13;i_3 += 1)
                {
                    {
                        var_19 *= (((((((-31685 ? 31662 : 51234))) ? var_2 : ((min(-31818, 1))))) / ((-(arr_1 [i_1 + 3])))));
                        var_20 ^= ((31800 != ((((arr_8 [i_2] [i_2] [i_2]) == (min(31676, var_3)))))));

                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            arr_14 [i_2] [i_2] = (arr_12 [i_0 + 1]);
                            var_21 *= 31664;
                            var_22 = (min(var_22, (arr_7 [i_0 + 1] [0] [i_3])));
                        }
                    }
                }
            }
        }
    }
    for (int i_5 = 2; i_5 < 15;i_5 += 1)
    {
        var_23 = ((-(((!(arr_17 [i_5 - 2] [i_5]))))));
        var_24 = (((((arr_17 [i_5] [i_5]) ^ (arr_17 [4] [i_5 - 2]))) | (arr_17 [i_5 + 1] [i_5])));
        arr_19 [i_5] = (arr_16 [i_5]);
    }
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        var_25 = (arr_22 [1]);
        /* LoopNest 3 */
        for (int i_7 = 1; i_7 < 22;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 22;i_9 += 1)
                {
                    {
                        var_26 = (arr_22 [i_9 + 2]);

                        for (int i_10 = 3; i_10 < 23;i_10 += 1)
                        {
                            var_27 = (arr_30 [i_9 - 2] [i_10] [i_10] [i_7] [i_9] [i_10]);
                            var_28 = ((~(((((((arr_28 [i_7]) << (((arr_24 [i_10 + 1] [19] [19]) + 18601))))) != ((-(arr_27 [i_7 + 1] [i_8] [i_10]))))))));
                            var_29 = (arr_27 [15] [14] [i_7]);
                            arr_32 [i_6] [i_6] [i_7] [i_9] [i_10] [i_8] = ((+(max((arr_26 [i_8] [19] [i_6]), -31797))));
                        }
                        var_30 = -31681;
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_11 = 2; i_11 < 8;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 12;i_12 += 1)
        {
            for (int i_13 = 3; i_13 < 9;i_13 += 1)
            {
                {
                    var_31 = (arr_29 [i_13 - 2] [i_11 - 2]);

                    for (int i_14 = 0; i_14 < 12;i_14 += 1)
                    {
                        arr_42 [i_12] [i_12] = ((!(((arr_31 [i_12] [i_12] [i_13] [i_14] [i_14] [i_13 + 2] [i_12]) || (arr_31 [8] [i_13] [8] [i_14] [i_12] [i_13 + 2] [i_14])))));
                        var_32 -= (((((arr_36 [i_12] [i_12] [i_11 - 2]) ? (arr_36 [i_14] [i_11] [i_11 + 2]) : var_7)) == ((((-31653 != (!31672)))))));
                        var_33 += (-(arr_7 [i_13 + 3] [i_12] [i_11 - 2]));
                    }
                    var_34 *= (arr_3 [i_11]);
                }
            }
        }
    }
    #pragma endscop
}
