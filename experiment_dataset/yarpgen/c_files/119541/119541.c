/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] = (max((max(2125937566, (arr_2 [i_1 - 1] [i_1 - 1]))), (arr_2 [i_0] [i_0])));
                arr_5 [i_1] = ((!(arr_3 [i_0] [i_0] [i_1 + 2])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            {
                arr_12 [i_2] [i_3] [i_3] = ((~((~(arr_3 [i_3] [i_3] [i_2])))));
                arr_13 [i_3] [i_3] [i_2] = (16902 <= (((~var_9) ? var_5 : (arr_8 [i_3]))));

                for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
                {
                    arr_16 [i_2] [i_2] [i_2] [i_2] = (((arr_15 [i_2] [i_3] [i_3]) && ((max((min(16916, 16902)), (-17 && 1658322257))))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 14;i_6 += 1)
                        {
                            {
                                arr_21 [i_2] [i_2] [i_4] [i_5] [i_6] [i_6] = ((var_0 >> (((max((arr_0 [i_2]), -1009267020)) - 2060290902))));
                                arr_22 [i_3] [i_6] &= (max(1143117226, (((((var_7 ? (arr_20 [i_2] [i_3] [i_2] [i_5 + 3] [i_6]) : (arr_11 [i_2] [i_2] [i_2])))) ? (((arr_18 [i_2]) * 14692133628073112797)) : (-2147483647 - 1)))));
                                arr_23 [i_2] [i_3] [i_5] [i_5] [i_5] [i_5] = (24 - 1);
                            }
                        }
                    }
                    arr_24 [i_2] [i_2] [i_2] [i_2] = ((!(arr_11 [i_2] [i_3] [i_4])));
                    arr_25 [i_3] = (min((arr_15 [i_2] [i_3] [i_4]), (((arr_15 [i_2] [i_2] [i_2]) ? 16549 : 3754610445636438796))));
                    arr_26 [i_2] [i_2] [i_4] = (((((max(3754610445636438819, -8192)))) ? ((((arr_7 [i_2]) - (arr_18 [i_2])))) : (arr_9 [i_2] [i_3])));
                }
                for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
                {
                    arr_29 [i_7] [i_7] [i_7] = (((((-17 ? (((arr_6 [i_3]) ? var_4 : var_4)) : (max((arr_17 [i_3] [i_3] [i_3]), (arr_19 [i_2] [i_2])))))) || var_4));
                    arr_30 [i_2] [i_3] [i_3] [i_3] = (arr_15 [i_2] [i_3] [i_7]);
                }
                /* vectorizable */
                for (int i_8 = 2; i_8 < 14;i_8 += 1)
                {

                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        arr_36 [i_2] [i_2] = var_1;
                        arr_37 [i_2] [i_3] [i_8] [i_2] = ((((arr_20 [i_2] [i_2] [i_2] [i_2] [i_2]) && 16571)));
                        arr_38 [i_3] [i_8] [i_3] [i_2] [i_2] = 194;
                    }
                    arr_39 [i_2] [i_2] = (((arr_9 [i_2] [i_3]) * (arr_32 [i_8])));
                    arr_40 [i_2] [i_3] [i_8] = ((((var_0 ? 29855 : var_3)) <= 1952));
                    arr_41 [i_8] [i_3] [i_3] [i_8] = (((arr_33 [i_2] [i_8 - 1] [i_8] [i_8]) != var_0));
                    arr_42 [i_2] [i_3] = ((((~(arr_33 [i_2] [i_2] [i_2] [i_2]))) >> ((((6 ? var_4 : 16549)) - 2559392947))));
                }
            }
        }
    }
    var_13 = var_8;
    var_14 = -var_5;
    var_15 |= ((-(((((var_4 ? 16549 : var_10))) ? var_3 : 9595))));
    #pragma endscop
}
