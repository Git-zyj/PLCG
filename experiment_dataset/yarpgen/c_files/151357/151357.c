/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151357
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -89;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = -var_0;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] [i_1] [i_2] [3] [i_1] [i_2] = -109;
                                arr_14 [i_1] [i_1] [i_1] = (((arr_7 [i_1] [i_1] [i_1] [i_1 + 1] [i_1 + 1] [i_1 - 1]) ? 18446744073709551615 : (arr_7 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 + 1])));
                            }
                        }
                    }
                    arr_15 [i_1] [i_1] = (1 ^ 16308720635539600799);
                    arr_16 [i_1] [2] [i_2] [i_1] = 18446744073709551600;
                    arr_17 [2] |= (arr_4 [i_1 - 1]);
                }
            }
        }
    }
    for (int i_5 = 2; i_5 < 23;i_5 += 1)
    {
        arr_21 [i_5 + 2] = (!var_1);
        arr_22 [i_5] = ((1 ? 81 : 0));
        arr_23 [i_5] [i_5] |= (31539 - 22858);
    }
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        arr_28 [i_6] = (((arr_18 [i_6]) && (arr_27 [i_6])));
        arr_29 [i_6] [i_6] = (max((((-((-(arr_26 [8] [i_6])))))), ((-4109792364642858306 ? 1 : 1))));
        arr_30 [i_6] = ((((max(-9223372036854775807, (65535 * 1)))) ? (((((min((arr_26 [i_6] [i_6]), (arr_24 [i_6])))) ? var_0 : ((-(arr_27 [i_6])))))) : ((13 / (((var_4 ? (arr_24 [i_6]) : (arr_25 [i_6]))))))));
    }
    #pragma endscop
}
