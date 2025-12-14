/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_13 |= (((((arr_2 [i_1 - 1]) ? (arr_2 [i_1 - 1]) : (arr_2 [i_1 - 1]))) > ((17946 ? (arr_4 [i_0] [i_1]) : 53))));
                arr_5 [i_0] [i_0] [6] |= 173;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_14 = (min(var_14, var_11));
                                var_15 *= (!(((arr_8 [i_3] [i_1 - 1]) || (arr_8 [i_0] [i_1 + 1]))));
                                arr_14 [14] [i_1] [i_0] [14] [i_0] = ((~(min((max(290802347, 43)), (((arr_4 [i_0] [i_2]) | var_4))))));
                                arr_15 [i_0] [16] [i_3] [i_2] [i_1] |= ((21244 ? 3745133581984450017 : 10697));
                                var_16 = (max(var_16, (((+((((max((arr_10 [7] [7] [i_2] [i_2] [i_2]), var_2))) ? (16842 || 22956) : (max((arr_0 [i_2]), var_5)))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            {
                var_17 = (min(var_17, 19822));
                arr_22 [i_5] [i_6] [i_6] = ((-((5944 + (!var_12)))));
            }
        }
    }
    var_18 = (max(var_18, -48694));
    var_19 *= var_3;
    #pragma endscop
}
