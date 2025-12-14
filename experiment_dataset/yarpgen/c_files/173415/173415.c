/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_20 = (max(var_20, -30439));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_21 = ((-(9223372036854775795 / 15)));
                        arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] &= (((-23 & 16136) ? ((((896 > 1987213179) < 23))) : ((~(~12)))));
                    }
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        var_22 = ((-(!23)));
                        var_23 *= ((-24 ? (max(((23 ? -24 : 241)), 23)) : (+-13242)));
                    }
                }
            }
        }
    }
    var_24 = ((!((!((max(3933876631188013462, 14512867442521538162)))))));
    var_25 = (((!3933876631188013454) << (var_16 - 12513845213932812117)));
    #pragma endscop
}
