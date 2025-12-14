/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_0] = var_14;
                var_17 = -3333155283688094657;
            }
        }
    }
    var_18 += -4806100408606067034;
    var_19 = (!var_6);

    for (int i_2 = 1; i_2 < 10;i_2 += 1)
    {
        arr_7 [i_2] = (arr_1 [i_2 - 1] [i_2]);
        var_20 -= var_9;
        var_21 = (arr_1 [i_2] [i_2]);
        var_22 ^= ((~(arr_1 [i_2] [i_2])));
        arr_8 [i_2 - 1] = (arr_6 [i_2 + 2] [7]);
    }
    #pragma endscop
}
