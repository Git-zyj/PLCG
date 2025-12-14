/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (((-((-(max(var_1, var_11)))))))));

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                var_16 += (var_10 == var_3);
                var_17 = var_9;
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 14;i_4 += 1)
                    {
                        {
                            var_18 = (~var_13);
                            var_19 = (var_2 % var_0);
                        }
                    }
                }
            }
            arr_14 [i_0 + 1] [10] = (((var_3 > var_9) << (((~var_12) - 20))));
            var_20 |= var_1;
        }
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            var_21 = ((((-var_11 << (var_5 / var_6))) << (((var_9 + var_13) - 2800411328))));
            arr_18 [i_5] = ((!((max((4497 | 4470), (var_10 * 7604029205859742208))))));
        }
        arr_19 [i_0] = var_3;
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            {
                var_22 = (((var_14 - var_2) / var_2));
                var_23 = (max(var_23, (((-((~(!var_5))))))));
            }
        }
    }
    var_24 |= var_12;
    #pragma endscop
}
