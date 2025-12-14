/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((!((((98 ? var_9 : var_7))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (((((var_8 + (((-126 * (arr_4 [21]))))))) ? (((!-1) ? (arr_2 [i_0]) : (!var_7))) : (arr_2 [i_0 - 2])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_15 [i_3 + 1] [i_3 + 1] [i_2] [16] [i_0] = (((((((arr_1 [i_0] [i_1 - 1]) / var_4)) * (min(-125, (arr_3 [15] [i_1]))))) - (((((arr_5 [i_3 + 2] [i_2] [i_0]) >= 123)) ? 227 : 487))));

                            /* vectorizable */
                            for (int i_4 = 2; i_4 < 23;i_4 += 1)
                            {
                                var_11 = (min(var_11, 167));
                                var_12 = (((var_0 < var_6) | (arr_19 [i_4 - 1] [i_4 - 2] [15] [i_2] [i_4] [i_3 + 3] [i_2])));
                                var_13 = ((((((arr_3 [i_2] [i_2]) != (arr_10 [i_2] [i_3 + 3] [i_2] [i_3 + 3])))) + ((-482 + (arr_8 [i_0] [i_2] [i_2] [i_3])))));
                                arr_20 [i_0] [i_1] [i_0] [i_0] [8] [i_3 + 2] [i_4] = (((arr_2 [i_2]) - (100 && -506)));
                                arr_21 [i_0] [i_1] [i_2] [i_1] [i_4 - 1] |= ((((-488 ? -1428475942 : 3108813912)) / (1 && var_2)));
                            }
                            var_14 = (arr_0 [i_2]);
                        }
                    }
                }
            }
        }
    }
    var_15 = -10;
    #pragma endscop
}
