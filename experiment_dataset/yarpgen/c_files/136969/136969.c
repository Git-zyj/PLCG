/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_14 = var_1;
        var_15 &= ((var_9 ? (-2147483647 - 1) : 786232226));
        var_16 += (((((-2147483647 ? 13526154868466523332 : -2147483647))) ? -var_4 : (12198346632137183700 - var_3)));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    {
                        var_17 += (min(((-(~var_13))), ((min((min(var_1, var_10)), ((-2147483637 ? -2147483647 : 2420432499)))))));
                        arr_13 [9] [i_2] [9] [i_2] [i_3] [7] = min((((min(2147483646, 1556808432)))), (((min(var_11, var_7)) - var_6)));

                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            arr_18 [10] = (min((var_13 && -2147483646), var_1));
                            arr_19 [i_1] [i_1] [i_1] [9] [i_1] = ((-((-(!var_12)))));
                        }
                        /* vectorizable */
                        for (int i_6 = 3; i_6 < 15;i_6 += 1)
                        {
                            arr_22 [i_6] = var_5;
                            arr_23 [9] [i_6] [i_3] [i_4] [i_6] = ((1583921314 ? 4294967295 : -2147483634));
                            arr_24 [i_1] [i_1] [6] [i_6] [i_6] = (((((25138 ? 1 : 716263272))) && var_6));
                            var_18 = (min(var_18, (((!(((1 ? 1780204861 : 716263272))))))));
                        }
                        var_19 = ((min(1, (min(1368411157, var_8)))));
                    }
                }
            }
        }
        var_20 = ((min(4294967295, ((min(-32753, 1))))) == ((((max(2711045982, 0))))));
        arr_25 [i_1] = (((!((min(-1960372964, 0))))));
    }
    var_21 = (min(var_0, (min((!var_6), (var_5 - 3804311150)))));
    var_22 *= ((((((var_12 - 2147483634) << (((min(-2147483630, 1145384687)) - 1145384656))))) ? var_13 : var_7));
    #pragma endscop
}
