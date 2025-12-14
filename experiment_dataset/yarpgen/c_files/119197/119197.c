/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = ((min((arr_1 [i_0]), (arr_0 [8]))));
        var_15 = var_1;
    }
    var_16 = var_10;

    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_17 = (var_9 + var_4);
        var_18 = ((var_10 ? ((-2062301332 ? var_1 : var_5)) : -99996913));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            {
                                arr_15 [i_5] [19] [i_3] [1] [1] [1] [i_5] = (-99996907 & 1235459154);
                                arr_16 [i_1] [i_2] [i_5] [i_3] [i_4] [i_5] = (((arr_13 [i_2] [i_1] [i_1] [i_4] [i_5] [i_5] [i_1]) != -2445));
                            }
                        }
                    }
                    var_19 = 2120581553;
                }
            }
        }
        arr_17 [i_1] = (((690 ? 3380252880984559111 : var_2)));
        arr_18 [i_1] = var_4;
    }
    #pragma endscop
}
