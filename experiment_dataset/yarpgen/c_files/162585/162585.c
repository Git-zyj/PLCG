/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_11 = (min(((575334852396580864 == ((-575334852396580864 ? 7086001471099381582 : 0)))), ((((min(31744, var_7))) || (575334852396580882 / var_1)))));
                    var_12 = min(var_3, (((((575334852396580851 ? var_8 : 31730)) << (((var_3 ^ var_9) - 2130450101))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2 - 1] [i_4] [i_0] [i_3] = (min(((min((min(var_4, -31745)), var_10))), (min((min(var_7, var_4)), (((255 ? -575334852396580864 : 400302866)))))));
                                arr_16 [i_0] = ((-1 != ((var_7 ? (31742 % -38) : 4058687406))));
                            }
                        }
                    }
                    var_13 = (((-127 - 1) / 575334852396580864));
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_14 &= ((!(((((min(var_3, 1))) ? 25 : var_0)))));
        var_15 = var_8;
        arr_19 [i_5] [i_5] = max(var_4, ((var_5 ? var_8 : ((var_8 ? var_5 : var_10)))));
        var_16 ^= var_9;
    }
    var_17 = (((((min(var_9, var_4))) ? ((max(3, 400302866))) : (4096 ^ 2542594783))) | (!575334852396580863));
    #pragma endscop
}
