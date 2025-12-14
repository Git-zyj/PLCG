/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100378
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, var_1));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 7;i_2 += 1)
            {
                {
                    arr_8 [i_2 + 3] = (!0);
                    arr_9 [i_0] [i_0] [8] [i_2] = (max((max((var_15 != -3171445380537162428), (~var_16))), ((~(17055 ^ var_12)))));
                }
            }
        }
    }
    var_20 = ((-((var_12 / (~var_3)))));
    #pragma endscop
}
