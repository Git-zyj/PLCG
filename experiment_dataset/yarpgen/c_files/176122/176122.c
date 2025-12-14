/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_11;
    var_17 = ((4323455642275676160 ? (((var_0 >> (var_5 + 28112)))) : (max(var_8, ((var_2 ? 0 : 5))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 23;i_4 += 1)
                            {
                                var_18 = ((var_15 ? -5 : 32757));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_1] = ((2233785415175766016 ? -1 : 2233785415175766016));
                            }
                            arr_16 [i_1] [i_2] [i_3 + 3] = 0;
                            arr_17 [i_0 - 1] [i_1] [i_1] [i_3 + 3] = (max(-var_13, (min((((arr_5 [i_3] [i_1] [i_2]) % 2147483643)), (~var_7)))));
                            var_19 = (((!0) ? (((((var_4 ? var_13 : 0))) ^ 11)) : ((((10 * 13) ? var_2 : (var_4 >= var_3))))));
                            arr_18 [i_3] [i_1] [i_2] [i_1] [i_1] [i_0 + 1] = 0;
                        }
                    }
                }
                var_20 = (((((!(-5 % 32758)))) * ((-(arr_2 [i_1] [i_0 + 1])))));
            }
        }
    }
    #pragma endscop
}
