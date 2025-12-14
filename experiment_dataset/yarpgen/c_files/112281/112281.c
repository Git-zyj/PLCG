/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112281
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_14 &= 1861533113652612080;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_15 ^= 2726936298;
                            var_16 *= (!1);

                            for (int i_4 = 0; i_4 < 19;i_4 += 1)
                            {
                                var_17 *= (1568030997 + 1568031008);
                                arr_16 [i_0] [i_1] [4] [i_3] [i_3] [i_2] = (((min(1, 2726936299)) + 1));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 16;i_6 += 1)
                    {
                        {
                            var_18 = (((max(((72057456598974464 ? var_11 : 1)), -90)) != ((206 ? -1545701257345574257 : -97))));
                            var_19 *= (arr_17 [9]);

                            for (int i_7 = 0; i_7 < 19;i_7 += 1)
                            {
                                arr_23 [i_6] = 18672;
                                arr_24 [i_0] [i_1] [i_6] [i_6 + 3] [10] = (((!54311) - 168));
                                arr_25 [i_0 + 1] [i_6] [1] [i_6] [i_7] [i_0] [i_1] = (var_4 < 41619);
                                arr_26 [17] [i_1] [i_5] [i_6] [i_7] = (~110);
                                arr_27 [i_7] [i_6] [8] [5] [i_1] [i_6] [i_0] = ((((-((-5902668084757490335 ? 10663554965436008843 : (arr_15 [i_7] [i_1] [17] [i_6 + 1] [9]))))) <= (58438 * 0)));
                            }
                            for (int i_8 = 3; i_8 < 17;i_8 += 1)
                            {
                                arr_30 [i_0] [18] [i_5] [3] [i_8] [i_6] = ((1 * (!7783189108273542773)));
                                arr_31 [i_0] [1] [0] [i_6] [i_6] = ((min(-5902668084757490335, 1)));
                            }
                            for (int i_9 = 0; i_9 < 19;i_9 += 1)
                            {
                                var_20 = (min(var_20, 41601));
                                var_21 = (min(var_21, ((((((arr_22 [i_0] [i_1] [i_5] [i_6] [i_6 + 2]) ^ 1)) ^ ((min((arr_22 [1] [i_1] [1] [4] [i_6 + 3]), (arr_22 [1] [i_9] [i_5] [14] [i_6 + 1])))))))));
                            }
                            /* vectorizable */
                            for (int i_10 = 0; i_10 < 19;i_10 += 1)
                            {
                                arr_38 [i_6] [i_1] [i_5] = (((!0) && (((-(arr_34 [i_0] [16]))))));
                                arr_39 [i_6] [i_1] [i_5] [i_6] [i_5] = (((((var_10 ? 2047 : 537016222))) ? (arr_10 [i_6] [i_6]) : (arr_32 [i_1] [i_6] [i_1] [i_5])));
                            }
                            var_22 = ((((((arr_5 [i_6] [5] [i_6 + 1]) ? (arr_5 [i_6] [13] [i_6 + 1]) : (arr_5 [i_6] [i_6] [i_6 - 1])))) ? (min(24, (arr_5 [i_6] [1] [i_6 + 2]))) : (1071643453279554562 / 3)));
                            var_23 = (((((((arr_0 [i_0 - 1]) && (arr_0 [i_0 - 1]))))) & 3));
                        }
                    }
                }
                var_24 += (~4294967294);
                var_25 ^= (max(((-(0 * var_6))), (((-(arr_8 [i_0 + 1] [i_1]))))));
            }
        }
    }
    var_26 = (max(((var_4 ? var_12 : -3)), (((-((min(-75, var_13))))))));
    #pragma endscop
}
