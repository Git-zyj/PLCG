/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] = ((!(-2147483647 - 1)));
                            arr_11 [i_3] [i_3] [i_3] [i_3] [i_3] |= ((!(!var_5)));
                            var_13 += ((88 ? 0 : 116));
                            var_14 = (!var_3);
                            arr_12 [i_0] [i_0] [i_0] [i_0] = 0;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        {
                            var_15 ^= (~116);

                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 24;i_6 += 1)
                            {
                                var_16 *= ((109 ? 524288 : 15));
                                arr_21 [i_4] [i_1] = arr_0 [i_5];
                                arr_22 [i_4] [i_1] [i_4] [i_5] [i_6] = (arr_4 [i_0]);
                                arr_23 [i_0] [i_1] [i_4] [i_4] [i_4] [i_6] = (((arr_15 [i_5] [i_4] [i_4] [i_0]) ? (arr_4 [i_6]) : (arr_4 [i_1 - 2])));
                            }
                            for (int i_7 = 0; i_7 < 24;i_7 += 1)
                            {
                                arr_26 [i_4] = (arr_0 [i_0]);
                                arr_27 [i_0] [i_1] [i_1] [i_4] [i_4] [i_5] [i_7] = (~var_11);
                                arr_28 [i_4] [i_4] [i_5] = var_4;
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = var_7;
    var_18 |= -var_6;
    #pragma endscop
}
