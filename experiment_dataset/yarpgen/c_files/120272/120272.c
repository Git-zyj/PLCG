/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_1] = ((((max((arr_1 [i_0]), (arr_1 [i_0])))) && (((var_3 ? ((var_0 ? (arr_3 [i_0] [i_1]) : var_2)) : ((max(1, 1524961946))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_11 ^= 5143818979655722730;
                            var_12 -= ((var_9 << (((((max(1932214561, var_3)) & (arr_9 [i_0] [i_0] [i_2] [i_3]))) - 9295582561125270722))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            {
                arr_16 [i_5] = var_6;
                arr_17 [i_4] [i_4] [i_5] = (((var_7 ? var_0 : var_9)));
                var_13 = (((var_0 + 2147483647) << (max(-75, 0))));
            }
        }
    }
    var_14 |= var_3;

    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        var_15 = (max(var_15, (((47133 ? ((3971439755 << (56 * 0))) : -1450920311)))));
        var_16 = (max(var_16, ((max((-9223372036854775807 - 1), -55)))));

        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            var_17 = (min(var_17, ((min((arr_20 [i_6]), (min(var_10, (((arr_24 [i_6] [i_6] [14]) ? -35 : (arr_22 [i_7]))))))))));
            arr_25 [i_6] [i_6] [i_7] = (max(((49 << (var_5 - 3101983082051692057))), (!var_9)));
            arr_26 [i_6] [i_6] [16] = ((max(-var_4, (((1023 ? 31707 : (arr_21 [i_6] [i_7])))))));
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            var_18 = ((!(-56 <= var_2)));
            var_19 = (max(var_19, -4804783348713273627));
        }
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        var_20 -= ((((min(var_6, var_7))) ? (max((arr_31 [i_9] [i_9]), (arr_31 [i_9] [i_9]))) : (((arr_31 [i_9] [i_9]) ? (arr_31 [i_9] [i_9]) : var_6))));
        arr_34 [i_9] [15] = (((75 - 0) ? (38559 != 3971439755) : ((((arr_33 [i_9] [i_9]) && (arr_33 [i_9] [i_9]))))));
        arr_35 [i_9] = (~-1063638359547274383);
        var_21 = (min(var_21, ((((((-652700109 | 255) - ((0 ? (arr_31 [i_9] [i_9]) : 0))))) ? (((((((arr_32 [i_9]) ? (arr_33 [10] [i_9]) : var_2))) ? ((var_3 ? (arr_32 [i_9]) : (arr_30 [i_9] [i_9]))) : (arr_33 [20] [i_9])))) : (max(var_7, (min(var_8, (arr_30 [i_9] [i_9])))))))));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 10;i_10 += 1)
    {
        var_22 = (var_2 || 1);
        arr_39 [i_10] = (((arr_5 [9] [i_10] [i_10] [i_10]) ? 652700109 : (arr_5 [i_10] [i_10] [i_10] [i_10])));
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 10;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 10;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    {

                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            var_23 &= var_10;
                            arr_50 [i_12] [i_10] [i_12] [i_10] [i_10] &= (((arr_9 [4] [i_12] [6] [i_14]) > (-32767 - 1)));
                        }
                        var_24 -= -5586;
                    }
                }
            }
        }
    }
    var_25 *= var_5;
    #pragma endscop
}
