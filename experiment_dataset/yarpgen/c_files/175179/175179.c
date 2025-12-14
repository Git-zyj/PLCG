/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((~6270122978497108633) > ((((((var_8 ? var_4 : var_5))) ? 22438 : var_6)))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                arr_7 [i_2] [12] [12] [i_0] |= (~-1303293390);
                var_12 = 0;
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            arr_12 [i_0] [i_2] [13] [i_4] = (((arr_3 [i_0] [i_0 - 1] [i_2]) ? (arr_3 [i_0] [i_0 + 3] [9]) : (arr_3 [i_1] [i_0 + 1] [i_4])));
                            var_13 = ((var_9 ? (4294967295 == -1809487440) : ((var_8 >> (((arr_3 [i_0 + 2] [i_3] [i_4]) - 13466))))));
                            var_14 = (((arr_6 [i_0 - 1] [i_0 + 2]) ? (arr_9 [i_0 - 1] [i_0 + 2]) : (arr_9 [i_0 - 1] [i_0 + 2])));
                        }
                    }
                }
            }
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                arr_16 [i_0] = (arr_11 [i_5] [i_1] [i_0] [i_0] [i_1]);
                arr_17 [i_0] [i_1] = 144;
            }
            for (int i_6 = 2; i_6 < 22;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 23;i_8 += 1)
                    {
                        {
                            var_15 = var_4;
                            arr_24 [i_8] [i_7] [i_6] [i_1] [i_8] = (arr_2 [i_0] [i_8]);
                            var_16 = (max(var_16, (arr_4 [i_0] [i_0])));
                            arr_25 [21] [i_1] [i_6 - 2] [i_8] [i_8 + 1] = (arr_20 [i_0] [i_1] [i_1] [i_6 - 1] [i_7] [i_8]);
                            var_17 = (min(var_17, (((1172703521 ? (arr_13 [i_8] [i_8] [i_6] [i_6 - 1]) : (arr_20 [i_8] [13] [i_8] [i_8] [i_8] [i_6 + 2]))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 21;i_10 += 1)
                    {
                        {
                            var_18 = 1172703521;
                            var_19 |= var_1;
                            var_20 = (((arr_6 [i_9] [i_0]) ? var_1 : (((arr_18 [i_0]) ? 199510844 : (arr_14 [i_1])))));
                        }
                    }
                }
            }
            var_21 = (((1 % var_7) ? (arr_3 [i_0 + 3] [1] [i_0]) : (arr_14 [1])));
            arr_32 [i_0] = (arr_5 [17] [i_0 - 1] [i_1] [i_0 - 1]);
        }
        for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
        {
            arr_35 [i_0] [i_11] [i_11] = ((199510844 ? -1547863689 : 45720));
            var_22 = (min(var_22, (((((((arr_27 [i_0] [i_0] [i_0] [i_11] [i_11]) ? (arr_10 [0] [i_11] [0] [i_11] [0] [i_0 + 3] [i_0 + 1]) : 15556375194398761277))) ? ((((arr_20 [i_0 + 3] [i_0] [i_0 + 1] [i_0 + 3] [i_0 + 3] [14]) ? var_2 : (arr_3 [i_0 - 1] [i_0 + 3] [i_0 + 3])))) : (((arr_27 [i_0 - 1] [i_11] [i_0] [i_11] [i_0]) ? var_10 : var_3)))))));
        }
        for (int i_12 = 0; i_12 < 24;i_12 += 1) /* same iter space */
        {
            arr_38 [i_0 + 3] [i_12] = ((~((18569 ? -1172703521 : var_0))));
            arr_39 [i_0] = (arr_23 [i_0] [i_0 - 1] [1] [1] [i_0 + 3]);
        }
        arr_40 [i_0 - 1] = (((20413 ? (-9223372036854775807 - 1) : 14291)));
    }
    for (int i_13 = 0; i_13 < 0;i_13 += 1)
    {
        var_23 = (~-199510845);
        arr_43 [i_13 + 1] = (((((max(var_6, var_5)) > 218)) ? 5240225576734606352 : var_4));
        var_24 = ((((-199510845 + (min(1, (arr_22 [i_13])))))) ? (arr_13 [i_13] [9] [i_13] [i_13]) : 199510844);
    }
    #pragma endscop
}
