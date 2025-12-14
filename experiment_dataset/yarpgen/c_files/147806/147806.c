/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((-17301 ? (max(13360861579220628698, var_7)) : var_5))) ? 65535 : ((var_5 ? ((min(1176215790, var_1))) : -5089973846496602440))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_14 = ((((((-(arr_3 [i_0]))) - -16140901064495857664)) == (arr_0 [i_2] [1])));
                            var_15 = (((~-1043343337) ^ (((arr_12 [9] [9]) ? (arr_0 [6] [i_0]) : (((var_0 ? (arr_1 [1]) : (arr_5 [i_0]))))))));

                            for (int i_4 = 0; i_4 < 17;i_4 += 1)
                            {
                                var_16 += arr_12 [1] [i_4];
                                var_17 *= (+(((arr_11 [i_0]) * (10960 / var_0))));
                                var_18 -= 8;
                                arr_15 [1] [1] [1] [i_1] [1] [1] [i_4] = (!1043343351);
                                arr_16 [i_1] [7] [i_1] [i_1] = (arr_12 [i_0] [i_0]);
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 17;i_5 += 1)
                            {
                                var_19 ^= (arr_0 [8] [1]);
                                arr_19 [i_0] [i_5] |= ((!(((14026297072893154808 | (arr_5 [i_0]))))));
                                arr_20 [i_1] [i_1] = ((!(!545238926)));
                                arr_21 [i_0] [1] [i_5] [i_1] [i_5] = arr_1 [i_3];
                            }
                        }
                    }
                }
                arr_22 [i_0] [i_1] [i_1] = (arr_3 [i_0]);
                arr_23 [i_0] [11] [i_1] = (arr_9 [11] [i_0] [i_1] [1]);
            }
        }
    }
    var_20 = max(var_9, ((~(3 != var_0))));
    #pragma endscop
}
