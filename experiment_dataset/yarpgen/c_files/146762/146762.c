/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_16 = ((((((arr_1 [i_0]) ? (arr_0 [i_0]) : var_2))) + (arr_2 [i_0])));
                    arr_7 [i_0] = (((var_9 <= var_5) / (arr_6 [i_1] [i_0])));
                }
            }
        }

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    {
                        var_17 = ((((var_0 ? var_3 : (arr_4 [i_0] [i_0] [i_0]))) <= (arr_4 [i_3] [i_4] [i_0])));

                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            var_18 = var_1;
                            var_19 = (((arr_1 [i_0]) || (arr_1 [i_0])));
                        }
                    }
                }
            }
            var_20 ^= (arr_14 [i_3] [i_0] [i_3] [i_0] [i_0]);
        }
        var_21 = (((arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) || var_8));
        var_22 = (((((arr_6 [i_0] [i_0]) ? var_4 : (arr_9 [21] [i_0] [i_0])))) ? (arr_0 [i_0]) : ((var_6 ? var_4 : (arr_2 [i_0]))));
    }
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        var_23 = (arr_8 [i_7] [i_7]);
        var_24 = var_2;

        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            var_25 = ((44832 ? 530900996 : -11359));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 16;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 14;i_10 += 1)
                {
                    {
                        var_26 = ((!(((arr_5 [i_7] [i_10 + 2] [i_7]) == (max(var_10, var_1))))));
                        var_27 = (arr_10 [i_7] [i_7] [i_10 + 2] [i_10]);
                        var_28 = var_0;
                        var_29 = ((((arr_14 [i_10 - 1] [i_10 - 1] [i_10 + 2] [i_10 + 2] [i_9]) | var_7)));
                        var_30 = (+((var_0 ? (arr_26 [i_9] [i_7] [i_9] [i_7] [i_8] [i_10 - 2]) : var_10)));
                    }
                }
            }
        }
    }
    var_31 = var_8;
    #pragma endscop
}
