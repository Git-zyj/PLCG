/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163009
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_17 = var_12;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0 + 1] [i_0] [i_0] = var_12;
                    arr_11 [i_0] [i_1] [i_2] [20] = (((var_6 && var_10) ? var_7 : ((((arr_3 [i_0 - 2]) && var_3)))));
                    var_18 ^= ((arr_7 [i_2 + 1] [i_0 - 1] [i_2]) ? (arr_1 [i_2]) : var_9);
                    var_19 = arr_7 [i_2] [11] [i_2];
                }
            }
        }
    }
    for (int i_3 = 4; i_3 < 14;i_3 += 1)
    {
        arr_14 [i_3] = (arr_4 [i_3] [i_3 - 4]);
        arr_15 [i_3] [i_3] = (max(114, 116));
        var_20 = ((var_14 ? var_10 : ((((max(var_9, var_10))) ? var_15 : ((max(var_1, var_8)))))));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 13;i_5 += 1)
            {
                {
                    var_21 += (arr_3 [i_4]);
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 14;i_7 += 1)
                        {
                            {
                                var_22 = (((((114 ? (var_4 * -17) : (arr_21 [i_3] [i_4 - 1] [i_3 - 1] [i_5 + 1] [11])))) && var_0));
                                arr_25 [i_7] [i_6 + 1] [i_6] [i_4] [i_3] = ((((max(34223108, 7828337964925596135))) ? (((arr_7 [i_3] [i_3] [i_3]) | (arr_23 [i_7] [i_4] [i_6] [i_5 + 3] [i_4] [i_3]))) : (min((((arr_21 [i_3] [i_3] [i_5] [i_3] [i_7]) ? var_7 : -34223108)), (arr_4 [i_4 - 1] [i_6 - 1])))));
                            }
                        }
                    }
                    arr_26 [i_3] [i_3 + 1] [4] = var_1;
                    var_23 = (max(var_23, ((max(((((arr_9 [i_4 - 1] [i_3 + 1]) / 74))), (((arr_3 [i_4]) ? (var_16 >= 3067800532) : (max(186, (arr_5 [i_5]))))))))));
                }
            }
        }
        var_24 -= ((((min(-16, 12))) ? ((max((((arr_6 [6] [i_3] [i_3]) ? var_12 : var_7)), (arr_19 [i_3] [13] [2])))) : (max((arr_21 [i_3] [i_3] [i_3 + 1] [i_3 + 1] [i_3]), (arr_21 [i_3] [i_3] [i_3 - 1] [i_3] [i_3])))));
    }
    var_25 = (((((1 ? -6619040573692536468 : 35))) ? (max((min(18446744073709551601, 5678538157343973198)), (183017215 - 219))) : var_2));
    #pragma endscop
}
