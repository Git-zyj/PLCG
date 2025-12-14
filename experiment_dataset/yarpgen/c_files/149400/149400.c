/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_5 ? (((min(2147483647, var_3)) - (max(2147483647, 0)))) : (~var_6)));
    var_15 |= var_11;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_16 = (~var_5);
        var_17 = (55782 ? 255 : (-2147483647 - 1));
        arr_2 [i_0] = ((var_5 ? 1 : var_13));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_18 = (max((((29131 != ((0 ? 32762 : 0))))), 2147483647));
        var_19 = (min(var_19, (((-((-1 ? var_8 : (min(0, var_13)))))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_20 = (((((15603386022419637410 ? 9453107838352561276 : var_6))) ? var_5 : var_4));
                    arr_13 [i_2] [i_2] [i_2] = var_12;
                }
            }
        }
        arr_14 [13] = var_11;
        arr_15 [i_2] [i_2] = var_11;
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                {
                    var_21 = ((((((0 ? 9 : -1121318206411184138)) ? 0 : ((-1 ? -1 : var_1))))));
                    arr_28 [i_5] [i_5] [i_6] = (((0 ? 21542 : 65535)));
                }
            }
        }
    }
    #pragma endscop
}
