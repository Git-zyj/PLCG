/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((((var_4 ? var_11 : var_9)) & (var_10 - var_5))) / ((max(var_5, (max(var_7, var_11)))))));
    var_14 -= (var_6 <= ((((var_5 ? var_9 : var_4)) * var_2)));
    var_15 = (min(28197, -24653));

    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        var_16 -= var_11;

        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                var_17 = var_12;
                var_18 = (max(((((max(var_6, var_6))) ? (var_3 && var_0) : ((min(var_5, var_11))))), (((((var_8 ? (arr_3 [i_0] [i_1] [i_0]) : var_6))) ? (66 <= 1952078474) : ((max((arr_0 [i_0 - 2]), var_0)))))));

                for (int i_3 = 1; i_3 < 22;i_3 += 1)
                {
                    var_19 += ((!((((arr_2 [i_0 - 3] [i_0 - 2] [i_3 + 2]) ? var_2 : var_8)))));
                    var_20 = 55133;
                    arr_9 [i_2] [i_2] [i_0] [i_1] [0] [i_0] = (arr_8 [i_0] [i_0] [i_1 + 2] [1] [i_1 + 2] [i_3 - 1]);
                    var_21 = (min(-1, 63));
                }
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        arr_16 [i_0] [i_0] [i_0] [5] [i_5] = (((((((var_3 ? var_5 : var_0)) >= (var_2 - var_5)))) < var_5));
                        var_22 *= (var_8 | var_0);
                        arr_17 [i_0 - 3] [i_0 + 1] [i_2] [i_4] [15] [14] = ((((((((arr_0 [18]) * var_3))) ? var_3 : (((arr_12 [i_0] [i_2] [i_4] [i_5]) ? (arr_4 [i_2]) : (arr_8 [i_0] [i_0] [i_0 - 1] [3] [3] [i_0 - 2]))))) >= var_2));
                        var_23 = ((var_9 ? (arr_7 [i_1] [21] [i_1] [12] [i_0] [i_0]) : (max((var_4 - var_11), (((arr_6 [i_4] [i_2] [i_1]) ? var_11 : var_5))))));
                    }
                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 23;i_6 += 1)
                    {
                        arr_21 [i_0] [i_0] [i_0] [i_2] [i_4] [i_4] [i_6 - 1] = (((arr_6 [i_4] [i_2] [i_0 - 3]) / (arr_6 [i_2] [i_1 - 1] [12])));
                        arr_22 [i_0 - 2] = (((!var_0) >= var_4));
                    }
                    arr_23 [i_4] [i_2] [i_1] [23] = ((!((min(((var_9 ? var_3 : (arr_7 [i_0 - 2] [i_4] [i_4] [i_4] [i_2] [i_2]))), (!var_11))))));
                }
                for (int i_7 = 1; i_7 < 21;i_7 += 1)
                {
                    arr_27 [i_0] [i_1] [18] [i_7] = max(var_0, ((((arr_13 [i_0 - 1] [i_1 + 3] [i_7 + 2] [1]) / ((min((arr_0 [i_0]), var_2)))))));

                    for (int i_8 = 3; i_8 < 23;i_8 += 1)
                    {
                        arr_30 [i_8 - 3] [i_8] [i_8] [21] [i_8] = (min(((((var_11 || (arr_25 [i_0 - 3] [i_0 - 3] [18] [i_8]))) ? ((var_5 ? var_2 : var_7)) : var_12)), (max(var_0, (arr_1 [i_0 + 1])))));
                        arr_31 [14] [i_8] [i_7] [8] [i_1 + 4] [8] [i_0] = ((((min(((max((arr_12 [i_2] [i_2] [20] [12]), (arr_10 [i_7] [1] [i_8])))), (max(var_4, var_8))))) ? ((((min(var_12, var_0))) * var_4)) : var_0));
                    }
                }
            }
            var_24 = var_1;
            var_25 = (max(var_25, ((((((((var_1 <= (arr_15 [i_0] [i_0] [i_0 + 1] [i_1] [i_1] [i_0 + 1])))))) ? (arr_15 [i_0] [5] [i_0] [i_0 + 1] [i_1] [i_0]) : (max(((max((arr_8 [1] [5] [i_1] [5] [5] [i_0]), (arr_20 [i_1 - 2] [i_0 - 3] [i_0])))), var_8)))))));
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            var_26 = var_3;
            var_27 = ((((1952078475 <= (-9223372036854775807 - 1))) || var_2));
        }
        var_28 *= (min(((~(~var_6))), ((min((max((arr_33 [i_0] [i_0 + 1]), (arr_29 [i_0] [i_0] [i_0 - 1] [i_0] [i_0]))), (arr_20 [i_0 - 3] [i_0 + 1] [i_0 - 3]))))));
    }
    var_29 = ((((min(var_9, var_4)))) * var_3);
    #pragma endscop
}
