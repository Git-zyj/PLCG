/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = (((((~var_7) ^ var_18)) ^ ((~((var_7 ? (arr_0 [i_0]) : var_11))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_20 = ((((((arr_0 [i_0 + 3]) ? (arr_6 [i_0] [i_0 + 1] [i_0] [i_0]) : (arr_6 [i_0] [i_0 - 1] [i_2] [i_2])))) ? (((-(arr_0 [i_0])))) : (4 + var_15)));
                    arr_8 [i_0] [i_1] [i_2] = ((((-((min(39589, (arr_5 [i_0])))))) > (min(((16307 ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : var_14)), (~var_12)))));
                    var_21 = (min(((((((450 ? var_13 : (arr_4 [i_0] [i_1 + 2] [i_2])))) ? (var_15 & 66) : (((max((arr_6 [i_2] [i_1] [i_0] [i_0]), var_12))))))), (((var_15 == var_11) ? (arr_1 [i_0] [i_2]) : 1377229607))));
                }
            }
        }
        var_22 = 0;
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        var_23 = ((((((~var_4) ? var_11 : 92156211))) ? (min(((max(0, var_14))), ((var_12 % (arr_2 [i_3]))))) : ((((!1) == ((~(arr_11 [i_3]))))))));
        arr_12 [i_3] = (arr_11 [i_3]);
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        arr_16 [i_4] [i_4] = (((arr_13 [i_4] [i_4]) % (arr_13 [i_4] [i_4])));
        var_24 = (!var_0);

        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            var_25 = (arr_14 [i_4]);
            arr_19 [i_4] [i_5] [i_4] = 66;
            arr_20 [i_5] [i_4] = (((((~(arr_14 [i_4])))) ? 0 : (16847006775475533689 && 251)));
        }
    }
    for (int i_6 = 1; i_6 < 21;i_6 += 1)
    {
        var_26 = ((-(((arr_22 [i_6 - 1]) ? ((min((arr_22 [18]), 0))) : (~var_16)))));
        var_27 = ((-(max((((arr_22 [i_6]) ? (arr_21 [i_6] [i_6]) : -108)), (((arr_24 [i_6]) ? (arr_21 [i_6] [i_6]) : (arr_21 [i_6] [i_6])))))));
    }
    var_28 = var_7;
    #pragma endscop
}
