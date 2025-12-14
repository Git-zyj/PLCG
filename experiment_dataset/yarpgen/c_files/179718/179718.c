/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_19 = ((-(arr_1 [i_1] [i_0])));
                var_20 = 10461048148963808709;
            }
        }
    }
    var_21 = ((var_12 ? (max(var_18, (~-28))) : ((-(~0)))));
    var_22 = (max((((((var_14 ? var_8 : var_14)) / var_16))), var_11));

    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_23 = (max(var_23, (((((((arr_5 [i_2]) - (arr_5 [i_2])))) ? ((~(arr_7 [i_2]))) : -2013265920)))));
        var_24 = (max(var_24, 2281701376));
        var_25 = (min((((arr_5 [i_2]) ? (((min(65535, (arr_6 [i_2]))))) : (arr_5 [i_2]))), ((min(var_4, -2281701376)))));
        var_26 = (-2147483647 - 1);
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {

        for (int i_4 = 1; i_4 < 23;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 21;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    {
                        var_27 = (min(var_27, ((min((((arr_8 [i_5 + 1]) ? ((max(52626, 0))) : (max(-607299286, (arr_11 [i_3]))))), ((1 >> (((arr_8 [i_4 - 1]) - 13458)))))))));
                        var_28 = ((-(max((arr_12 [i_6] [i_6]), 2281701376))));
                    }
                }
            }
            var_29 = (((max((arr_14 [i_3] [i_3] [i_4] [i_4 + 1]), (arr_18 [i_4] [i_4 - 1] [i_4 - 1] [i_4 - 1]))) == (!var_1)));
            var_30 = arr_14 [i_3] [i_3] [i_3] [i_3];
        }
        var_31 = (max(var_31, (((-(arr_9 [i_3]))))));
        var_32 = var_7;
    }
    #pragma endscop
}
