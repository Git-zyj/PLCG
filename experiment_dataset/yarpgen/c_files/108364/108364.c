/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((var_0 % 1) ? -1 : ((max(var_13, var_2)))))) ? ((min((!var_5), (var_7 || var_4)))) : var_6));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_16 = (((((arr_1 [i_0]) ? var_6 : (arr_0 [i_0]))) << (((var_2 != ((-(arr_0 [14]))))))));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            arr_5 [10] [15] = ((-(arr_2 [i_1 + 1] [i_1 + 1])));
            arr_6 [i_1 + 1] = (arr_4 [i_0] [i_0] [i_1]);
        }
        var_17 = (!-1324900051);
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 20;i_2 += 1)
    {
        var_18 = (((arr_7 [16] [6]) & (((arr_8 [i_2]) ? 7605 : var_7))));
        var_19 = ((!((((arr_7 [i_2 - 1] [i_2 + 1]) ? var_13 : 1968622307)))));
    }
    for (int i_3 = 1; i_3 < 20;i_3 += 1)
    {
        arr_12 [i_3] = ((((max((arr_8 [i_3 + 1]), (arr_8 [i_3 - 1])))) || (44684 & 18446744073709551615)));
        arr_13 [i_3 - 1] = 44686;
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                {
                    var_20 = (((!var_4) ? (arr_18 [i_5 - 1] [i_5] [i_3 - 1] [i_3 - 1]) : (((arr_15 [i_5 - 1] [i_3 + 1] [9]) ? (var_14 + var_6) : (arr_8 [i_3 - 1])))));
                    var_21 = (((arr_15 [i_3] [i_4] [i_3]) ? var_9 : (((20851 ? 8684550870756457124 : 65535)))));
                    var_22 = ((((arr_7 [5] [i_4]) * (max((arr_15 [i_3] [8] [16]), var_4)))));
                    arr_19 [i_3] [16] [i_5] = 1968622307;
                    arr_20 [0] [i_4] [i_5] = var_7;
                }
            }
        }
        var_23 = (((arr_14 [11]) || (((var_4 ? (arr_16 [i_3] [i_3] [i_3 + 1]) : (arr_9 [i_3 + 1]))))));
        arr_21 [i_3 + 1] = ((((((arr_15 [10] [14] [i_3 + 1]) ? (arr_14 [i_3]) : ((min(var_2, 1968622324)))))) || (arr_7 [i_3] [i_3 - 1])));
    }
    var_24 = ((var_11 ? var_6 : (((((var_5 ? 17476946900055121292 : 4062812964))) ? (var_8 != var_2) : ((44701 ? -24 : var_5))))));

    for (int i_6 = 2; i_6 < 18;i_6 += 1)
    {
        arr_24 [i_6 - 2] [i_6 + 1] = var_13;
        var_25 = ((!(((((max(131071, (arr_4 [8] [i_6 - 2] [i_6])))) ? var_13 : (!3450))))));
    }
    #pragma endscop
}
