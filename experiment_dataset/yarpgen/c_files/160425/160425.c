/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
                {
                    arr_8 [i_0] [i_1] = 20613;

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_11 = (max(var_11, (((-1843344980022327665 ? 1 : (arr_9 [i_3] [i_0 - 1] [i_3] [i_2] [i_1]))))));
                        var_12 = arr_7 [i_0] [i_0];
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_14 [i_4] = (~20613);
                        arr_15 [i_4] = (arr_10 [i_1] [i_2] [4]);
                        var_13 *= ((!(arr_1 [i_0 - 2])));
                    }
                    arr_16 [i_0 - 1] [i_1] = ((4646604806037100347 ? 20613 : (arr_3 [i_0 - 1])));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
                {
                    var_14 += ((var_7 ? var_1 : (arr_3 [i_0])));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_15 = (min(var_15, var_8));
                                arr_27 [i_1] [i_6] [1] [i_6] [i_7] [i_1] [i_5] = ((-(arr_20 [i_0 - 2] [i_0 + 1])));
                                arr_28 [i_6] = (-var_5 ? var_6 : (5995739184666626429 >= 1));
                            }
                        }
                    }
                    arr_29 [i_1] = var_4;
                }
                var_16 += -171462626932957838;
            }
        }
    }
    var_17 += (var_8 > (((-(!9075451127878614523)))));
    var_18 = 30660;
    #pragma endscop
}
