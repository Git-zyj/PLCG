/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138468
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] = (((((((min(0, (arr_1 [i_1])))) <= ((~(arr_3 [i_2])))))) - ((-6724 * (~var_1)))));
                    var_12 *= ((+(((arr_2 [i_2]) << (268435455 - 268435441)))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 7;i_5 += 1)
            {
                {
                    var_13 = (arr_7 [i_3]);
                    var_14 = (((((min(2581424234, 4294967295))) ? (1 || -115335923) : ((0 ? (arr_10 [2] [2]) : (arr_2 [i_3]))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 1;i_7 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    for (int i_9 = 3; i_9 < 16;i_9 += 1)
                    {
                        {
                            arr_25 [10] [i_7] = (((arr_24 [i_9] [i_9 - 3] [i_9 - 3] [i_9 - 1]) ? (((min((arr_16 [i_9]), (arr_23 [19]))) * (~951360339566046997))) : -7378609842688742793));
                            var_15 = (min(var_15, (~0)));
                            arr_26 [15] [i_7] = (max(((var_6 ? var_10 : (((arr_22 [i_6] [i_7] [i_8] [i_9]) ? (arr_16 [i_9]) : (arr_22 [i_9] [18] [i_9] [i_9 - 2]))))), ((((arr_17 [i_7] [i_7 - 1]) & (((arr_18 [8] [8]) / 2581424234)))))));
                            arr_27 [i_6] [17] [i_8] [i_7] = (((((~(arr_22 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7])))) ? 1 : 3506538186));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 20;i_10 += 1)
                {
                    for (int i_11 = 2; i_11 < 18;i_11 += 1)
                    {
                        {
                            arr_33 [19] [i_7 - 1] [i_7] [i_7] = (~-1713543082);
                            arr_34 [i_7] [16] = ((148 ? 1 : 2581424234));
                            var_16 = ((~(47314 <= 0)));
                            var_17 = (max(var_17, ((var_0 ? (((max((arr_29 [i_6]), (min(-98, 61313)))))) : (((arr_23 [i_7]) ? (arr_17 [i_11 + 2] [i_11 + 2]) : (var_5 ^ var_8)))))));
                            var_18 *= -694996602;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
