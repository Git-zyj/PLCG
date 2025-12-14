/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 = 57344;
                    arr_9 [10] [i_1] [6] |= 511435011;
                }
            }
        }
    }
    var_21 ^= var_12;
    #pragma endscop
}
