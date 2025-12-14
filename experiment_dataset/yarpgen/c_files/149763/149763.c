/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 7;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] = ((22 ? (((arr_5 [i_1 - 1] [i_1 - 3] [i_1 - 2]) ^ (arr_5 [i_1 - 1] [i_1 - 3] [i_1 - 2]))) : ((~(arr_11 [i_1 - 1] [i_1 - 3] [i_1 - 2] [i_1 - 3] [i_1 - 1] [i_1 - 1] [i_1 + 1])))));
                                var_10 = (((max((arr_11 [i_4] [i_4 + 3] [i_4] [i_4] [i_4 + 1] [i_4] [i_4 - 1]), -1741125208))) && (arr_9 [i_0] [i_1] [i_0] [i_3] [i_4] [i_4]));
                                arr_13 [i_0] = -8014;
                            }
                        }
                    }
                }
                arr_14 [i_0] [i_0] [i_0] = (arr_3 [i_0] [i_1]);
            }
        }
    }

    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 19;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {
                        var_11 *= (arr_16 [4]);
                        var_12 = 1;
                        var_13 = var_4;
                    }
                }
            }
        }
        arr_26 [i_5] [i_5] = (-(247 || 246));
    }
    #pragma endscop
}
