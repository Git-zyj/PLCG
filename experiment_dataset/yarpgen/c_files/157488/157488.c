/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157488
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += 9223372036854775787;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_13 = 9223372036854775804;

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_14 &= -var_7;
            var_15 = 10155739119880500552;
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            arr_10 [i_2] [15] = (((((-(arr_3 [i_0] [11])))) ? (5 != var_1) : 7));
            var_16 = ((var_5 ? var_9 : (((arr_6 [i_0] [i_2]) ? 5733115014651544548 : (arr_7 [i_0])))));
        }
        for (int i_3 = 2; i_3 < 19;i_3 += 1)
        {
            arr_13 [19] [9] &= ((18446744073709551611 ? -18425 : (arr_5 [i_3] [i_0])));
            var_17 = (((arr_2 [i_3 - 1]) ? var_7 : (((arr_11 [i_0] [i_0] [i_3]) ? var_3 : var_5))));
            var_18 = ((-977350921499071713 >= ((253388712 ? 4041578570 : 5733115014651544550))));
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 19;i_6 += 1)
                {
                    {
                        var_19 += ((!var_11) ? var_1 : ((19 ? (arr_7 [i_4]) : var_4)));
                        var_20 = 5733115014651544546;
                        arr_22 [i_5] [i_4] [i_5] [i_6] = (arr_20 [i_6 + 1] [11] [i_6] [i_6] [i_6] [i_6]);
                        var_21 += ((var_3 ? ((253388700 ? 27 : 11)) : (~18446744073709551604)));
                    }
                }
            }
            arr_23 [i_0] = (((((arr_6 [i_0] [i_4]) ? var_4 : var_1)) == 5));
            var_22 = ((-9 ? var_3 : var_11));
        }
    }
    for (int i_7 = 3; i_7 < 14;i_7 += 1)
    {

        /* vectorizable */
        for (int i_8 = 1; i_8 < 13;i_8 += 1) /* same iter space */
        {
            var_23 += ((var_1 << (((arr_29 [i_7] [i_8] [i_8]) - 16514281140400625040))));
            arr_31 [i_8] [i_7] = 69;
        }
        for (int i_9 = 1; i_9 < 13;i_9 += 1) /* same iter space */
        {
            var_24 = 7168;
            var_25 += ((~(min(37512, (min(18446744073709551596, (arr_25 [i_7])))))));
            var_26 = 11;
        }
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 4; i_11 < 13;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 15;i_12 += 1)
                {
                    {

                        for (int i_13 = 0; i_13 < 0;i_13 += 1)
                        {
                            var_27 = (max(15834768710982595966, (arr_34 [i_7] [i_7])));
                            var_28 = var_3;
                        }
                        arr_45 [i_7] [i_7] [i_7] [i_10] [i_11] [i_12] = (arr_43 [i_11] [0] [i_11] [i_12] [i_12]);
                        arr_46 [i_10] &= 52;
                    }
                }
            }
        }
        var_29 = var_2;
        arr_47 [13] &= ((var_9 ? (-85 || 119) : var_3));
    }
    for (int i_14 = 0; i_14 < 14;i_14 += 1)
    {
        var_30 = (min(var_30, (((-8831069451639768004 ? (max(((var_10 + (arr_1 [4] [i_14]))), (arr_6 [i_14] [i_14]))) : ((1 ? 9 : (((14 ? var_7 : 25))))))))));
        var_31 = (((((arr_9 [i_14] [i_14]) >> (((arr_9 [i_14] [i_14]) - 3336267264))))) || var_2);
        arr_51 [i_14] = var_0;
    }
    var_32 = (((((var_0 || (-67 * var_2)))) <= var_6));
    var_33 = var_4;
    #pragma endscop
}
