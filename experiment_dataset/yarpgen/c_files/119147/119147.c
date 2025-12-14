/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_13 = (max((((((arr_1 [5]) ? (arr_1 [i_0]) : 1)))), (((((113744868 ? 4294967295 : (arr_2 [19])))) ? (arr_0 [i_0] [i_0]) : ((((arr_2 [i_0]) ? 3867 : 3)))))));
        arr_4 [i_0] = (arr_3 [i_0]);
        var_14 = (min(var_14, (arr_1 [i_0])));
        arr_5 [i_0] = arr_3 [i_0];
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = (((arr_6 [i_1]) ? ((1 ? 4294967295 : 8)) : (((2904213020 ? (arr_6 [i_1]) : (arr_6 [i_1]))))));
        var_15 = (arr_7 [3]);

        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            arr_11 [18] = (arr_6 [i_1]);
            arr_12 [18] [i_2 - 1] [i_2] = (((((((min((arr_3 [i_1]), (arr_3 [i_2])))) ? -15 : (arr_10 [i_1] [i_1] [i_2 + 2])))) ? (arr_10 [i_2] [i_2] [0]) : (arr_10 [i_2 + 1] [i_2] [15])));
        }
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_4 = 4; i_4 < 19;i_4 += 1) /* same iter space */
        {
            var_16 = 170;
            arr_19 [3] [3] = ((((((arr_15 [i_3] [i_4]) ? (arr_9 [i_3] [i_4]) : 874325167))) ? 1 : 170));
            arr_20 [i_3] [i_4] = (((((185 ? 16777215 : (arr_16 [i_4 - 3])))) ? (arr_6 [i_3]) : (arr_15 [i_4 + 2] [i_4 + 1])));
        }
        for (int i_5 = 4; i_5 < 19;i_5 += 1) /* same iter space */
        {
            var_17 = ((((min(((min(127, (arr_13 [i_3])))), (arr_22 [i_3] [i_3] [i_3])))) ? 1 : ((((arr_3 [15]) ? 4294967295 : (arr_9 [i_5] [i_3]))))));
            var_18 = (max(((max((arr_18 [i_5 - 3] [i_5] [0]), (arr_18 [i_5 - 2] [i_5] [i_5])))), 128));
            var_19 += (arr_0 [i_3] [i_3]);
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 20;i_7 += 1)
            {
                {
                    var_20 = ((((((((4 ? 4294967293 : 28))) ? (arr_9 [i_7 - 2] [i_7 - 1]) : ((2169918058804804505 ? (arr_21 [i_3] [i_7]) : 888142927))))) ? (arr_24 [i_7] [i_7] [i_7]) : ((16 ? 136 : (((-2147483647 - 1) ? 12 : (arr_6 [i_3])))))));
                    arr_27 [i_3] [i_6] = 186;
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {

        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            var_21 ^= ((((max((arr_0 [i_8] [i_8]), ((min(1, -10)))))) ? (((4294967282 ? (arr_10 [i_8] [i_9] [i_8]) : 1))) : (((65535 ? 2 : 4294967292)))));
            arr_33 [i_8] [i_9] [i_8] = ((arr_28 [1]) ? (((arr_29 [i_9]) ? (arr_29 [i_9]) : 1)) : 12288);
            var_22 = (((arr_23 [i_8]) ? ((1 ? 3 : 1281932617)) : (arr_28 [i_8])));
        }
        var_23 = (arr_17 [1]);
        arr_34 [i_8] = ((((((((-9223372036854775792 ? -5 : 2167731220))) ? (((arr_17 [i_8]) ? (arr_22 [i_8] [i_8] [4]) : 83)) : (arr_26 [i_8] [i_8] [i_8] [i_8])))) ? (arr_23 [i_8]) : 0));
    }
    var_24 = var_2;
    var_25 = (((((var_11 ? var_2 : var_0))) ? ((53249 ? var_1 : var_6)) : 222));
    #pragma endscop
}
