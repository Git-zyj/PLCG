/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [14] = (((((var_11 / (arr_1 [i_0])))) ? (((-0 ? (arr_0 [i_0]) : ((var_1 ? 0 : (arr_0 [i_0])))))) : ((var_5 + (!84)))));
        var_12 = var_8;
    }
    for (int i_1 = 1; i_1 < 23;i_1 += 1)
    {
        var_13 |= ((arr_3 [i_1] [i_1]) ? (var_6 + 1313519626) : (((65531 && (arr_3 [i_1] [i_1])))));
        var_14 = (min(((2032357213 ? -2032357213 : var_10)), (var_11 & var_0)));
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                {
                    var_15 = (max((((var_9 <= (arr_8 [i_2] [i_3] [i_4])))), ((((min(6, var_4))) ? ((((arr_1 [i_4]) % var_11))) : 5103))));
                    arr_14 [i_4] [i_3] [i_4] = 0;
                    var_16 &= var_11;
                    var_17 = (var_10 | -612678014);
                    var_18 = (arr_3 [i_4] [i_4]);
                }
            }
        }
        var_19 = (arr_0 [i_2]);
        var_20 = ((var_2 <= 95) ? ((((max(5333531457772084290, var_11))) ? (((14 ? (arr_0 [14]) : (arr_11 [i_2] [i_2] [i_2])))) : 3482907739693910242)) : ((((19 || (arr_1 [i_2]))))));
    }
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            arr_21 [i_5] [i_5] [i_6] = (min(-84, 4194302));
            var_21 = (min(var_21, (((!(((~(arr_15 [i_6] [i_5])))))))));

            for (int i_7 = 1; i_7 < 14;i_7 += 1)
            {
                var_22 = (var_0 ? var_8 : 10736);
                arr_24 [i_6] [i_5] = (((~38640) ? 64 : (min(65530, ((var_3 ? (arr_0 [i_6]) : var_2))))));
            }
        }
        var_23 = (min(var_23, var_4));
        var_24 = (((((arr_10 [i_5] [i_5] [i_5] [i_5]) ? 65528 : -var_2)) >= ((((((arr_4 [i_5]) | (arr_1 [i_5])))) - (max(5861324391165982353, (arr_12 [i_5])))))));
    }
    var_25 = (((var_1 ? ((var_9 ? var_0 : -7942)) : 18320203972734035463)));
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 25;i_8 += 1)
    {
        for (int i_9 = 2; i_9 < 23;i_9 += 1)
        {
            {
                var_26 = (max(var_26, 25261));
                var_27 = (((((((((arr_28 [i_8]) || 6))) >> (((max((arr_27 [i_8]), (arr_1 [i_8]))) + 23720))))) ? (((max(var_5, 65507)))) : (((arr_26 [i_9 + 2] [i_9 + 2]) ? (arr_26 [i_9 - 2] [i_9 - 2]) : 8))));
                arr_31 [i_9] [i_9] [i_9] = ((var_7 ? (arr_0 [i_8]) : (min((arr_28 [i_9]), 265))));
            }
        }
    }
    #pragma endscop
}
