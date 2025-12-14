/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = ((~(max((33 ^ -1), 242))));
        arr_4 [i_0] [i_0] = (arr_2 [i_0]);
        arr_5 [i_0] = (((((~(~-4918734288910020273)))) ? (231 ^ -92) : ((((var_11 << (8 - 8))) << (48 - 48)))));
        arr_6 [i_0] [i_0] = ((+(min((arr_0 [i_0]), var_2))));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_13 = (max(var_13, var_11));
            arr_10 [i_0] [i_0] = (((13 + 70) ? (((var_4 ? -1 : 14))) : var_8));
            arr_11 [i_0] [i_0] [i_1] = 13;
        }
        for (int i_2 = 1; i_2 < 17;i_2 += 1)
        {
            arr_14 [i_2] = (((((arr_8 [i_2 - 1]) ? 53025 : (arr_12 [i_2] [i_2 - 1] [i_2]))) + ((63 - (arr_12 [i_2] [i_2] [i_0])))));
            arr_15 [i_2] = 3845351962;
        }
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            arr_25 [i_0] [i_5] [i_6] [i_5] [i_6] [i_6] [i_4] = var_4;
                            arr_26 [i_6] [i_3] [i_6] [i_4] [i_0] [i_6] [i_3] = ((242 << (arr_17 [i_3] [i_4] [i_5])));
                            arr_27 [i_5] [i_5] [i_5] [i_5] [i_6] = (max((((max(12510, -73)))), (((0 ? (arr_7 [i_0] [i_4] [i_0]) : 0)))));
                        }
                    }
                }
            }
            var_14 = (!((((0 + var_8) ? (arr_16 [i_3]) : var_6))));
        }
    }
    /* vectorizable */
    for (int i_7 = 2; i_7 < 24;i_7 += 1)
    {
        var_15 = (239 + var_8);
        arr_30 [i_7 - 1] = (var_1 | -22597);
        var_16 = (((!1) == var_10));
        arr_31 [i_7] = (((arr_28 [i_7 - 2]) ? 13853762326933401150 : var_4));
    }
    var_17 = var_8;
    var_18 = (!var_0);
    var_19 = 45;
    #pragma endscop
}
