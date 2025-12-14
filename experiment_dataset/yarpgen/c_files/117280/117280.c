/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_12 = (max((arr_12 [i_4] [i_4] [i_4 - 4] [i_4] [i_4 - 2]), (((arr_12 [3] [i_4] [i_4 - 2] [i_4] [i_4 + 1]) + (arr_12 [i_4] [i_4] [i_4 - 4] [i_4 - 4] [i_4 + 1])))));
                                var_13 ^= (min(((-(arr_9 [i_4 - 2] [i_4 - 2] [i_4 - 2] [i_4 - 2] [8]))), (arr_9 [i_4 + 1] [i_4 - 2] [i_4] [i_4 - 4] [i_4 + 1])));
                            }
                        }
                    }
                    var_14 *= ((245 ? 32767 : 659463171));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_15 = (arr_17 [i_0] [i_1] [i_2] [i_5] [i_6]);
                                var_16 = (max(var_16, (arr_17 [i_0] [i_1] [i_2] [i_5] [i_6])));
                                arr_18 [i_0] [i_1] [i_2] [5] [i_2] = (((var_0 < var_6) ? (arr_4 [i_0] [i_0]) : var_3));
                            }
                        }
                    }
                    arr_19 [i_0] [i_0] [i_1] [6] = ((((min(((max((arr_4 [i_1] [i_0]), (arr_17 [i_0] [i_1] [i_2] [i_0] [i_2])))), (-32753 / 1)))) ? ((((((((arr_9 [i_0] [i_1] [i_0] [i_0] [i_1]) + 9223372036854775807)) << (((arr_14 [3] [3] [3] [3]) - 28864)))) < (75 * var_8)))) : ((((var_10 * (arr_15 [i_0] [i_0] [i_0] [i_1] [3])))))));
                }
            }
        }
    }
    var_17 = ((-(((((var_0 ? var_4 : 250))) ? var_10 : ((55 ? var_7 : 62030))))));
    var_18 = (178 || -2147483637);
    #pragma endscop
}
