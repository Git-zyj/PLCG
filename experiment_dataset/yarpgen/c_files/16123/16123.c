/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= var_0;

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0 - 1] = (((arr_0 [i_0 - 1]) << (var_2 - 60)));
        var_16 = (max(((+(((arr_0 [i_0 + 1]) & (arr_0 [i_0 - 1]))))), var_10));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_13 [i_3] [i_2] [i_2] [i_0 - 1] = var_13;
                        var_17 = max(2943994219, 3396);
                        var_18 = (-((-15096 ? 0 : 13366)));
                        arr_14 [i_3] [i_2] [i_2 - 1] [i_2] [i_0 - 1] = (max((max((arr_0 [i_0 + 1]), var_0)), ((var_2 << (var_13 + 67)))));
                    }
                }
            }
        }
        var_19 = (min(var_19, (((((((arr_1 [i_0 - 1]) / var_13))) ? ((-2111504042 + (arr_0 [i_0 + 1]))) : ((var_8 ? var_7 : (arr_2 [i_0 - 1]))))))));
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        var_20 -= (((min(var_7, (arr_15 [i_4]))) | (arr_15 [i_4])));
        var_21 = (max(((~((max(var_9, var_6))))), 16311));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 21;i_6 += 1)
            {
                {
                    var_22 = var_13;
                    var_23 = (max(var_23, (((10187 && (arr_20 [i_4] [i_5]))))));
                }
            }
        }
        var_24 = ((var_13 ? var_1 : var_3));
        arr_23 [i_4] = arr_22 [i_4] [i_4] [i_4];
    }
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        var_25 *= var_9;
        var_26 = (max(var_26, ((min(4089808506, var_13)))));
    }
    #pragma endscop
}
