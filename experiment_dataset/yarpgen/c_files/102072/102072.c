/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_15 = ((var_8 & 1) ? ((~(arr_0 [i_0] [i_0 - 1]))) : 27378);

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
                            {
                                var_16 = (((~1439683727) < ((((arr_5 [i_0] [i_1] [i_2]) / var_8)))));
                                var_17 += ((~(arr_4 [i_0 - 3] [i_1] [i_2 + 1] [i_3])));
                                arr_13 [i_2] [i_3] = (~3479985034472615342);
                                var_18 = ((~(arr_9 [i_0 + 2] [i_2 + 1] [0] [i_2] [i_2 - 1] [i_2])));
                                arr_14 [i_0] [i_3] [i_0] [i_3] [i_0] = ((var_6 ? (arr_8 [i_0] [i_0] [i_0] [1] [i_0 - 3]) : (arr_8 [i_4] [i_1] [i_2] [i_1] [i_0])));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
                            {
                                var_19 |= var_8;
                                var_20 *= (100 >= (arr_3 [i_0] [i_0 + 1] [i_0]));
                                var_21 = ((arr_12 [i_0 - 2] [i_0 + 2] [i_2] [i_2] [i_2 - 2] [i_0 + 2] [i_2 - 2]) ? var_0 : -7948524834304235396);
                            }
                        }
                    }
                }
                arr_18 [i_1] |= (min((((var_9 ? (arr_4 [i_0 - 3] [1] [i_0 - 2] [i_0 - 3]) : (arr_4 [i_0 - 4] [1] [i_0 - 2] [i_0])))), (arr_15 [i_0])));
            }
        }
    }

    /* vectorizable */
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        arr_21 [i_6] = ((127 ? 111 : 16134));
        var_22 &= (((arr_20 [i_6] [14]) >= (arr_20 [i_6] [i_6])));
        var_23 *= (((arr_19 [0] [i_6]) ? (arr_19 [12] [i_6]) : var_11));
    }
    var_24 = (max(var_12, (((~((256 ? var_11 : -350959234)))))));
    #pragma endscop
}
