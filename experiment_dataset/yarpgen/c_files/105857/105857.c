/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_4 ? var_9 : var_14));

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                var_17 = var_6;
                var_18 = (min(var_18, (var_2 / var_2)));
            }
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                var_19 = (max(var_19, (((var_10 ? var_10 : ((1 ? var_12 : (arr_11 [i_0 + 3] [i_1] [i_3]))))))));
                var_20 = var_13;
                var_21 = (((!var_4) ? -22749 : var_10));
                var_22 = (((((arr_2 [i_3]) ? var_4 : var_9)) | (arr_2 [i_0 - 1])));
            }
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                arr_14 [i_0] [i_0] [i_1] [i_4] = (var_2 ? var_1 : var_15);
                var_23 = ((0 ? (arr_12 [i_0 - 2] [i_0 + 1] [i_0 - 1]) : (((var_1 ? var_3 : var_12)))));
                var_24 = var_4;
                var_25 = var_10;
            }
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                var_26 = (((((3163 ? var_0 : var_13))) ? var_4 : ((3358 ? 1 : -3142))));
                arr_17 [i_0] = (((arr_8 [i_0 + 3] [i_1] [i_5] [i_5]) / 3163));
                var_27 |= var_2;
            }
            var_28 = (-((var_8 ? var_9 : var_3)));
            arr_18 [i_0 + 2] [i_1] = ((var_3 ? (var_8 == 22745) : ((var_10 ? 1 : var_5))));
        }
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            arr_22 [i_6] = ((((((max(var_0, var_13)) / var_1))) ? (((((((arr_11 [i_0] [i_0] [i_6]) ? 1 : var_14)) == (arr_3 [i_0] [i_0 + 2]))))) : (max((arr_16 [i_0 - 1]), 1))));
            arr_23 [i_6] = 10;
        }
        var_29 = var_15;
        arr_24 [i_0] [i_0] = (arr_7 [i_0 - 2] [i_0 - 1] [i_0 + 1]);
    }
    var_30 = ((var_1 ? ((~((var_2 ? -3164 : -72)))) : (~1663)));
    #pragma endscop
}
