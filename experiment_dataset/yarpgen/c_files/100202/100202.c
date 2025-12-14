/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_19 *= ((((((4550380487108809850 | -32) ? ((var_2 ? 42 : var_5)) : (!-43)))) ? (((((-32 ? (arr_2 [i_0]) : (arr_0 [i_0])))) ? 1 : var_13)) : (arr_0 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_20 = ((-32 ? ((9223372036854775807 ? var_17 : var_9)) : (arr_5 [20] [20] [i_1 - 1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_17 [i_1] [i_1] [i_1] [i_1] [20] = ((((max(3358188061278523477, -36)) ? (arr_6 [i_1]) : ((var_16 ? 2346540208324762150 : var_1)))));
                                arr_18 [i_4] [i_1] [i_1] [16] [19] [i_2] = ((-((14 ? (arr_13 [i_1 + 1] [i_1] [7] [i_1] [i_1] [i_1 + 1]) : (arr_8 [i_1] [i_1])))));
                                var_21 = (arr_0 [i_2]);
                                var_22 = (min(var_22, (((var_13 ? ((((arr_8 [i_0] [i_0]) && ((min((arr_10 [i_1] [i_3] [i_1] [i_1]), 36)))))) : (min(2095104, 40)))))));
                            }
                        }
                    }
                    arr_19 [i_0] [i_1] [i_1] = ((((((max(var_4, (arr_14 [12] [12] [12] [12] [i_1] [12] [12]))) - (arr_7 [i_1 - 1] [i_1] [i_0])))) ? (((((min(-2095104, 3298))) ? 4202603537 : -487308339))) : (((arr_7 [i_1 + 1] [i_0] [i_0]) ? 1 : var_3))));
                }
            }
        }
        arr_20 [5] = ((((var_14 < (((248 ? (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : -1529162573408718499))))) ? (((arr_9 [i_0]) ? -3268896013745701364 : 107)) : (!4929101644722690107)));
    }
    for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 2; i_6 < 22;i_6 += 1)
        {
            var_23 = ((27 ? (((((1 ? 111 : 1)) ^ (arr_7 [i_6 + 1] [i_6 - 2] [i_6 + 2])))) : 2945837919));

            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                var_24 = (min(var_24, ((((var_13 | (arr_6 [i_5]))) * 91))));
                var_25 = (max(((((((arr_14 [i_7] [i_7] [i_5] [i_6 - 2] [i_6] [i_5] [i_5]) ? 3582014128 : 134217726))) ? (((23719 ? 60406 : (-32767 - 1)))) : (max(1, (arr_9 [i_6]))))), (max(27, (var_9 - 1744111398)))));
                var_26 = ((-(1460490405 % 11)));
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 21;i_9 += 1)
            {
                {
                    arr_34 [i_9] [i_8] = -50;
                    arr_35 [i_9] = -57;
                    arr_36 [i_5] [i_5] [i_9] = (((((arr_31 [i_8] [7]) | (min(3444103805, (arr_33 [i_8]))))) % (~8330)));
                }
            }
        }
        var_27 = ((((((((var_12 ? var_6 : -652563852453316384))) ? ((min(var_7, (arr_2 [i_5])))) : ((-(arr_13 [i_5] [i_5] [10] [i_5] [i_5] [i_5])))))) / (((~var_0) ^ 850863486))));
        arr_37 [i_5] [i_5] = var_17;
    }
    var_28 = var_6;
    var_29 = (max(var_29, var_16));
    #pragma endscop
}
