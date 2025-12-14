/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188394
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_12;
    var_14 *= (min((((-(~1)))), (var_5 % var_9)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [i_0] [i_3] [i_3] [i_3] = (((((((arr_9 [i_2 + 2] [i_2 + 2] [i_3] [i_2 + 2]) >= var_6)))) * (max((~var_10), (arr_7 [i_2 + 2] [i_3] [i_2 + 2] [i_2])))));

                            /* vectorizable */
                            for (int i_4 = 1; i_4 < 11;i_4 += 1) /* same iter space */
                            {
                                var_15 = (min(var_15, ((((arr_13 [i_0] [i_3]) + (-5 & 43))))));
                                arr_15 [i_4] [i_4] [i_4] [i_3] [i_2 + 1] [i_0] [i_0] = var_5;
                                arr_16 [i_3] = var_3;
                            }
                            /* vectorizable */
                            for (int i_5 = 1; i_5 < 11;i_5 += 1) /* same iter space */
                            {
                                var_16 ^= (((((arr_5 [i_5] [i_3]) && var_5)) ? (1 && 117) : 18446744073709551602));
                                var_17 = 1131136175;
                            }
                            var_18 *= (((~(((((arr_8 [i_2 - 1] [i_2 - 1] [i_1]) + 9223372036854775807)) << (4 - 4))))) >= (arr_13 [i_1] [i_0]));
                            arr_20 [i_1] &= ((((!(arr_0 [i_1])))));
                        }
                    }
                }
                var_19 = (arr_19 [i_0] [i_0] [i_0]);
            }
        }
    }
    var_20 += (((var_11 * (35371 > var_9))));
    #pragma endscop
}
