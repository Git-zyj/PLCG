/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_8;
    var_18 = -102;

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_19 = ((-(min((min((arr_1 [i_0] [i_0]), 14039979177969624715)), 1))));
        var_20 = (min((((14039979177969624735 ? ((min(511, -511))) : (~var_8)))), (((arr_1 [i_0] [i_0]) - ((3 ? var_0 : var_16))))));
        arr_2 [i_0] = max((((max((arr_0 [i_0]), -1172414612)))), ((var_12 ? (arr_0 [i_0]) : (arr_1 [i_0] [9]))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_21 = (arr_1 [i_1] [i_1]);
                                arr_14 [i_1] [i_1] [10] [10] [i_3] [i_4] = min(28849, var_0);
                                var_22 = ((var_2 <= ((((arr_9 [i_1] [i_2 - 1] [i_3] [i_4]) < (min(var_15, 1172414609)))))));
                            }
                        }
                    }
                    arr_15 [i_1] = (max((((arr_10 [i_2 - 1] [i_2] [i_2 - 1] [i_1] [i_0] [i_0]) << (var_10 - 17677606598434923757))), var_1));
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {
        var_23 = ((((var_1 == (max(65535, var_7)))) ? (max((var_10 & 9223372036854775808), var_1)) : 511));

        for (int i_6 = 4; i_6 < 15;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 0;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    {
                        var_24 = (min(var_24, (((((((arr_23 [i_5] [i_6 + 1] [i_7 + 1] [i_8]) ? (arr_9 [i_5] [i_6 - 2] [i_5] [i_8]) : (arr_23 [i_8] [i_6 - 1] [i_7] [7])))) ? (32763 != var_10) : ((var_6 ? (arr_10 [i_5] [i_6 - 4] [i_7] [i_8] [i_6] [i_5]) : var_15)))))));
                        var_25 = (max(var_25, ((((((1 >> (var_15 != var_16)))) - (arr_23 [i_8] [i_7 + 1] [i_6 - 1] [i_5]))))));
                    }
                }
            }
            var_26 = (max(75, (~3)));
            arr_24 [i_5] [15] = ((((((arr_19 [i_5] [i_6 + 1]) << (((max((arr_7 [i_6]), var_3)) - 725130898))))) ? ((((((min(0, (arr_17 [i_6])))) || 1)))) : var_6));
        }
        for (int i_9 = 3; i_9 < 15;i_9 += 1)
        {
            var_27 = 89;
            var_28 = ((var_8 ? ((((arr_13 [i_9] [i_5] [i_9]) / (min(-1336975354, var_11))))) : ((1 ? (min(var_2, var_10)) : (~1172414599)))));
        }
        /* vectorizable */
        for (int i_10 = 1; i_10 < 15;i_10 += 1)
        {
            var_29 -= 1902811164;
            var_30 = (((arr_4 [i_10 - 1] [i_5]) ? ((127 >> (18446744073709551615 - 18446744073709551611))) : (arr_4 [i_5] [i_10 - 1])));
        }
    }
    var_31 = (((~((var_13 ? var_13 : var_13)))) > (min((~var_16), var_12)));
    #pragma endscop
}
