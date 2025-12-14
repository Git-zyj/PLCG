/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = var_3;

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_18 = ((~((((var_16 ? var_0 : var_4)) ^ (var_4 <= var_11)))));
                        var_19 = (min(((var_1 ? var_5 : var_10)), (((889706712 ? (arr_5 [i_0] [i_0] [i_3]) : (arr_5 [i_0] [i_1] [i_2]))))));
                        arr_11 [i_1] = (((arr_9 [i_3] [i_1] [i_2] [i_2] [i_1] [i_0]) ? var_16 : 0));
                        arr_12 [i_1] = (arr_0 [i_1] [i_1]);
                    }
                }
            }
            arr_13 [i_1] = ((!(arr_10 [i_0] [i_0] [i_1] [i_1])));
            var_20 = (var_11 - var_10);
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 0;i_5 += 1)
                {
                    {
                        var_21 = 189;
                        arr_20 [i_4] [17] [i_4] [i_5 + 1] [i_1] = ((((arr_4 [i_0] [i_4] [i_5 + 1]) ^ var_1)) | (((((arr_6 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1]) > var_0)))));
                        var_22 = (max(var_22, var_16));
                        var_23 -= 610549970;
                    }
                }
            }
            arr_21 [i_0] [i_0] [i_1] = var_1;
        }
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            var_24 = (min(var_24, (arr_19 [i_6] [i_6] [i_6] [i_0])));
            var_25 = var_2;
            var_26 = (arr_6 [i_0] [i_0] [i_0] [i_6]);
            var_27 *= (max(((((var_5 | 172) ? var_14 : ((0 ? var_8 : -418356360))))), (((-418356352 ? var_13 : var_7)))));
        }
    }
    var_28 = var_0;
    var_29 = var_15;
    var_30 = (min(var_8, ((max(418356335, var_4)))));
    #pragma endscop
}
