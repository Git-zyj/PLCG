/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;
    var_12 |= var_10;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_12 [13] [i_2] = 133693440;
                                arr_13 [i_0] [i_1] [i_0] [8] [i_2] [i_3 + 1] [i_0] = ((var_8 ? -var_3 : (arr_11 [i_0 - 1] [i_3 + 1])));
                                arr_14 [i_2] [i_3] [i_0 - 2] [i_1] [i_2] = (((arr_10 [14] [i_0] [i_2] [i_1] [i_0]) ? ((var_8 ? var_1 : 4161273855)) : var_2));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [i_1] [i_0] [i_5] [i_1] = var_10;
                                arr_22 [i_0 - 2] [i_5] [i_2] = 133693441;
                            }
                        }
                    }
                }
            }
        }
        arr_23 [12] = ((((!(arr_2 [i_0] [i_0]))) ? (arr_20 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 + 2] [i_0 + 2] [i_0 + 1]) : (18446744073709551615 && var_10)));
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                {
                    arr_31 [i_9] = ((!((max((arr_27 [i_8] [i_8 + 1] [i_8]), (arr_26 [i_8 + 1] [i_8]))))));
                    arr_32 [i_7] [i_8] [i_7] = (~var_1);
                }
            }
        }
        arr_33 [i_7] = ((var_9 ? 0 : var_8));
        arr_34 [i_7] = 255;
        arr_35 [i_7] = (((((0 ? (2 < -1) : ((var_5 / (arr_19 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])))))) ? (~5) : (max((arr_5 [i_7] [i_7]), (arr_5 [i_7] [i_7])))));
    }
    for (int i_10 = 0; i_10 < 10;i_10 += 1)
    {
        arr_38 [i_10] = var_1;
        arr_39 [i_10] [i_10] = ((((min(var_5, (min((arr_1 [i_10] [13]), (arr_24 [i_10])))))) | ((~((max(var_2, (arr_17 [i_10] [i_10] [i_10] [i_10] [i_10]))))))));
    }
    #pragma endscop
}
