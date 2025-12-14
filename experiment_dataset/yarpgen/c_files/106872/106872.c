/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (~1);
    var_11 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((((2128677404 ? (arr_0 [i_1]) : (arr_0 [i_1]))) == ((var_7 ? (arr_0 [i_0]) : (arr_0 [i_1])))));

                /* vectorizable */
                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    var_12 = (max(var_12, (!-2128677393)));
                    var_13 -= ((((((arr_2 [i_1]) / -24653))) ? (var_9 | -1031335399) : var_6));
                    var_14 = (((arr_5 [i_0] [i_1] [i_2 + 2]) ? (((arr_2 [i_0]) ? var_1 : var_1)) : (((-32767 - 1) / var_8))));
                }
                var_15 = (max(var_15, ((((arr_0 [i_0]) ? (((arr_3 [i_0]) | (((arr_6 [i_1] [i_1] [i_0]) & -2128677393)))) : ((~((2128677404 ^ (arr_1 [i_0]))))))))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        {
                            var_16 += (((min(var_0, (-2147483647 - 1))) == (((var_2 <= (arr_0 [i_1]))))));
                            arr_11 [i_3] [i_3] [i_3] [i_3] = ((max(58991, ((var_9 ? (-32767 - 1) : var_1)))));
                            var_17 = (max(var_17, 1952996856));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 4; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 13;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            {
                                arr_25 [i_5 + 1] [i_6] [i_7] [i_8] [i_9] = (max(-2147483623, 1));
                                arr_26 [i_7 - 1] = 65519;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 12;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 11;i_11 += 1)
                        {
                            {
                                arr_33 [i_5] [i_6] [i_7] = (((((-9433 ? var_1 : (arr_27 [i_6]))) % ((min(var_0, 25388))))));
                                var_18 = (min(var_18, (max(1615059157, (arr_16 [10] [i_7 - 2])))));
                                var_19 = (~((min((arr_22 [i_5 - 3] [i_10 + 1] [i_11] [i_11 + 2] [i_11 - 1]), (arr_12 [i_5 - 3] [i_7 - 2])))));
                                var_20 = ((arr_14 [i_5]) % (((((-26617 ? (arr_32 [i_5 - 1] [i_5] [1] [i_5] [i_5]) : (arr_27 [i_5 - 1])))) ? ((var_7 ? 1 : 21852)) : (arr_15 [i_5 - 2] [i_7 + 1] [i_10 + 2]))));
                                var_21 = (arr_27 [i_5]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
