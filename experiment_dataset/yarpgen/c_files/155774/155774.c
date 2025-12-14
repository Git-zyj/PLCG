/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            var_12 ^= (-1612591869 | (arr_2 [i_1 - 1] [i_0]));
            var_13 = (-1093590955 ? (1844835920 ^ -1033532790) : var_10);
        }
        var_14 = ((1605850733 ? -792135669 : -880434770));
        var_15 = (16383 | 1927359787);
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
    {
        var_16 = var_2;
        var_17 = (var_6 & ((1844835920 ? 1901025501 : -1154328191)));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            var_18 = arr_2 [2] [i_3];
            var_19 = var_5;

            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                var_20 = (-1033532800 ? (arr_13 [i_2] [3] [i_2] [i_2]) : 74399183);
                var_21 = 1605850741;
            }
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                var_22 = (+-792135668);

                for (int i_6 = 4; i_6 < 8;i_6 += 1)
                {
                    var_23 = (((-591236905 ? -781368285 : (-2147483647 - 1))) - (((arr_7 [i_3]) ^ -1892883163)));
                    arr_21 [i_6 - 1] [i_2] [i_2] = (-13 ? -1605850749 : -1033532827);
                }
                for (int i_7 = 3; i_7 < 8;i_7 += 1)
                {
                    var_24 = (!-1);
                    var_25 = (min(var_25, (((((var_8 ? -1154328178 : var_0))) ? (var_10 >= 1350989239) : -1758875335))));
                    var_26 = ((((-2147483635 ? (arr_16 [i_5] [i_7]) : (arr_24 [i_2])))) ? 1139908487 : (1605850763 ^ var_9));
                }
                var_27 = var_0;
            }
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            var_28 = (-(((arr_4 [i_2] [i_2] [i_8]) ? (arr_25 [6] [6] [i_8]) : 897282510)));
            var_29 = 1927359786;

            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 10;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 10;i_11 += 1)
                    {
                        {
                            arr_34 [i_2] = (((~(arr_19 [i_2] [7] [8] [8]))) + (arr_17 [i_2] [i_9] [i_2]));
                            var_30 &= (~-1195483077);
                            var_31 = 1756748626;
                        }
                    }
                }
                var_32 |= ((arr_8 [i_2] [i_2]) ? (arr_4 [i_2] [i_8] [i_9]) : var_4);
                arr_35 [i_2] [i_2] [i_2] = ((arr_23 [i_2]) ? (arr_3 [i_8] [i_2]) : -1781099267);

                for (int i_12 = 0; i_12 < 10;i_12 += 1)
                {
                    var_33 = (!-1769321675);
                    arr_38 [i_2] [i_2] [9] [i_2] [3] = arr_25 [i_2] [i_8] [i_12];
                    var_34 = 1927359763;

                    for (int i_13 = 0; i_13 < 10;i_13 += 1)
                    {
                        arr_41 [i_2] [i_8] [i_8] [i_2] [i_13] = (((arr_5 [i_2]) >= var_2));
                        var_35 = ((arr_17 [i_2] [i_2] [i_2]) ? ((var_7 ? -1614862 : (-2147483647 - 1))) : (arr_20 [i_2] [i_9] [3] [i_13]));
                        var_36 = (min(var_36, ((-(((arr_36 [i_9]) ? var_1 : -1152864559))))));
                        var_37 = (((((arr_5 [i_2]) ? var_8 : 1941222426))) ? var_6 : ((((arr_4 [i_12] [i_8] [i_8]) >= (arr_16 [i_2] [6])))));
                    }
                }
            }
            arr_42 [i_2] [i_2] [i_8] = ((((268367948 ? -2147483638 : 1154328189))) ? ((var_11 ? (arr_33 [i_2] [i_8] [i_2] [i_8] [i_8]) : (arr_11 [i_2] [i_8] [i_2] [i_2]))) : (31698132 || var_8));
            var_38 = (847383418 ? 1927359777 : (-2147483647 - 1));
        }
    }
    var_39 = 1154328192;
    #pragma endscop
}
