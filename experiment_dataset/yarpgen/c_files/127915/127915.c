/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_2] = (231501945 / -231501945);
                    arr_7 [i_0] [i_2] [8] [8] = (arr_5 [i_2] [i_2]);
                }
            }
        }
    }
    var_16 = var_14;
    #pragma endscop
}
