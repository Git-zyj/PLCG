/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_4 [i_0] [i_1] [i_1] = ((!((max((((1 ^ (arr_3 [i_0])))), (max((arr_2 [i_0] [i_0]), (arr_1 [1]))))))));
            var_12 = (min((2576670934077600087 && 14), (min((!85), ((var_10 == (arr_1 [i_0])))))));
        }
        arr_5 [i_0] [i_0] = ((+((((arr_1 [i_0]) != (arr_3 [i_0]))))));
        arr_6 [i_0] [i_0] = ((-(max((var_4 * 1), var_1))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 15;i_4 += 1)
                {
                    {
                        arr_14 [i_3] [i_2] = var_6;
                        var_13 = ((2794978571 ? 7014447221850811635 : 2147483640));
                    }
                }
            }
        }
        var_14 = (arr_3 [i_0]);
    }
    for (int i_5 = 3; i_5 < 19;i_5 += 1)
    {
        var_15 = ((!((max(var_9, (!var_7))))));
        arr_17 [i_5] = (max(((((min(var_4, (arr_16 [i_5] [i_5])))) && ((((arr_15 [i_5]) ? 2794978551 : (arr_15 [i_5 - 3])))))), ((-var_0 >= (max((arr_15 [i_5]), var_0))))));
        var_16 = (max(var_8, (1499988725 == 9223372036854775807)));
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 19;i_7 += 1)
            {
                {
                    var_17 = var_11;
                    /* LoopNest 2 */
                    for (int i_8 = 4; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            {
                                arr_28 [i_6] [i_6] [i_6] [i_6] [i_9] [i_6] = (arr_24 [i_9] [i_6] [i_8] [11] [i_6] [11]);
                                arr_29 [i_5] [i_6] [i_7 - 1] [i_5] [i_5] [i_9] [i_6] = (i_6 % 2 == zero) ? ((((((~var_7) ? var_9 : (((!(arr_24 [i_5] [i_5 - 3] [i_6] [i_5] [i_8] [i_9])))))) >> (((min(-2794978562, (arr_18 [i_6]))) - 802))))) : ((((((~var_7) ? var_9 : (((!(arr_24 [i_5] [i_5 - 3] [i_6] [i_5] [i_8] [i_9])))))) >> (((((min(-2794978562, (arr_18 [i_6]))) - 802)) - 1499987904)))));
                                arr_30 [i_5] [i_5] [i_6] [i_5] [i_5] = (arr_25 [i_5] [i_5] [i_7]);
                                arr_31 [1] [i_6] [i_7] [i_6] [i_9] [i_6] [i_8] = (max(1732391280, (((max(var_9, (arr_23 [i_5] [i_6] [i_6])))))));
                            }
                        }
                    }
                    arr_32 [i_6] = (min((((-2147483647 - 1) ? ((var_5 ? var_7 : var_5)) : var_6)), ((((!var_0) ? 4270152594 : ((9 >> (9223372036854775807 - 9223372036854775746))))))));
                }
            }
        }
    }
    var_18 *= var_11;
    var_19 -= ((((max((max(var_10, var_5)), (~var_9)))) ? (((var_5 ? ((2794978565 ? var_6 : var_3)) : (max(var_4, var_3))))) : var_7));
    #pragma endscop
}
