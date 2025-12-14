/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= (min(-2463034420391309394, var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_15 |= var_11;
                var_16 = (max(var_16, (-1285643164 || 1848821072)));
                arr_6 [i_0] [i_0] [i_0] = ((((min((((-(arr_3 [i_0])))), 281474976710655))) ? (((!((min((arr_0 [i_1]), var_3)))))) : (((~20) ? var_10 : var_4))));
                var_17 += -281474976710654;
            }
        }
    }
    var_18 = var_6;
    #pragma endscop
}
