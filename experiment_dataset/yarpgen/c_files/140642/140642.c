/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_17 = ((~((~(((arr_1 [i_0]) | (arr_0 [i_0] [i_0])))))));
        var_18 = (max((min(var_3, (arr_1 [7]))), (arr_1 [0])));
        arr_2 [i_0] = ((arr_1 [i_0]) ? 300415778 : (var_5 & 1));
        var_19 = (((((~((((arr_1 [1]) || 2147483624)))))) >= var_14));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    {
                        var_20 = arr_6 [i_4] [i_2] [i_1];

                        for (int i_5 = 1; i_5 < 13;i_5 += 1)
                        {
                            arr_16 [i_1] [i_2] [12] [i_1] [12] [i_5] = ((15 - 246) - ((var_16 ? (arr_6 [i_1] [5] [i_1]) : 5948744737377083011)));
                            var_21 = ((var_13 >> ((12497999336332468609 ? var_8 : (arr_15 [i_1])))));
                            arr_17 [i_1] [i_4] [i_3] [i_2] [i_1] = var_13;
                            arr_18 [5] [i_1] [i_3] [i_2] [i_1] = (arr_13 [i_5 + 1] [1] [6] [i_5] [i_5]);
                        }
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            var_22 = (((var_8 ^ (arr_14 [5] [5] [i_3] [i_4] [i_6]))));
                            var_23 = ((((var_6 ? 26847 : var_6)) + var_16));
                            var_24 = (~(arr_3 [i_1] [i_6]));
                        }
                        var_25 = (arr_7 [i_1] [i_1] [i_1]);
                    }
                }
            }
            var_26 = var_3;
        }
        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            arr_25 [i_7] = ((((var_4 ? (arr_9 [i_1] [i_1] [i_1]) : (arr_6 [i_1] [i_1] [i_7]))) <= -var_16));
            arr_26 [i_7] = ((~(arr_19 [i_1] [i_1])));
            var_27 -= 15664356975758645713;
        }
        for (int i_8 = 2; i_8 < 12;i_8 += 1)
        {
            var_28 -= var_5;
            var_29 = ((-12497999336332468605 ? 1 : 12497999336332468612));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 13;i_10 += 1)
                {
                    {
                        var_30 &= ((~(arr_22 [i_10 + 1] [i_8 + 2])));
                        var_31 = (arr_10 [i_1]);
                    }
                }
            }
        }
        arr_35 [0] [i_1] &= (arr_7 [i_1] [i_1] [i_1]);
        var_32 = ((1 * (arr_12 [i_1] [i_1] [i_1] [i_1])));
    }
    for (int i_11 = 0; i_11 < 14;i_11 += 1) /* same iter space */
    {
        arr_38 [i_11] = (((arr_15 [i_11]) >> (((arr_28 [i_11] [i_11] [i_11]) & (0 < 1)))));
        arr_39 [i_11] = 10884780291428464794;
        arr_40 [7] = ((arr_12 [i_11] [i_11] [i_11] [i_11]) ? var_9 : (!var_1));
        arr_41 [i_11] = ((~((-(arr_19 [i_11] [i_11])))));
        arr_42 [i_11] = var_11;
    }
    var_33 = var_13;
    #pragma endscop
}
