/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        arr_4 [i_0 - 2] [i_0] = (9289459320803847290 - -1329055062);
        var_14 = (((~(243738915518694902 || var_1))));
        var_15 &= var_2;
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            {
                arr_9 [i_2] [i_2] [i_2] = var_8;
                var_16 = arr_8 [i_1] [i_1];
            }
        }
    }
    var_17 = var_0;
    #pragma endscop
}
