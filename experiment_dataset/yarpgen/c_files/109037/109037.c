/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_12 [i_4] [i_0] [i_2] [i_2] [i_0] [i_0] = (min(((((6219222012013472246 || 12227522061696079369) <= 40678))), (((min(0, 7578))))));
                                arr_13 [i_4] [i_0] [i_2] [i_2] [i_0] [i_0] = ((((max((~var_10), var_2))) ? 1502986205786123754 : (max(1768944959, (arr_6 [i_0] [i_2] [i_2] [i_0])))));
                                var_14 ^= var_4;
                            }
                        }
                    }
                    var_15 = (min(var_15, 347242289263146538));
                    var_16 = var_9;
                }
            }
        }
    }
    #pragma endscop
}
