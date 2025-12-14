/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] = var_10;
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        var_13 = ((var_10 ? 12814 : (((arr_8 [i_0] [i_0] [i_0]) | var_8))));
                        var_14 = ((!(-3647 | var_2)));
                    }
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        var_15 = ((3646 >> (((arr_6 [i_1 + 2]) + 1954943959))));
                        var_16 = (((arr_9 [i_4] [i_2] [11] [i_0]) | ((var_2 ? var_12 : var_5))));
                        var_17 = 3645;
                    }
                    for (int i_5 = 1; i_5 < 19;i_5 += 1)
                    {
                        var_18 = (arr_10 [i_5 + 2] [10] [i_5] [i_5 - 1] [i_1 + 1]);
                        arr_18 [i_5 + 2] [i_1] [i_2] [i_1] [i_0] = ((-16503 ? (!197568) : (arr_5 [i_0] [i_1])));
                    }
                    arr_19 [i_1] [14] [i_1] [i_1] = ((-21737 + 2147483647) << (((-3648 + 3667) - 19)));
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        arr_22 [1] = (~3326374904);
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 9;i_7 += 1)
        {
            for (int i_8 = 4; i_8 < 8;i_8 += 1)
            {
                {

                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        var_19 = ((((!(arr_26 [1])))));
                        arr_34 [i_6] [i_6] [i_6] [i_6] = ((var_7 ? ((((((arr_2 [14]) ? (arr_13 [12] [i_9] [i_8] [i_9]) : var_4))) ^ ((~(arr_5 [i_6] [i_9]))))) : 0));
                    }
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        arr_37 [i_6] [i_10] = (((var_11 & var_0) ^ (arr_16 [i_10] [i_8] [10] [i_6])));
                        var_20 = (((max(-6, 8))) ? (~-96) : ((((arr_5 [i_7] [i_10]) ^ 0))));
                        var_21 = (((((208 || var_2) & ((var_5 >> (var_12 - 196))))) == ((~(max(0, (arr_21 [0])))))));
                    }
                    var_22 = (((!var_4) < (~162)));
                }
            }
        }
        var_23 = ((((var_7 != (arr_21 [i_6]))) && (arr_24 [i_6])));
        arr_38 [i_6] = ((((((~((var_8 ? 3654 : -4506290812384508603)))) + 9223372036854775807)) >> (var_1 + 27590)));
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 25;i_11 += 1)
    {
        var_24 = ((25793 ? 0 : 252));
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 25;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 22;i_13 += 1)
            {
                {
                    var_25 = (((arr_42 [i_13 + 1] [i_13 - 1]) & (((~(arr_44 [i_12] [i_11]))))));
                    var_26 = ((var_2 * ((((!(arr_45 [i_11] [i_12] [i_13 + 1])))))));
                }
            }
        }
        arr_46 [6] = (((arr_39 [i_11] [i_11]) + (arr_41 [i_11])));
    }
    var_27 = (min((-3646 | var_0), (63510500 >= -6163974321414595852)));
    var_28 = var_9;
    #pragma endscop
}
