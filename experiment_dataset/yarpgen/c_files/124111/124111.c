/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124111
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_16;
    var_21 = ((var_9 ? (~var_10) : (((var_16 < (!var_18))))));
    var_22 *= (((~var_1) ? var_7 : ((((-32766 ? 3775545129 : 1476042017)) >> (((-3085342743189520003 ^ var_0) - 7266846629993693946))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1 + 3] [i_1] [1] = (min(var_14, ((((64340 ? -3508591497578588859 : -5511117654844248649))))));
                    var_23 = (!49784);
                    arr_11 [i_0] [i_1] [i_0] [10] = -32767;
                }
            }
        }
    }
    var_24 = var_16;
    #pragma endscop
}
