/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120582
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_11 = ((0 ? var_3 : (arr_1 [i_0])));
        var_12 = (min(var_12, var_6));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_13 = (!var_2);

            for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
            {
                var_14 |= (!12770);
                var_15 *= var_5;
            }
            for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
            {
                var_16 = (((~var_3) / var_8));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_17 = ((183 ? (arr_0 [8]) : 65533));
                            var_18 -= 8;
                            var_19 -= ((511 * (arr_0 [i_0])));
                        }
                    }
                }
                arr_17 [i_3] [i_3] = (((arr_16 [i_0] [i_0] [i_3] [5] [i_3]) ? 1974 : (arr_3 [i_0] [i_1] [i_3])));
            }
            var_20 = (max(var_20, (((28610 ? 15 : -1)))));
        }
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            var_21 = (arr_15 [i_6] [i_0] [i_0] [i_6] [i_6]);
            arr_22 [i_0] [i_0] |= (123 / -1);
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            arr_25 [i_7] = (((arr_3 [i_0] [i_7] [i_7]) ? 458837931 : 1));
            var_22 = (max(var_22, ((var_5 ? ((var_9 ? var_2 : 6)) : ((var_3 ? var_3 : 0))))));
        }
    }
    var_23 = var_8;
    #pragma endscop
}
