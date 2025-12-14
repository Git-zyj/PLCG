/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_10 [i_1] = var_8;
                    arr_11 [i_1] [20] [i_2] [i_2] = var_5;
                }
            }
        }
    }
    var_20 = ((-((~(~var_18)))));
    var_21 = var_7;
    #pragma endscop
}
