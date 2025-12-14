/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= 155;
    var_13 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_14 &= arr_8 [i_4];
                                var_15 -= (135 ^ 155);
                                arr_13 [i_0 + 1] [3] [i_2] [i_4] [i_4] = max(155, 155);
                            }
                        }
                    }
                }
                var_16 -= ((-(((arr_7 [i_0] [i_1 + 1]) | 16))));
                /* LoopNest 3 */
                for (int i_5 = 2; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            {
                                var_17 = (((arr_16 [i_0 - 1] [i_5 - 2] [i_0 - 1] [i_7]) <= (((arr_8 [i_6]) ? (arr_19 [i_5] [i_5]) : -248))));
                                arr_22 [i_5] [i_5] = arr_16 [i_0] [i_5] [i_6] [i_7];
                            }
                        }
                    }
                }
                var_18 = ((~((min((arr_6 [i_0 - 3] [i_0 - 2] [i_1 - 2]), (arr_8 [i_0 - 1]))))));
                arr_23 [i_0] [i_1 - 1] [i_0] = var_5;
            }
        }
    }
    #pragma endscop
}
