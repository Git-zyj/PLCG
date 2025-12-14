/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_19 = (min((arr_4 [i_0 - 1] [i_0 + 3]), (arr_4 [i_0] [i_0 + 3])));
                    arr_7 [i_1] [i_1] [i_2] = var_7;

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_11 [i_1] [i_1] = (arr_2 [i_0 - 1] [i_1]);
                        var_20 = (((min((arr_8 [i_0] [i_0 + 2] [i_0] [i_0] [i_0] [i_0]), (max(288230376151711743, (arr_6 [i_0] [i_0] [i_0 + 3] [i_0]))))) >> (((arr_4 [i_0 + 3] [i_0 + 2]) + 1073186163))));
                    }
                    arr_12 [4] [i_0] [i_1] = 288230376151711743;
                }
            }
        }
    }

    for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
    {
        arr_15 [i_4] = var_0;
        arr_16 [2] = ((288230376151711750 > ((((var_0 + 9223372036854775807) >> (-var_3 + 184))))));

        for (int i_5 = 2; i_5 < 9;i_5 += 1)
        {
            var_21 = var_1;
            arr_19 [i_4] [i_4] = ((((((var_12 ? 288230376151711750 : var_2)))) | (max((var_7 ^ var_3), var_12))));
        }
    }
    for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 9;i_8 += 1)
            {
                {
                    var_22 = (((((1 ? 18158513697557839872 : 1))) ? (((var_10 < 288230376151711743) ? 117 : ((var_7 ? 2601 : (arr_22 [i_6] [i_6]))))) : ((max((min(var_8, var_4)), (arr_4 [i_7] [i_7]))))));
                    var_23 = var_12;
                    arr_27 [i_6] [9] [9] [i_6] = (min((min((var_17 ^ var_8), (max(18158513697557839877, var_14)))), (((~(1576978852 & 24))))));
                }
            }
        }
        var_24 = ((max(var_3, (arr_23 [i_6] [i_6] [1]))));
        var_25 = ((min((arr_2 [i_6] [i_6]), (arr_23 [4] [i_6] [i_6]))));
        var_26 = (184 && var_4);
        var_27 = var_3;
    }
    for (int i_9 = 0; i_9 < 12;i_9 += 1)
    {
        arr_31 [i_9] = (max(807585435340746057, (arr_3 [i_9])));
        var_28 = (max(var_15, (max(153, (arr_1 [i_9])))));

        for (int i_10 = 2; i_10 < 11;i_10 += 1)
        {
            var_29 = ((max((arr_4 [i_9] [i_9]), (((arr_8 [i_9] [i_9] [i_10] [i_9] [i_10] [i_9]) ? 760375793 : var_3)))) < (arr_33 [i_9] [i_9]));
            arr_34 [i_10] = (1 || 79);
        }
    }
    #pragma endscop
}
