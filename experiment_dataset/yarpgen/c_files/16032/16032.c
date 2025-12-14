/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16032
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_2] = 917504;
                    var_14 = 11;
                    arr_9 [i_0] [i_1] [i_1] = ((57353 ? (((1024 ? -9136764463281997677 : 13957))) : ((12953539265377453584 >> (524284 - 524243)))));
                }
            }
        }
    }
    var_15 = (max(1, var_6));
    #pragma endscop
}
