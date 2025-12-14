/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166241
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_15 = (min(var_15, -1155));
        var_16 = (max((((!(arr_0 [i_0 + 1])))), 1155));
        var_17 = ((((min((arr_0 [i_0 + 1]), 1154))) ? (((10 ? 29338 : (arr_0 [i_0 + 2])))) : 4294967286));
    }
    var_18 = (min(var_18, (((((max(113, ((min(var_0, 29)))))) ? (((((((142 ? 10 : 4294967282))) != ((var_3 ? 12804966277353393371 : 1141)))))) : (min(var_9, var_12)))))));
    var_19 ^= var_12;
    var_20 = (max((max(-1155, -3037586605025942014)), (((-(max(-21890, 10)))))));
    /* LoopNest 3 */
    for (int i_1 = 3; i_1 < 9;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 9;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            {
                                var_21 |= ((6815258800383493687 % (min(12804966277353393371, 5641777796356158245))));
                                var_22 -= (((((!(arr_2 [i_3]))))) < (max(-9223372036854775805, -3660)));
                                arr_16 [i_1 - 1] [i_1] [i_4] [i_1] [i_1 - 1] [i_1] &= ((((((arr_8 [i_1 - 1]) ? var_0 : var_4))) ? (arr_8 [i_1 - 3]) : (arr_8 [i_1 + 1])));
                                var_23 = var_5;
                                arr_17 [i_1] [i_1] [i_1] [3] [i_5] = -21899;
                            }
                        }
                    }
                    arr_18 [i_1 - 1] [i_1] [i_3] = (((136 ? (arr_14 [i_1] [i_1] [i_1] [i_1] [i_1 + 3] [i_1] [i_1]) : -var_14)));
                }
            }
        }
    }
    #pragma endscop
}
