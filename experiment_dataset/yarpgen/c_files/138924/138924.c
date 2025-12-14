/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= (((-var_14 ? var_10 : ((max(var_1, var_9))))));
    var_17 = (max(var_17, (((((((var_13 ? var_11 : var_13))) ? ((max(0, 75))) : (((!(-9223372036854775807 - 1))))))))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_18 = ((0 != (~1)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    var_19 = ((min((max((arr_1 [i_2]), 33474)), (arr_5 [i_2 + 1] [i_2 - 2] [i_2 - 2]))));
                    var_20 ^= var_15;
                }
            }
        }
    }
    for (int i_3 = 4; i_3 < 14;i_3 += 1)
    {
        arr_9 [6] = ((!(4652340856318498108 | 44573)));
        arr_10 [1] [1] = ((!((((arr_0 [i_3 - 4] [i_3 - 1]) * (arr_0 [i_3 - 4] [i_3 - 1]))))));
    }
    for (int i_4 = 2; i_4 < 15;i_4 += 1)
    {
        arr_13 [0] = max((arr_5 [i_4] [i_4] [i_4]), ((114 ? (~0) : (arr_3 [i_4 + 2] [5] [i_4 + 2]))));
        var_21 = (max(((-(((arr_6 [i_4]) ? 255 : (arr_1 [i_4]))))), 0));
        arr_14 [i_4] = ((-(((-(arr_1 [12]))))));
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 21;i_5 += 1)
    {
        arr_17 [11] = (((arr_15 [i_5 + 2]) * (255 / 10408828147335273641)));
        var_22 = (min(var_22, ((((arr_16 [i_5 + 2]) ? (arr_15 [i_5 + 2]) : var_6)))));
        var_23 = (min(var_23, ((((((arr_16 [i_5]) != 65535)) ? (~255) : (arr_15 [i_5 + 1]))))));
        arr_18 [12] = (var_3 ? -var_3 : (arr_15 [i_5 - 1]));
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            {
                var_24 = (max(var_24, var_4));
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 22;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 23;i_10 += 1)
                        {
                            {
                                arr_31 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [4] = ((!((((((1471794615803234474 ? 2181359964597545866 : (arr_16 [16])))) ? (arr_27 [5] [i_6] [5] [i_8] [i_6] [i_6] [i_6]) : ((-905272034886581699 ? 0 : 0)))))));
                                arr_32 [16] [16] [16] [i_6] [6] = ((+((((((arr_22 [i_6] [10]) ? 0 : 3563515432554008283))) ? (max((arr_25 [6] [i_6] [i_6] [i_6]), (arr_29 [i_6] [i_6] [i_6] [i_6] [i_6]))) : (!1199876104)))));
                                var_25 = (arr_28 [7] [i_9 + 1] [7] [7] [7] [7]);
                                arr_33 [i_6] [13] [i_6] [i_6] [10] [1] [10] = (max((((~5958011034515923572) ? 255 : 3964630901)), (~0)));
                                var_26 &= ((((max((arr_24 [i_6] [i_6]), (arr_27 [i_6] [i_8] [i_7] [i_7] [i_8] [i_8] [i_6])))) ? ((10356090185740998434 ? (min((arr_23 [7] [7] [7]), (arr_16 [i_7]))) : (((-(arr_27 [i_6] [i_8] [i_6] [14] [i_8] [22] [i_6])))))) : (((+(max((arr_15 [i_6]), 65535)))))));
                            }
                        }
                    }
                }
                arr_34 [i_6] = (arr_16 [9]);
                var_27 = ((((arr_21 [i_7]) ? (arr_16 [i_6]) : (arr_21 [i_7]))));
                var_28 = ((~(((!56) ? (((!(arr_26 [i_6] [22] [i_6] [i_6])))) : var_11))));
            }
        }
    }
    #pragma endscop
}
