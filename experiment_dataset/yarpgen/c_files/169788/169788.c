/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((+((0 ? (var_0 / var_7) : var_9))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_12 = ((!(arr_0 [i_2])));
                    var_13 = (min(1, 41402));
                    var_14 = (min((arr_0 [i_0]), (((arr_4 [i_0] [i_0] [i_0 + 3] [i_0 + 3]) ? var_2 : var_0))));
                    var_15 = (min(var_15, ((((!(arr_2 [i_0 - 1] [i_0])))))));
                    var_16 = (var_2 ? (((!(((93 * (arr_4 [i_0] [i_1] [i_1] [1]))))))) : (((((arr_4 [i_2] [i_2] [i_1] [i_0]) ? (arr_0 [i_1]) : (arr_0 [i_0 - 2]))))));
                }
            }
        }
    }

    for (int i_3 = 2; i_3 < 10;i_3 += 1)
    {
        var_17 = ((21941 % 13) ^ 11283);

        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            arr_12 [i_4] [i_3] [i_3] = ((((min((min(0, var_0)), (!var_9)))) ? (min((!38146), ((-1 ? (arr_4 [i_3] [i_3 + 2] [i_3] [i_3]) : var_1)))) : -11283));
            var_18 = ((var_0 ? (max(var_10, 16384)) : (-11297 % 61849)));
        }
        /* vectorizable */
        for (int i_5 = 2; i_5 < 12;i_5 += 1)
        {
            var_19 = ((var_1 ? (arr_6 [i_5 + 1] [i_3 + 1]) : (var_6 / 8646911284551352320)));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    {
                        arr_21 [i_5] [i_3] [i_5 + 1] [i_5] = var_9;
                        var_20 = (min(var_20, (((var_5 ? var_6 : ((var_1 ? (arr_9 [i_7] [i_3 + 2]) : (arr_14 [i_3] [i_3] [i_3]))))))));
                        var_21 = 11297;
                        arr_22 [i_7] [i_7] [i_5] [i_5] [i_5] [i_3] = 11283;
                        var_22 = ((((18446744073709551613 ? (arr_14 [i_5] [i_6] [i_7]) : -11283)) | (arr_10 [i_5 + 1])));
                    }
                }
            }
        }
        var_23 ^= var_3;
        var_24 = ((-1047651650128131809 && (arr_3 [i_3] [i_3] [i_3])));
    }
    for (int i_8 = 0; i_8 < 17;i_8 += 1)
    {
        arr_26 [i_8] = 13;
        var_25 = (min((~var_6), (max((min(-17, (arr_25 [i_8]))), (-6 != 592601781)))));
        var_26 = (((arr_24 [i_8]) - (arr_24 [i_8])));
    }
    var_27 = var_3;
    var_28 = (!-37768);
    #pragma endscop
}
