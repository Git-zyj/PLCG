/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_14 = (min(var_14, (((((var_0 | (arr_5 [i_0] [i_0] [i_1]))) ^ (((max(-16, (arr_5 [i_0] [i_0] [i_0]))))))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_15 -= var_7;
                            var_16 &= 1875972964;

                            for (int i_4 = 0; i_4 < 21;i_4 += 1)
                            {
                                var_17 &= (((arr_3 [i_0] [i_1]) & 1875972964));
                                var_18 -= (max((max((arr_6 [i_2 + 2]), 0)), ((((arr_9 [i_0]) ^ (((max(var_5, -100)))))))));
                            }
                            for (int i_5 = 0; i_5 < 21;i_5 += 1)
                            {
                                var_19 |= (((arr_17 [i_2 - 1] [i_2 + 2] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 2] [i_2 - 1]) ? var_9 : (~var_2)));
                                arr_18 [i_0] [i_1] [i_2] [i_3] [i_5] = (((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]) ? ((((max(1772491168, 1455526831257935195))) * (var_2 | 735379324311497827))) : var_9));
                                var_20 = (min(var_20, ((((((arr_12 [i_1] [i_2] [i_2 + 1] [i_3] [i_5]) + 9223372036854775807)) >> var_7)))));
                                var_21 = (min(((var_3 ? (arr_13 [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 - 1]) : var_4)), (((~(arr_13 [i_2 + 1] [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_2 + 2]))))));
                                arr_19 [i_0] [i_0] [i_2] [i_3] [i_3] [i_3] [i_2] = ((var_11 % (min((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]), (((arr_6 [i_3]) << var_7))))));
                            }
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        arr_22 [i_6] = (((-7227590377945767411 + 9223372036854775807) >> 3692513042));
        arr_23 [10] [i_6] = ((55338 ? (arr_20 [i_6]) : (arr_20 [i_6])));
        var_22 = (min(var_22, (arr_0 [i_6] [i_6])));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        arr_28 [i_7] [i_7] = var_1;
        var_23 = ((var_1 > (arr_14 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])));
        arr_29 [i_7] = var_7;
        var_24 = -7227590377945767411;
    }
    #pragma endscop
}
