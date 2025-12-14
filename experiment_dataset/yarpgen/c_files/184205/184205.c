/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184205
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_7;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (max(39012, (max(((var_4 ? 0 : var_13)), ((0 << (55579 - 55574)))))));
        var_17 = (max(var_17, (((!((max(var_5, (arr_0 [i_0] [i_0])))))))));

        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            var_18 = (min(var_18, (min((((!(arr_2 [i_1 - 2])))), (min(0, (arr_2 [i_1 - 1])))))));
            var_19 = (max(var_19, (!44862)));
            var_20 = (max(var_20, ((max(var_9, (((26516 > var_11) * ((((arr_6 [i_0] [i_0]) > var_11))))))))));
            arr_8 [i_1] = (((41878 <= 17412) <= ((var_2 ? var_15 : (arr_0 [i_1 - 3] [i_1])))));
        }
        /* vectorizable */
        for (int i_2 = 2; i_2 < 14;i_2 += 1)
        {
            var_21 = ((((var_1 ? var_13 : var_14)) ^ (((arr_6 [i_0] [i_2]) ? var_1 : var_0))));

            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                arr_15 [i_0] [i_0] = var_12;
                var_22 = (min(var_22, (!48717)));
                var_23 = (max(var_23, -65528));
            }
            arr_16 [i_2] [i_0] = (65535 ^ 39019);
        }
    }
    #pragma endscop
}
