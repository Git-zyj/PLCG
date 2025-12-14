/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (5530929225949282201 ? (((var_10 ? (853842904 == var_4) : (min(var_8, var_10))))) : (((-3045 ? var_7 : var_0))));
    var_12 = -3041;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = 592312080;
        arr_3 [i_0] = 248;
        var_13 += ((((var_9 ? (arr_1 [i_0]) : var_10)) * (((-3045 * (arr_1 [i_0]))))));
        var_14 = (((((-3045 ? var_10 : (arr_0 [i_0])))) ? (arr_0 [i_0]) : 694596843));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((-(~var_1)));
        arr_8 [i_1] = (max((((var_2 || ((max(4294967295, 4294967295)))))), (max((arr_4 [i_1] [i_1]), (arr_1 [i_1])))));
        var_15 = (arr_1 [i_1]);
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        arr_13 [i_2] = max((((max(var_6, var_5)))), 4294967267);
        arr_14 [i_2] = (((((~(max((arr_6 [i_2] [i_2]), 513767001077535213))))) ? 103 : (((arr_0 [i_2]) / (arr_12 [i_2])))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_16 = ((arr_18 [i_3]) ? var_5 : (arr_18 [i_3]));

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                var_17 = (((((58158904 ? 0 : 469169416))) ? 17932977072632016402 : 4294967295));
                var_18 = (((arr_20 [2] [i_4]) ? 1869694821 : (arr_21 [i_4])));
                var_19 = (((arr_24 [i_3] [i_4] [i_3] [i_5]) ? (arr_22 [i_5] [i_5] [i_4] [i_3]) : var_7));

                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    var_20 = ((1 ? var_7 : 16380));
                    arr_28 [i_3] [i_3] [i_3] [i_3] = (var_1 - var_6);
                }
            }
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                var_21 = arr_24 [i_3] [i_4] [i_3] [i_4];
                var_22 |= (((arr_21 [i_3]) & (((-83 + 2147483647) >> (-3045 + 3048)))));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 1;i_9 += 1)
                    {
                        {
                            var_23 -= (((arr_33 [i_3] [i_4]) * (arr_20 [i_3] [i_3])));
                            var_24 = (38 | 9391517750406477685);
                            var_25 = ((((4797 | (arr_31 [i_3] [i_4] [i_7] [i_9 - 1])))) ? (((~(arr_24 [i_3] [1] [4] [i_3])))) : (1270272116 ^ 10390653979763134507));
                            var_26 = (max(var_26, 926315819));
                            var_27 = (((4294967295 ? (arr_30 [i_3] [i_4] [i_8] [i_9 - 1]) : -66)));
                        }
                    }
                }
            }
            for (int i_10 = 3; i_10 < 23;i_10 += 1)
            {
                var_28 = (max(var_28, (arr_24 [i_3] [i_4] [i_10] [i_10 - 2])));
                var_29 = ((((((arr_23 [i_3] [i_4]) ? (arr_15 [i_3]) : var_2))) ? 12 : (arr_31 [i_3] [i_10 - 1] [i_10 - 3] [i_10 + 1])));
            }
            var_30 = (arr_18 [i_3]);
        }
    }
    #pragma endscop
}
