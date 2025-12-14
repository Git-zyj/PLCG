/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        arr_3 [4] = ((-var_11 ? (var_5 + var_9) : var_8));
        arr_4 [0] = (!var_6);
        arr_5 [i_0] = (min((~var_9), ((max(var_7, var_5)))));
    }
    for (int i_1 = 2; i_1 < 21;i_1 += 1)
    {
        arr_8 [i_1] = ((!((((min(var_8, var_4)) * (!var_7))))));

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {

            for (int i_3 = 1; i_3 < 20;i_3 += 1)
            {
                arr_13 [11] [11] = (min((((~10) ? var_3 : (~var_5))), (!var_1)));
                arr_14 [i_1] [i_1] = min((var_11 || var_11), ((var_2 >= (min(210, 4294967283)))));
            }
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    {
                        arr_19 [i_4] [i_4] = min((57996 || 3312271017), ((!((min(var_5, var_10))))));
                        arr_20 [i_1] [i_5] [i_4] [i_1] [i_2] = (min((max((var_10 || var_2), (!var_3))), ((((var_2 ? var_7 : var_5)) >= ((max(var_8, var_2)))))));

                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            arr_24 [i_5] [14] = (max((min(((1 ? -824159956953426413 : -1696541764)), (var_7 * var_6))), ((((var_10 & var_8) | ((var_1 ? var_2 : var_2)))))));
                            arr_25 [4] [i_4] [i_4] [i_4] [i_1] = (max((((min(var_4, var_3)) % (max(var_2, var_10)))), ((-(var_10 / var_4)))));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            arr_28 [i_5] [15] [i_5] [15] [i_2] [i_1] [i_5] = (!var_2);
                            arr_29 [10] [i_5] [i_4] [i_5] [i_1] = ((var_1 && var_4) * var_8);
                        }
                        for (int i_8 = 2; i_8 < 20;i_8 += 1)
                        {
                            arr_33 [i_1] [i_1] [i_1 - 2] [11] [i_5] = ((var_3 ? var_5 : var_8));
                            arr_34 [i_1] [i_5] [i_1] [i_1] [i_8] = min(var_8, (((var_5 || var_3) ? (min(var_11, var_10)) : (var_5 % var_0))));
                        }
                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            arr_37 [i_1] [i_1] [i_5] [i_1 - 2] = ((~((~((3877966053254317368 ? -606418734 : 3179011199))))));
                            arr_38 [i_9] [i_5] [i_5] [i_2] [7] = var_0;
                            arr_39 [i_5] [i_2] [i_5] [i_2] [i_2] [i_2] [i_5] = (((((var_0 ? var_10 : var_11) * var_6))));
                            arr_40 [i_5] [i_5] [7] = (min((((var_3 ? (max(var_9, var_5)) : var_4))), (min(-766556756036311790, (var_9 - var_9)))));
                        }
                    }
                }
            }
            arr_41 [i_2] [i_1] [12] = (!var_9);
            arr_42 [i_1] [i_2] = min((!var_6), var_10);
        }
        /* vectorizable */
        for (int i_10 = 3; i_10 < 20;i_10 += 1)
        {
            arr_47 [i_10] [i_10] [i_10] = var_5;
            arr_48 [i_10] = var_11;
            arr_49 [i_10] [i_10] = ((~(var_1 ^ var_11)));

            for (int i_11 = 0; i_11 < 22;i_11 += 1)
            {
                arr_52 [i_1] [i_10] [i_10] [i_1] |= ((var_5 >= (var_4 / var_4)));
                arr_53 [5] [i_10] [i_11] = ((~var_4) ? var_2 : (var_11 || var_9));
                arr_54 [i_10] [i_10] = ((var_0 / var_1) || var_10);
            }
        }
        for (int i_12 = 4; i_12 < 21;i_12 += 1)
        {
            arr_57 [i_1] = max(var_0, (((699391113 / var_9) / (var_6 * var_4))));
            arr_58 [i_1] = (((~var_5) | ((((var_2 >= var_4) >= (min(var_11, var_3)))))));
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 22;i_13 += 1)
            {
                for (int i_14 = 2; i_14 < 19;i_14 += 1)
                {
                    {
                        arr_65 [i_1] = -var_9;
                        arr_66 [i_1] [i_12] [i_12] [i_14] [i_14] = (max((min((63654 * 143), -var_9)), ((((!var_6) || (!var_3))))));
                    }
                }
            }
        }
        arr_67 [i_1 - 2] = ((!((min((max(var_9, var_2)), (var_2 && var_8))))));
        arr_68 [i_1 + 1] = min(((var_9 ? var_3 : var_6)), var_11);
    }
    var_12 = (((~-var_9) || (((-(var_10 || var_6))))));
    var_13 = ((!(~var_7)));
    var_14 = var_9;
    #pragma endscop
}
