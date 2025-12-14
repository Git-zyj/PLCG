/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((!(((13662 ? 13662 : 0)))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_12 [1] [i_1] [i_0] [i_3] [1] = arr_3 [i_0];
                                var_14 &= (max((arr_1 [i_4]), (((51880 ? 1862847770 : -18)))));
                            }
                        }
                    }
                }
                var_15 = 13664;
            }
        }
    }
    var_16 = ((var_12 | var_6) & ((((min(6417629967272663316, var_8))) ? var_10 : var_9)));
    #pragma endscop
}
