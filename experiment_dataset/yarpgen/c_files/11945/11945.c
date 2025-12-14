/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (!var_3);

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_16 -= (2262985120721798448 ^ 1);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 = (((arr_1 [i_0] [0]) ? (((((3612 > (arr_7 [i_0] [i_1] [i_2]))) ? ((~(arr_5 [i_0] [i_1] [i_0 + 1] [i_0]))) : var_0))) : 48107));
                    var_18 = (((((~(arr_5 [i_0 + 2] [i_0 + 1] [i_0 + 2] [i_0])))) ? (min(7318745785605149048, 0)) : (((~(arr_5 [i_0] [i_0 - 1] [i_0 + 1] [i_0]))))));
                    arr_8 [i_0] [i_2] [i_1] [i_0] = (((((~((var_13 ? (arr_1 [i_0] [i_2]) : 32759))))) ? (((((arr_6 [i_0 + 1] [i_0] [i_0 + 2]) < (~0))))) : -7318745785605149064));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        var_19 = var_9;
                        var_20 = ((((var_0 ? var_13 : -2137247967114553402)) + (34827 < -7318745785605149048)));
                        arr_12 [i_0] [i_2] = (arr_5 [i_0] [1] [i_0 + 2] [i_0]);
                    }
                }
            }
        }
        var_21 *= (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]);
    }
    for (int i_4 = 2; i_4 < 16;i_4 += 1)
    {
        var_22 = (((((2137247967114553402 && (arr_2 [i_4 - 2] [i_4 + 1] [i_4 - 2]))))) == (arr_9 [i_4] [i_4] [i_4] [i_4 - 1] [i_4] [i_4]));
        var_23 = (min(var_23, (max(1, (arr_13 [i_4 + 1])))));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_24 = 1;
        var_25 = var_14;
        var_26 = (max(var_26, ((((((((0 << (4070058580 - 4070058558)))) || (((~(arr_3 [12])))))) ? (((~(65522 * 1)))) : (min((arr_9 [i_5] [i_5] [i_5] [i_5] [1] [i_5]), ((var_3 >> (var_5 - 755))))))))));
    }
    var_27 = var_13;
    #pragma endscop
}
