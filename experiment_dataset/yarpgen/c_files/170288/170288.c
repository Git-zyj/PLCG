/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    var_18 = ((min(-119, ((-13 ? var_17 : (arr_0 [11] [i_1]))))));
                    arr_6 [6] [1] [i_1] [i_0] = (min(65520, (max(-8, -var_1))));
                }
            }
        }
    }
    var_19 -= -7;
    #pragma endscop
}
