/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_20 = var_9;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_21 ^= (((arr_5 [i_0] [i_1]) / var_19));
                                var_22 = var_10;
                                arr_11 [i_0] [i_1] [i_2] [i_3] [i_1] [i_2] [i_0] = var_0;
                                var_23 = (max(var_23, -var_12));
                                var_24 = (arr_6 [i_0] [5] [i_4]);
                            }
                        }
                    }
                }
                arr_12 [i_0] = var_15;
            }
        }
    }
    var_25 = var_2;
    #pragma endscop
}
