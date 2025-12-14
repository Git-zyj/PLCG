/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_4;
    var_18 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_3] [i_4 + 1] [i_1] [i_4] = -3982403008569877725;
                                arr_17 [i_1] = (((((-1 ? 248 : 0)) + ((max(-3982403008569877725, var_10))))));
                            }
                        }
                    }
                    arr_18 [i_0] [i_0] |= 9678;
                    arr_19 [i_0] [i_0] [i_2] [i_2] = (arr_1 [i_0]);
                    arr_20 [i_0] [i_1] [i_0] = var_0;
                    arr_21 [i_1] = (max(-109, (((arr_5 [i_0]) % (~1)))));
                }
            }
        }
    }
    #pragma endscop
}
