/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= ((((!var_4) ? (min(229, var_4)) : (var_4 || var_5))));
    var_11 = (min(var_6, var_8));
    var_12 = (((((((var_4 ? var_3 : var_0))) ? (var_4 && var_5) : (((-9223372036854775807 - 1) ? 0 : var_2)))) <= (!0)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_13 [i_4] &= (((max(-1, 93))));
                                arr_14 [i_0] [i_1] [i_0] [i_0] [i_4] = ((((arr_5 [i_0] [i_1] [i_2 + 1] [i_2 + 1]) ? (arr_5 [i_0] [i_1] [i_3] [i_4]) : (arr_5 [i_0] [i_1] [1] [i_3]))));
                                var_13 = ((((arr_12 [i_1] [i_2 - 1] [i_2 + 3] [i_2 + 3]) ? (arr_12 [i_1] [0] [i_2 + 3] [i_2 + 3]) : (arr_12 [i_1] [i_2] [i_2 + 3] [i_2 + 3]))));
                                arr_15 [i_0] [i_1] [i_2] = (arr_9 [i_0] [i_0] [i_1] [i_2 + 3] [i_2 + 1] [1] [i_4]);
                                arr_16 [i_0] [i_1] [i_1] = (min(((max(9064, 9938861154365002247))), (((arr_7 [i_0] [i_1] [i_2] [i_2]) - (min(7, (arr_7 [i_1] [i_2] [i_3] [i_4])))))));
                            }
                        }
                    }
                    arr_17 [i_1] [i_1] [i_2] [i_2] = -var_6;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_14 = (+(((~2147483647) ? ((min(var_1, (arr_21 [i_0] [6])))) : (((arr_22 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0]) ^ 9)))));
                                var_15 = ((8029167093103651247 ? -18 : 1579747181));
                                arr_23 [i_1] [i_5] [i_2 - 1] [8] [i_1] = (max(-27632, 17));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
