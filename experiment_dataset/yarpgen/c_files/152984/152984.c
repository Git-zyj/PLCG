/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152984
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_13 *= ((~(~var_1)));
                arr_5 [i_0] [i_1] [i_0] = var_3;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            {

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                arr_22 [1] [i_5 - 2] [16] [15] [i_2] [22] = var_4;
                                var_14 = (~var_5);
                            }
                        }
                    }
                    arr_23 [i_3] = var_5;
                    var_15 = var_4;
                }
                arr_24 [i_2] [4] [i_3] = -var_3;
                var_16 -= var_5;
            }
        }
    }
    var_17 *= var_11;
    var_18 = var_6;
    #pragma endscop
}
