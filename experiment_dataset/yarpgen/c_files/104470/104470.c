/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104470
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = -var_6;
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    var_13 = (((((32456 ? 32456 : 32474))) ? (arr_6 [i_2] [i_1]) : var_4));
                    var_14 = (min(var_14, (((41097 ? -656419922916029822 : 5127949491493980921)))));
                    var_15 = (max(var_15, ((-(((arr_4 [i_2] [i_1] [i_0]) ^ var_4))))));
                }
            }
        }
        var_16 *= (((((880924272 ? 880924272 : 24457))) ? -var_9 : (((arr_6 [i_0] [i_0]) << var_10))));
        var_17 ^= (arr_5 [i_0]);
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        arr_14 [i_3] [i_3] = (((arr_12 [i_3] [i_3]) ? (arr_12 [i_3] [i_3]) : (arr_13 [i_3])));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 15;i_7 += 1)
                        {
                            {
                                var_18 = ((((((arr_16 [i_7] [i_6] [i_5]) ? (arr_19 [i_3] [i_5]) : (arr_20 [i_7])))) ? ((~(arr_18 [i_3] [i_6]))) : (arr_21 [i_4] [i_5] [i_5] [i_5])));
                                arr_25 [i_7] [i_4] [i_6] [i_3] [i_4] [i_3] = (arr_11 [i_3] [i_5]);
                            }
                        }
                    }
                    var_19 ^= ((-((~(arr_16 [i_5] [i_4] [i_3])))));
                }
            }
        }
    }
    var_20 = (((((var_12 ? (var_1 + var_0) : (max(var_4, var_11))))) ? ((~(var_1 & var_6))) : (var_6 | -var_0)));
    #pragma endscop
}
