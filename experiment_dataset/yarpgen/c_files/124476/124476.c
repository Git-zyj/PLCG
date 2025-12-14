/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124476
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] [i_1] = -240;
                arr_8 [i_0] &= ((((((((var_12 ? 40573 : 179))) | ((10274 ? 4618283106002714695 : var_11))))) ? ((max(173, (arr_6 [i_0 + 1] [i_0 - 2] [i_0 - 1])))) : (max(10283, 127))));
            }
        }
    }
    var_19 |= (var_12 ? ((max(var_17, var_2))) : (((min(var_2, var_1)))));
    var_20 = ((max((max(32704, var_7)), var_3)));

    for (int i_2 = 1; i_2 < 13;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            arr_14 [i_2] [i_3] = (((32704 ? var_7 : (!var_4))));
            arr_15 [2] [2] [2] = var_11;
            arr_16 [i_3] [i_3] = (~(((arr_3 [i_3]) ? var_8 : (arr_3 [i_3]))));
        }
        for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
        {
            arr_21 [i_2 + 1] [i_2 - 1] = ((!(arr_4 [i_4])));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    {
                        arr_27 [i_2] = (-(arr_0 [i_5]));
                        arr_28 [i_4] [i_4] [i_4] [i_6] [i_6] [i_6] = (!var_15);
                        arr_29 [i_2] [i_2] = ((!(~var_12)));
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
        {
            arr_32 [i_2] [11] = min((((!(arr_26 [i_2] [i_2] [i_2 - 1] [i_2 - 1] [i_7])))), ((-1332259717 ? (arr_12 [13]) : ((var_0 & (arr_17 [i_2] [i_2 + 1] [i_2 + 1]))))));
            arr_33 [i_2] [i_2] = (0 & 18446744073709551615);
            arr_34 [i_2] = ((!(15 / -8659)));
            arr_35 [i_2] [i_2] = ((var_6 | ((max((arr_24 [i_2] [3]), 1415260306)))));
            arr_36 [i_2] = max(4294967295, 17);
        }
        arr_37 [i_2] &= ((((!(arr_20 [i_2 - 1] [i_2 - 1] [i_2 - 1]))) ? (((arr_11 [i_2] [i_2] [i_2 - 1]) ? -28317 : 34)) : (((arr_20 [i_2 + 1] [i_2 + 1] [i_2 - 1]) / 19417))));
        arr_38 [i_2] = (((~var_7) > var_7));
        arr_39 [i_2] = (((17210869843871849987 ? var_12 : 97)));
        arr_40 [i_2 + 1] = 97;
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        arr_44 [i_8] = max(var_12, (((!(arr_13 [i_8] [i_8])))));
        arr_45 [i_8] = (7664373136330052553 / 113);
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                for (int i_11 = 3; i_11 < 10;i_11 += 1)
                {
                    {
                        arr_52 [i_11 + 1] [i_9] [i_9] [i_8] |= ((var_17 ? var_7 : ((((~-97) | (130 & -119))))));
                        arr_53 [1] [i_11] [i_11] [i_11] = (((!(arr_26 [i_8] [i_9] [i_8] [i_11 - 2] [i_11 - 2]))));
                    }
                }
            }
        }
    }
    var_21 = ((!(1 / 1)));
    #pragma endscop
}
