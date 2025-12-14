/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0 - 2] [i_1] = ((((var_14 ? (arr_0 [i_0 - 1]) : 1)) != ((((arr_0 [i_0 - 2]) > (arr_0 [i_0 - 2]))))));
                arr_7 [i_0 - 1] [i_1] = var_11;

                for (int i_2 = 2; i_2 < 7;i_2 += 1) /* same iter space */
                {
                    var_20 = var_2;
                    arr_11 [i_2] = (arr_10 [i_2] [i_2 + 4] [i_2 - 2]);
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_2] [i_2] [i_3] [i_4] = (!var_15);
                                arr_17 [i_0] [i_0 - 2] [1] [i_0 - 2] [i_3] [1] &= (arr_9 [i_0]);
                                arr_18 [i_0 - 1] [i_2] [i_2] [i_3] [i_4 - 1] = 1;
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        arr_22 [i_0] [i_2] [i_2 + 3] [i_2 + 3] = var_7;
                        var_21 = (min(var_21, (-1 * var_12)));
                        arr_23 [2] [2] [i_1] [2] [i_1] [i_0] |= (min((1915950002 * 1), 2954807904844026379));
                        var_22 = (max(var_22, ((max(((var_13 ? (((min(-117, (arr_12 [i_0] [i_1] [i_5]))))) : -var_2)), ((((arr_5 [i_0]) ? (((-32 >= (arr_5 [i_5])))) : -28))))))));
                    }
                }
                for (int i_6 = 2; i_6 < 7;i_6 += 1) /* same iter space */
                {
                    arr_26 [i_0] [i_1] [i_1] [i_6 + 2] &= var_4;
                    var_23 = (max(var_23, (((((max((arr_5 [i_0 + 1]), (arr_21 [i_0 - 2] [i_6] [i_6 + 4])))) ? (((!(arr_5 [i_0 - 2])))) : ((-(arr_5 [i_0 - 1]))))))));
                    arr_27 [i_0] [i_1] = var_1;
                    arr_28 [i_0] |= 536870911;
                    arr_29 [i_0] [i_0 - 2] [i_1] [i_6] = ((1 + (arr_14 [i_0 - 1] [1] [i_1] [i_0] [i_6 + 4])));
                }
                /* vectorizable */
                for (int i_7 = 2; i_7 < 7;i_7 += 1) /* same iter space */
                {
                    var_24 = ((((((arr_31 [i_0] [i_0 - 2] [i_1] [i_7]) ? var_8 : (arr_31 [i_0] [i_1] [i_1] [i_7 - 1])))) ? ((1871049998531700857 ? 31 : -14)) : var_1));
                    arr_33 [i_7] [i_1] [i_7 - 2] [i_7 - 2] = ((~(((!(arr_13 [i_0] [i_1]))))));
                    var_25 -= ((!(arr_12 [i_0 - 2] [i_1] [i_7 + 4])));
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        {
                            var_26 = (!1);
                            arr_40 [2] = (((((arr_10 [i_1] [i_1] [i_9]) ? (arr_12 [i_0 - 1] [i_0 - 2] [i_0 + 1]) : (min(var_12, -79)))) > var_13));
                            var_27 -= (min((!215), (((arr_3 [i_0 + 1] [i_0 + 1]) << (0 || var_16)))));
                            arr_41 [i_0] [i_0 + 1] [i_1] [i_8] [1] = (min((arr_32 [i_0] [i_0]), (((arr_36 [i_0 - 1] [i_0 - 1]) ? (arr_36 [i_0 + 1] [i_0 + 1]) : (arr_36 [i_0 - 1] [i_0 + 1])))));
                        }
                    }
                }
            }
        }
    }
    var_28 |= var_17;
    var_29 = var_9;
    #pragma endscop
}
