/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_14;
    var_17 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_18 = (max(var_18, (arr_1 [2] [i_1 + 1])));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_12 [i_2] [i_2] [i_2] [i_0] &= (~var_0);
                                var_19 = var_6;
                                var_20 *= -var_14;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 8;i_6 += 1)
                    {
                        {
                            arr_18 [i_0] [i_0] [i_0] [i_0] &= var_13;
                            var_21 = (arr_3 [i_0] [i_1] [5]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
