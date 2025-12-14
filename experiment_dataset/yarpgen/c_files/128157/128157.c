/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, ((((var_4 < var_0) & var_1)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_17 = (((arr_0 [i_0] [i_0]) ? var_4 : (arr_0 [i_0] [i_0])));

        for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
        {
            var_18 = (min(var_18, (arr_1 [i_0])));
            arr_5 [i_1] = ((65518 ? (151 % 1286535058) : var_8));
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
        {
            var_19 = (88 - 111);
            var_20 = (-1286535058 - -32759);
            arr_10 [i_0] [i_0] [i_0] = var_12;
        }
        for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
        {
            var_21 = (max(var_21, (arr_7 [i_0])));
            var_22 = ((3 ? -29725 : 9647912123878329104));
            var_23 = (9223372036854775800 <= 1286535058);
        }
        var_24 = ((2870837330 ? (arr_4 [19] [19] [i_0]) : (arr_12 [i_0] [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 19;i_5 += 1)
            {
                {
                    arr_19 [19] [i_4 - 1] [i_0] = (((arr_12 [i_4 - 2] [i_5 + 1] [i_5]) ? (arr_12 [i_0] [i_0] [i_0]) : var_15));
                    arr_20 [16] [i_0] &= ((((18446744073709551615 ? 23020 : (arr_8 [i_5]))) / ((((arr_2 [i_0] [i_4] [i_5 + 1]) >= var_10)))));
                    var_25 = (arr_18 [i_4 - 1] [i_4 + 1] [i_4 + 1] [18]);
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
    {
        arr_25 [12] = ((((min(6464489106517956870, ((15334184667874807991 ? 5356644067065453836 : 1))))) ? (((((max(var_1, 1))) ? (arr_8 [i_6]) : (min(var_11, var_12))))) : var_7));
        arr_26 [15] [i_6] = (((1 > -84) ? (((32767 ? 35026 : -1286535058))) : (((arr_14 [i_6]) % 32763))));
    }
    var_26 = (~64);
    #pragma endscop
}
