/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128680
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= (min(var_14, 255));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_17 = (min(var_17, ((((((max(255, (arr_5 [i_1]))))) < (((var_9 ^ var_5) | 39891)))))));
                                arr_12 [i_4] [i_3] [i_0] [i_1] [2] = ((-18710 ^ ((var_9 ? 1825492434 : (arr_2 [i_0 + 2])))));
                                var_18 |= (((((551262559 || 0) && var_10)) ? (((arr_11 [i_0]) / (max(2147483648, 25534)))) : ((var_3 ? (min(var_0, var_7)) : (min((arr_0 [i_1]), var_11))))));
                                var_19 = (max(((-108 ? (arr_5 [i_0]) : (551262567 == -1949638871))), var_2));
                            }
                        }
                    }
                    var_20 = ((((var_3 ? (arr_11 [i_1]) : ((var_15 ? var_1 : 7168))))) + ((max(var_10, var_9))));
                    arr_13 [i_2] [i_0] [i_0] [i_0] = ((var_14 ? ((3028642257 + (var_10 + var_11))) : (((((var_11 ? 32498 : var_7))) * -var_11))));
                    arr_14 [i_0] [i_1] [i_2 - 3] [i_2 - 3] = max((arr_5 [i_0]), ((-29068 / (var_8 && 2028225572927781357))));
                }
            }
        }
        arr_15 [i_0] = (max(-var_3, (var_2 + 11631053027636443862)));
    }
    var_21 += var_13;
    #pragma endscop
}
