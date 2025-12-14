/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            {
                var_20 = (~1371919161);
                var_21 &= -var_18;
                var_22 ^= var_8;
                arr_4 [i_0] = (((!1) + (!var_19)));
            }
        }
    }
    var_23 = var_15;
    var_24 = (((2923048138 < 2923048149) >= (100 || -1)));
    var_25 = var_18;
    var_26 = var_2;
    #pragma endscop
}
