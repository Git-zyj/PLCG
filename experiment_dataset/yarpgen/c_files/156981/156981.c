/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_10 = 2916341031;
                                var_11 = (max(var_0, -8476191364390545136));
                                arr_13 [i_1] [i_2] [i_3] [i_4 + 2] = (max(((max((arr_9 [i_0] [i_0] [i_4] [i_4 - 4] [i_4 - 2]), var_8))), (((arr_9 [i_2] [i_2] [5] [i_4] [i_4 + 3]) & (arr_9 [i_0] [i_0] [i_2] [i_2] [i_4 - 2])))));
                            }
                        }
                    }
                }
                var_12 = ((((((~1378626276) ? ((min(var_7, var_5))) : 18446744073709551615))) ? (arr_12 [i_0]) : (max((((arr_5 [1]) << (var_8 - 57018))), ((max(var_5, var_8)))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_13 |= ((!((((268433408 ? var_0 : 142253509))))));
                            arr_18 [19] [19] [19] [19] = (((max(-203326157, 18446744073709551613)) < ((max(2916341040, (arr_9 [i_1 + 1] [i_5] [9] [i_6] [i_6]))))));
                            var_14 = var_1;
                            arr_19 [i_6] [i_1] |= ((~((~(min(var_2, (arr_4 [i_6] [i_1] [i_0])))))));
                        }
                    }
                }
            }
        }
    }

    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        var_15 = 1;
        var_16 = ((var_6 & (((((~(arr_11 [4] [i_7] [i_7] [i_7] [i_7])))) ? (arr_9 [i_7] [i_7] [i_7] [i_7] [i_7]) : (((-6500 == (arr_20 [i_7] [i_7]))))))));
        var_17 = (((min((max(18446744073709551615, 732102279)), (arr_16 [i_7]))) - (((~((241 ? -20 : 105)))))));
        arr_23 [i_7] [i_7] = (((((135 != (arr_7 [i_7] [5] [i_7]))))));
    }
    for (int i_8 = 1; i_8 < 10;i_8 += 1)
    {
        var_18 = -20;
        /* LoopNest 2 */
        for (int i_9 = 2; i_9 < 10;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 11;i_10 += 1)
            {
                {
                    var_19 = (((arr_10 [i_10] [i_9] [i_8]) < -var_6));
                    var_20 = ((134 ? ((~(((arr_31 [i_8] [11] [i_8] [i_10]) ? 2826818569 : var_7)))) : ((((-203326141 | 6503) ? 97 : (((arr_6 [i_8] [i_8] [11] [5]) ^ 8382)))))));
                }
            }
        }
        arr_34 [i_8] = (arr_9 [i_8 - 1] [i_8] [i_8 + 2] [i_8 - 1] [i_8]);
        var_21 = min(var_0, ((((max(38475, (arr_3 [i_8] [i_8])))) ? (arr_5 [i_8 + 2]) : (max(1378626256, 255)))));
    }
    #pragma endscop
}
