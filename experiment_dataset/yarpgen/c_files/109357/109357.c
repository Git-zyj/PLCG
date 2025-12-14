/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109357
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (((((~(arr_1 [i_0])))) ? (max((arr_0 [i_0]), (arr_0 [i_0]))) : (((var_15 ? ((((arr_0 [i_0]) && (arr_1 [i_0])))) : ((2047 ? var_11 : var_10)))))));
        arr_3 [i_0] [16] &= (((((((min(var_1, (arr_1 [0])))) ? var_4 : (((arr_0 [22]) ? (arr_0 [1]) : (arr_0 [8])))))) ? ((3913764572 ? (247 * 28102) : (((arr_0 [10]) ? -8843363805118728686 : (arr_1 [1]))))) : ((((arr_1 [10]) ? (247 >= -548038785) : (25080 + 3913764572))))));
        var_19 = ((arr_0 [i_0]) ? (arr_1 [i_0]) : ((+(((arr_0 [i_0]) / var_3)))));
        var_20 = (-2147483647 - 1);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_6 [i_1] = (((~-25070) ? -548038784 : (((arr_0 [i_1]) ? 53 : var_4))));
        var_21 = (arr_1 [i_1]);
        var_22 = (max(var_22, -3913764575));
        arr_7 [i_1] [6] = var_15;
        var_23 = (min(var_23, ((((arr_4 [1]) ? (var_12 * var_4) : (arr_5 [i_1] [i_1]))))));
    }
    var_24 = (max(var_24, ((max(1, (((-1 <= 3756161845) ? var_3 : 751981486)))))));
    var_25 = var_11;
    var_26 = var_7;
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 0;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {
                    arr_14 [i_4] = ((((((78 ? (arr_10 [i_4] [i_2] [i_2]) : (arr_11 [i_2] [i_2 + 1])))) ? (arr_11 [11] [i_3 + 1]) : ((-548038785 ? (arr_9 [i_3] [i_4]) : (arr_0 [i_4]))))));
                    var_27 &= (min(((2443722 ? 1471471870 : -538835422650782212)), ((((arr_13 [i_3 + 1] [i_3 + 1] [i_3 + 1]) & -5250)))));
                    var_28 = (((max((((arr_4 [i_2 + 1]) | var_2)), ((min(-669757640, var_0))))) | (((((94 ? (arr_11 [i_2] [i_4]) : (-2147483647 - 1))) & (max((arr_13 [i_2] [i_3] [i_4]), -30)))))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_20 [i_2] = (max(-215, 1));
                                arr_21 [i_2] [i_2] [i_4] [i_2] [i_6] |= (min(((-(((arr_5 [i_2] [i_3 + 1]) ? 1810155282 : var_10)))), ((var_18 & (max(var_6, (arr_8 [i_2] [i_2])))))));
                                arr_22 [14] &= (min((max((((arr_17 [i_2 + 1] [i_3] [i_3] [i_2 + 1]) >> (var_15 + 107))), -7557515932319463815)), (((((arr_8 [i_2 + 1] [i_2]) ? var_9 : (arr_4 [i_6])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
