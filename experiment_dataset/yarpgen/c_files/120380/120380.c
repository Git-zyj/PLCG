/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_13 = 2093183577;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_14 = ((2370513552511590460 ? -3630 : ((~(min((arr_8 [i_0] [i_0] [i_2] [i_2]), (arr_10 [i_0] [i_0] [5] [i_0] [i_0])))))));
                            var_15 -= min((((((-(arr_0 [i_1] [i_1]))) <= var_6))), -var_2);
                        }
                    }
                }
                var_16 = (arr_3 [16] [16] [2]);
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        {
                            var_17 = ((~((-(arr_15 [i_0])))));
                            arr_17 [i_0] [2] [i_4] [1] [i_0] = max((((-(arr_2 [i_0] [i_0])))), var_10);
                            arr_18 [i_0] [i_1] [13] [i_0] = ((-var_9 ? (min((16384 % -3630), 1262888884)) : -3623));
                        }
                    }
                }
            }
        }
    }
    var_18 = ((((max(-var_11, ((var_9 ? var_6 : var_11))))) ? var_4 : ((((var_0 <= 28519) ? var_6 : 3629)))));
    var_19 = var_7;

    /* vectorizable */
    for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
    {
        var_20 = (min(var_20, ((((arr_4 [i_6] [i_6]) ? (((arr_10 [i_6] [i_6] [i_6] [12] [i_6]) ? (arr_11 [i_6] [i_6] [i_6] [i_6] [12]) : var_3)) : var_0)))));
        var_21 ^= (arr_9 [i_6] [7] [i_6] [1] [i_6]);
        var_22 = ((var_10 ? var_4 : (arr_0 [i_6] [i_6])));
    }
    for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
    {
        var_23 = (min((((arr_9 [i_7] [i_7] [i_7] [i_7] [i_7]) ? (arr_9 [i_7] [i_7] [i_7] [i_7] [i_7]) : 3604)), (((44314 >= ((12 ? 3629 : var_9)))))));
        var_24 = ((min(var_6, 3629)));
        var_25 &= (var_7 ? (arr_0 [i_7] [i_7]) : (min((arr_0 [i_7] [i_7]), 1533875943081406661)));

        for (int i_8 = 1; i_8 < 14;i_8 += 1)
        {
            var_26 = ((~((-(arr_10 [i_7] [i_8] [i_8 + 1] [i_8] [17])))));
            var_27 ^= (((-1563054040 ? (arr_19 [i_8 + 1] [i_8 + 1]) : (arr_19 [i_8 + 1] [i_8]))));
            var_28 ^= var_0;
        }
    }
    for (int i_9 = 0; i_9 < 19;i_9 += 1)
    {
        var_29 = 1;
        var_30 = (arr_28 [i_9] [i_9]);
        arr_29 [i_9] = (((((arr_28 [i_9] [i_9]) ? (min((arr_28 [2] [i_9]), var_10)) : (((~(arr_28 [i_9] [i_9]))))))) ? (((max((min((arr_27 [i_9] [i_9]), (arr_27 [i_9] [i_9]))), var_9)))) : (((-3630 * var_8) ? (arr_27 [i_9] [i_9]) : (min(2980934559, (arr_27 [i_9] [i_9]))))));
    }
    #pragma endscop
}
