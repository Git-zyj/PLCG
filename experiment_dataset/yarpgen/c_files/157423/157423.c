/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_13 = ((!(arr_3 [i_0])));
        arr_4 [i_0] = var_4;

        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            arr_8 [i_1 - 3] [i_1 - 3] [6] = ((1 | (max((((var_6 ? (arr_7 [i_0]) : var_0))), var_2))));

            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                arr_11 [i_0] [i_1 - 2] [i_2] = (min((arr_1 [i_0 + 1]), (arr_3 [i_1])));
                var_14 += (arr_5 [i_0] [i_0 + 1] [i_0]);
            }
            for (int i_3 = 4; i_3 < 12;i_3 += 1)
            {
                arr_14 [4] [5] [i_1] [12] = (!-var_0);
                arr_15 [i_0 - 1] [i_1] [i_1] = (((-17376 ? 34 : -1)));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 9;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 11;i_5 += 1)
                    {
                        {
                            var_15 = var_10;
                            var_16 = (((min((max((arr_0 [7] [7]), var_7)), (arr_2 [5] [i_4 + 4]))) <= (var_0 * -var_9)));
                        }
                    }
                }
            }
            var_17 = ((((((((min(var_8, (arr_0 [i_0] [i_0])))) | (min(var_7, (arr_18 [i_1] [10] [i_1] [3]))))) + 9223372036854775807)) << (var_8 < var_8)));
        }
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            arr_23 [i_6] = ((((((arr_19 [i_6] [i_6] [i_0] [i_0] [i_0] [i_0]) || (~526699257)))) & var_3));
            arr_24 [i_6] [i_6] [3] = var_8;
        }
        var_18 = (((((-(arr_17 [i_0 - 1] [i_0 - 2] [i_0 + 2] [i_0 + 2])))) ? ((var_9 ? (max(121, 13904638004244337595)) : (((((arr_3 [i_0]) != var_7)))))) : var_3));
        arr_25 [i_0] = ((((((max((arr_20 [i_0] [0] [2] [i_0] [i_0]), var_0))) <= var_6)) ? -var_5 : ((~((((arr_3 [i_0]) != (arr_7 [i_0]))))))));
    }
    var_19 += (min(17376, ((0 ? (-1 + var_10) : ((var_5 ? var_6 : var_7))))));

    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        arr_29 [i_7] = var_10;
        arr_30 [i_7] = var_1;
        arr_31 [i_7] = (max((((arr_27 [i_7]) ? 1655866457 : var_3)), (arr_27 [i_7])));
    }
    var_20 = (min(var_1, (~242)));
    #pragma endscop
}
