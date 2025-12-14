/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((18345 ? 8338969733866477945 : -1)) % var_8);

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_12 ^= ((1 ? 1 : -1070087916));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_13 = (arr_1 [i_0] [i_1]);
            arr_6 [i_1] [i_1] = ((min(-23765, 375966083)));
            arr_7 [i_1] [i_1] [1] = 24274;
        }
        for (int i_2 = 4; i_2 < 24;i_2 += 1)
        {
            var_14 *= (~42586);
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    {
                        arr_16 [i_2] [i_2] [i_2] [i_2] = ((((var_10 ? var_1 : 2420868705)) > 6634));
                        var_15 = (~1070087916);
                        var_16 = ((-8810 + 2147483647) << ((var_9 ? (arr_15 [i_0] [i_0] [i_2 - 1] [i_2] [i_3 - 2]) : (arr_15 [i_2] [i_2] [i_2 - 3] [i_2] [i_3 + 1]))));
                        arr_17 [i_2] = ((var_1 ? (((1 ? -30728 : (((arr_11 [i_2]) ? (arr_8 [i_0] [i_2 - 2] [i_4]) : 20071))))) : ((((min(65409, (arr_14 [14] [6] [22] [i_2])))) ? (!0) : (min(var_10, var_2))))));
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            arr_20 [i_0] [i_0] = (max((((arr_14 [i_0] [i_0] [i_0] [i_0]) ? (arr_14 [i_0] [i_5] [i_5] [i_0]) : 0)), (arr_8 [i_0] [16] [i_0])));
            var_17 = (max(var_17, (((-4723850932935607874 ? (arr_9 [i_0]) : ((((arr_0 [i_0] [i_5]) == 15003))))))));
            arr_21 [i_0] = (((((-(~0)))) ? ((((min((arr_12 [i_0] [i_5] [i_5]), var_2))) ? (arr_1 [i_0] [i_0]) : var_10)) : 63506));
        }
        for (int i_6 = 2; i_6 < 24;i_6 += 1)
        {
            var_18 = (min(((-1521697443 ? 5 : 1)), (arr_11 [i_6])));
            var_19 = (max(var_19, (((((var_5 ? 12582 : var_10)) | 1169915466)))));
            arr_26 [i_0] [i_6] = (max(65530, ((-(arr_18 [i_0] [i_0])))));
            var_20 = ((18323097805235804671 < (((min(1, 1))))));
        }
    }
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                {
                    var_21 += (min((max((arr_9 [i_8 - 1]), var_10)), (((arr_19 [i_7] [i_8 - 1]) * (arr_19 [i_7] [i_8 + 1])))));
                    arr_33 [i_8] [i_9] [i_9] [i_9] = (max(((max((~2147483647), var_8))), (max(((((arr_14 [i_7] [i_7] [i_7] [i_8]) || 1099478073344))), ((1 ? 12109082619533030054 : var_6))))));
                    var_22 = (max((arr_30 [i_7]), (~1141811920)));
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 16;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            {
                                arr_38 [i_7] [i_7] [i_9] [i_9] [i_9] &= 45442;
                                var_23 += (min((!2439531962), ((((((arr_27 [i_7]) ? var_9 : (arr_4 [i_7] [i_8])))) ? ((var_3 ? var_3 : var_4)) : (32746 + 1479236767)))));
                            }
                        }
                    }
                }
            }
        }
        arr_39 [8] = ((var_9 * ((-18446742974231478270 ? 45442 : (arr_18 [i_7] [i_7])))));
    }
    var_24 = var_1;
    #pragma endscop
}
