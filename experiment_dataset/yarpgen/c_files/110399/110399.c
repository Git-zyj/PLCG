/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110399
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [8] [i_1] = (arr_5 [i_0 - 2]);
                arr_7 [i_1 - 3] [i_0 + 3] = ((var_9 ? ((37651 << (var_3 + 1375930194))) : 123));
                arr_8 [i_0] [i_1] [16] = var_8;
                arr_9 [i_0] [i_1] = var_11;
            }
        }
    }
    var_17 = ((4194303 ? var_5 : ((var_9 ? (max(57830, var_8)) : var_3))));
    #pragma endscop
}
