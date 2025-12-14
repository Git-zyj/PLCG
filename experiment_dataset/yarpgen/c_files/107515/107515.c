/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107515
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_12;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [5] = ((~45512) ? ((((!((((arr_1 [i_0]) ? 26662 : var_10))))))) : var_10);
        arr_3 [i_0] = (((arr_1 [4]) && var_7));
        arr_4 [i_0] [i_0] = (max(((max(((var_10 ? (arr_1 [i_0]) : (arr_1 [i_0]))), (arr_1 [i_0])))), (max((min(14, 18446744073709551612)), (((var_11 ? (arr_0 [i_0] [i_0]) : (arr_1 [9]))))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_9 [i_1] = min((max((arr_5 [i_1] [i_1]), (arr_5 [i_1] [i_1]))), ((((var_12 ? (arr_8 [i_1]) : var_7)))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 12;i_3 += 1)
            {
                {
                    arr_16 [i_1] [i_2] [i_3] [i_1] = ((~(arr_0 [i_1] [i_3 + 1])));
                    arr_17 [i_2] = ((((max((arr_13 [i_2] [i_3 + 1] [i_3] [i_3 + 1]), (arr_15 [i_2] [i_3 - 1] [i_3] [i_2])))) || (((arr_13 [i_1] [i_3 - 3] [i_3 - 3] [i_1]) || (arr_13 [1] [i_3 + 2] [i_3 + 2] [i_3 + 2])))));
                }
            }
        }
        arr_18 [i_1] = var_2;
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_22 [i_4] = 18446744073709551612;
        arr_23 [i_4] = (max((min(var_3, (((arr_19 [i_4] [i_4]) ? 18446744073709551612 : var_3)))), ((max(var_2, (arr_19 [i_4] [i_4]))))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 20;i_6 += 1)
            {
                {
                    arr_30 [i_5] [i_5] [i_4] = (((arr_24 [i_4] [i_5] [i_6 - 1]) ? 0 : var_7));
                    var_14 = 9223372036854775790;
                }
            }
        }
    }
    var_15 = min((min(((var_7 ? var_2 : 13181)), ((max(var_10, var_11))))), (max(9223372036854775790, var_9)));
    var_16 = (max(var_12, (min(((var_4 ? var_4 : 736209078)), var_10))));

    /* vectorizable */
    for (int i_7 = 1; i_7 < 17;i_7 += 1)
    {
        var_17 = (arr_25 [i_7 - 1]);
        var_18 = (((63929 || var_2) ? 31265 : (arr_19 [i_7 - 1] [i_7 + 1])));

        for (int i_8 = 4; i_8 < 16;i_8 += 1)
        {
            arr_37 [i_7] [1] = ((-1 || (arr_20 [i_7 + 1])));
            /* LoopNest 2 */
            for (int i_9 = 2; i_9 < 17;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 18;i_10 += 1)
                {
                    {
                        arr_42 [i_7] [i_7] [i_7] [i_7] = var_1;
                        var_19 ^= var_3;
                        arr_43 [i_7] [i_7] [1] [i_7] = (((arr_38 [i_9] [i_9 + 1] [i_9] [i_9 + 2]) || (((var_10 ? 0 : (arr_26 [i_7] [i_7] [i_10]))))));
                    }
                }
            }
            arr_44 [i_7] = (((((1 ? (arr_26 [i_8] [i_7] [i_7]) : -1809454753823612113))) ? var_10 : var_6));
        }
    }
    #pragma endscop
}
