/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_0;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_14 -= ((223 ? -32753 : -119));
                    var_15 = ((~((((116 << (118 - 116))) | 100))));
                    arr_7 [i_2] |= ((-118 ? (min((arr_5 [i_1 - 1] [i_1 - 1] [i_2] [i_1 + 3]), -112)) : -84));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_16 ^= (((arr_11 [i_0] [i_1] [i_2] [i_1 + 4] [i_0]) ? -113 : var_7));
                        var_17 *= ((223 ? 790 : 15650));
                        var_18 = (-814 | -32740);
                    }
                    var_19 ^= (((arr_11 [16] [i_2] [i_2] [i_1 + 4] [i_0]) ? (max((arr_11 [i_0] [i_0] [i_2] [i_2] [i_2]), 17943)) : (arr_11 [i_0] [i_1 + 3] [i_2] [i_2] [i_2])));
                }
            }
        }
        var_20 -= (min(var_11, ((-5979986607785610010 ? 9663726172284965099 : -78))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            {
                                var_21 -= (arr_4 [i_6] [i_5] [i_0]);
                                arr_23 [i_0] [i_4] [i_4] [i_6] [i_4] = (max((120 * 112), (((arr_20 [i_0] [i_4] [i_5] [i_4]) ? (arr_20 [i_7] [i_6] [i_4] [i_0]) : (arr_20 [i_0] [i_7] [i_5] [i_6])))));
                                arr_24 [i_4] = (min(var_11, (arr_4 [i_5] [i_5] [i_0])));
                                arr_25 [i_4] [i_7] [i_6] [i_5] [14] [i_4] = (min(var_0, ((max((arr_17 [i_4] [i_7]), (arr_17 [i_4] [i_0]))))));
                            }
                        }
                    }
                    arr_26 [0] [i_4] [i_5] [8] = ((-(max(23, ((-(arr_15 [i_4])))))));
                    var_22 *= (arr_15 [14]);
                }
            }
        }
    }
    #pragma endscop
}
