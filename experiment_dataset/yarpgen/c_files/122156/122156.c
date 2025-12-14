/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122156
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                arr_8 [i_0 - 1] [i_0] [i_0] = var_1;

                /* vectorizable */
                for (int i_2 = 1; i_2 < 7;i_2 += 1)
                {

                    for (int i_3 = 1; i_3 < 7;i_3 += 1)
                    {
                        arr_16 [i_3] [i_3] [i_2 + 1] [i_3] = -1;
                        arr_17 [i_3] [9] [i_2] [i_0 - 3] [i_0 - 3] [i_3] = 2941899590;
                        arr_18 [i_3] = ((~(~var_8)));

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            arr_22 [i_0] [i_1 + 2] [i_2 + 1] [i_3] [i_3] = ((arr_1 [i_2 - 1]) ? (arr_1 [i_2 - 1]) : 511);
                            var_11 = (arr_15 [i_2] [i_3] [i_2 - 1] [i_2 + 2] [i_2 - 1] [i_2]);
                        }
                    }
                    arr_23 [i_0] [i_1] [i_0 - 3] = ((arr_1 [i_0 - 3]) ? 517 : var_6);
                }
                var_12 &= 113626483;
            }
        }
    }
    var_13 = var_3;
    var_14 = (((var_8 ? (4294966795 * var_10) : ((var_9 ? var_5 : var_10)))));
    var_15 = var_3;
    #pragma endscop
}
