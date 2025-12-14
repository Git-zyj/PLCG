/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, -5602673420764689669));
    var_18 = ((!(!var_3)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_19 = (max((((arr_12 [i_0] [i_0] [i_2]) ? (max(var_5, 85)) : 48)), (((28453 ? (arr_11 [i_0 + 1] [i_0 + 1] [i_2] [i_3] [i_4 - 1]) : var_3)))));
                                var_20 = (((((-23 ? -49 : 67239439))) && ((((max((arr_7 [i_0] [i_2] [i_3] [i_4]), 14941502264154942395)) * 17489757602678819858)))));
                            }
                        }
                    }
                    var_21 = ((((((arr_5 [i_0] [i_0] [i_0 + 1] [i_0]) * -var_6))) ? (((((var_2 ? (arr_13 [i_2] [2] [i_0] [i_0] [i_0]) : 5504))) ? (774547310 <= var_13) : ((5504 ? 16 : var_9)))) : var_10));
                }
            }
        }
    }
    var_22 = ((var_5 | ((-(~var_5)))));

    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        var_23 -= (arr_16 [i_5]);
        var_24 = 8758;
    }
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        var_25 = ((95 ? 0 : 11));
        var_26 = (((-1 * 18446744073709551615) ? ((((((var_10 ? var_9 : (arr_18 [i_6] [i_6])))) ? (arr_18 [i_6] [i_6]) : (~0)))) : var_1));
        var_27 = (min(var_27, ((max((arr_18 [i_6] [i_6]), (((arr_18 [8] [i_6]) + (arr_18 [i_6] [i_6]))))))));
    }
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {

        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            var_28 = (((((((arr_12 [i_7] [i_8] [i_7]) ? (arr_12 [i_8] [i_7] [i_7]) : (arr_12 [i_7] [i_7] [i_7]))) + 2147483647)) >> (3824486554 - 3824486533)));
            var_29 = var_7;
        }
        for (int i_9 = 3; i_9 < 9;i_9 += 1)
        {
            arr_26 [i_7] = 27;
            var_30 = (max(var_30, ((((!var_4) ? ((max(var_4, var_0))) : (arr_8 [i_7] [8] [i_7]))))));
            var_31 = (~var_16);
        }
        var_32 *= ((((max(6902096543968096693, var_8))) ? (max((arr_6 [i_7] [i_7] [i_7] [i_7]), ((~(arr_7 [13] [i_7] [i_7] [13]))))) : (((((arr_1 [i_7]) <= (arr_1 [i_7])))))));
    }
    #pragma endscop
}
