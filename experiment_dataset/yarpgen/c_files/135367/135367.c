/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, ((max((~3961801823), 15027416962102944390)))));
                    arr_6 [i_2] [i_1] = (arr_4 [i_2] [i_0] [i_0]);
                }
            }
        }
    }
    var_15 = ((min((var_1 & 3961801826), (!var_1))));
    #pragma endscop
}
