/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104333
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_17;
    var_21 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_22 &= 27910;

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_23 |= ((~(arr_0 [i_1 - 1])));
                        var_24 = var_3;
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 0;i_4 += 1)
                    {
                        var_25 -= (arr_7 [i_0] [i_0 - 1] [i_0]);
                        var_26 = 0;
                    }
                }
            }
        }
    }
    #pragma endscop
}
