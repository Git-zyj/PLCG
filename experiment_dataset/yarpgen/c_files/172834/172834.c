/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                arr_6 [i_1] [5] [i_0] = (!4095);
                arr_7 [i_0] [i_0] [i_0] |= (((-4116 & 4294967295) > -4101));
            }
        }
    }
    var_20 = var_8;
    var_21 -= var_7;
    #pragma endscop
}
