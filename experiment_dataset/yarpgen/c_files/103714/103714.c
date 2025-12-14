/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_0] [i_0] = ((~(~-1757928616)));

                    for (int i_3 = 4; i_3 < 9;i_3 += 1)
                    {
                        arr_12 [i_0] [i_1] [i_2] = 88;
                        arr_13 [i_0] [i_0] [i_0] [i_0] = (arr_7 [i_0] [i_2]);

                        /* vectorizable */
                        for (int i_4 = 2; i_4 < 8;i_4 += 1)
                        {
                            arr_16 [i_0] [i_3] = var_8;
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] = ((var_9 <= (arr_11 [i_0 + 3] [i_3] [i_3] [i_3 - 4] [i_3])));
                            arr_18 [i_0] [i_0] = (((arr_3 [i_2]) << (((arr_2 [i_3 - 4] [i_0 + 1]) - 994037232))));
                            arr_19 [i_0] [i_1] [i_2] [i_3] [i_3] = (((arr_15 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3 + 1] [i_3]) || (arr_11 [i_0] [i_0 + 2] [i_0 + 2] [i_0] [i_0])));
                        }
                    }
                    arr_20 [i_1] [i_1] [i_1] [i_0] = ((((((~var_8) / (arr_11 [i_0 + 1] [i_0] [i_0] [i_0 + 2] [i_0 + 2])))) ? (((-(var_11 < var_6)))) : (min((-9223372036854775807 - 1), (~var_3)))));
                }
            }
        }
    }
    var_17 = (var_14 | (0 != 167));
    #pragma endscop
}
