/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] = ((-(arr_0 [i_0] [i_1 + 1])));
                arr_7 [i_0] &= (arr_1 [i_0 + 1]);
                arr_8 [i_0] [i_1] = (arr_1 [i_0 + 1]);
                arr_9 [i_1] [i_1] [i_1] = var_3;
            }
        }
    }
    var_15 = var_5;
    var_16 = (max(var_16, (~1023)));
    var_17 -= 0;
    /* LoopNest 2 */
    for (int i_2 = 4; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                var_18 &= ((-(((arr_18 [i_2] [i_2] [i_2 - 2] [i_4 + 2] [i_4 + 1]) / (arr_18 [i_2] [i_2] [i_2 + 1] [i_4 + 2] [i_4 - 1])))));
                                arr_22 [i_3] = (arr_15 [i_2]);
                                arr_23 [20] [i_3] [i_4] [i_5] [i_6] [i_2] &= ((!(!var_5)));
                            }
                        }
                    }
                }
                arr_24 [11] [i_3] [i_3] = ((~(((arr_21 [i_3] [i_3] [i_2 - 1] [i_2 - 3] [i_2] [i_2 - 2]) & (arr_11 [i_2 + 1] [i_2 - 2])))));
                var_19 -= ((-(arr_11 [i_2 - 3] [i_2 + 1])));
                var_20 -= (18446744073709550593 ^ -1);
            }
        }
    }
    #pragma endscop
}
