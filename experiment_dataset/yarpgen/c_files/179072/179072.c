/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_15 *= ((((arr_5 [i_0] [i_0 + 2] [i_0 + 2]) ? (arr_5 [i_0] [i_0 - 1] [i_0 + 3]) : var_7)) >> (((min((min(var_3, (arr_4 [i_0] [i_0] [i_0 + 3] [10]))), -32)) - 2628061944391059905)));
                    var_16 -= max((18446744073709551615 || 0), ((~(arr_3 [16]))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_17 += max((arr_6 [i_2] [i_2 - 1] [i_2 - 1] [i_2 + 1] [10]), (arr_5 [i_0] [i_2 - 1] [i_4]));
                                arr_13 [14] [i_3] [i_2] [i_3] [16] [i_1] |= arr_12 [i_0] [i_0 + 3] [i_0 + 2] [i_0] [i_0 + 2];
                                arr_14 [i_0] [i_0] = ((!((((-(arr_11 [i_0] [i_0])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = ((!((((~0) ? 9223372002495037440 : var_14)))));
    var_19 = (min((((var_10 ? var_2 : var_14))), (!var_4)));
    #pragma endscop
}
