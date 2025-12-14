/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [i_2] [i_3 - 2] [i_3 - 3] [i_1] = ((~((-(~var_2)))));
                            arr_11 [i_0] [i_3 - 1] [i_3 - 1] [i_3] [i_0] [i_2] = var_7;
                        }
                    }
                }
                arr_12 [i_0] [i_0] [i_0] = var_0;
            }
        }
    }
    #pragma endscop
}
