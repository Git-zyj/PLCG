/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173704
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (((255 / 8191) - (min(-var_1, var_13))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_15 = (var_12 + 0);
                    var_16 = (-var_2 % ((((arr_8 [i_0] [i_1 + 2] [i_2]) > var_6))));
                }
            }
        }
    }
    var_17 = (~var_7);
    #pragma endscop
}
