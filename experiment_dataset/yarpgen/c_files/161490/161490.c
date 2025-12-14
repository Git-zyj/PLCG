/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161490
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_20 = (min(var_20, ((((((var_15 ? var_12 : (arr_2 [i_0])))) ? ((var_8 ? (arr_0 [i_0] [i_0]) : var_8)) : (arr_1 [i_0 + 1] [i_0 - 3]))))));
        arr_3 [i_0] = (49859 == var_9);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_0] = var_19;
                    var_21 = (((arr_7 [i_0 + 2] [i_1]) << (255 - 231)));
                }
            }
        }
        arr_12 [i_0] = (((arr_5 [i_0 + 2] [i_0 - 2]) * var_12));
    }
    for (int i_3 = 2; i_3 < 18;i_3 += 1)
    {
        arr_15 [i_3] = ((!(-2675032168190170174 & var_15)));
        arr_16 [i_3] [i_3] = (((((arr_14 [i_3 - 2] [i_3 - 2]) ? -5124 : (arr_14 [i_3 - 1] [i_3 - 1]))) != (((var_19 == (~-53))))));

        /* vectorizable */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            var_22 = 71494644084506624;
            var_23 = (arr_17 [i_3]);
            arr_20 [i_3] [i_4] [i_4] = -var_2;
            var_24 = ((((((var_4 ? (-32767 - 1) : var_7)) + 2147483647)) >> (15184 - 15178)));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            arr_24 [i_5] [i_3] = ((((6 ? var_15 : 18446744073709551615))) ? var_18 : (arr_13 [i_3 - 1] [i_3 + 1]));
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 17;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        {
                            arr_33 [i_3] [i_3] [i_3] [i_7] [i_6] [i_6] = ((arr_21 [i_6] [i_3 + 1] [i_7 + 1]) ? (arr_21 [i_3] [i_3 + 1] [i_7 - 1]) : (arr_21 [i_3] [i_3 - 1] [i_7 + 2]));
                            arr_34 [i_3] [i_3] [i_3] [i_6] [i_3] = ((var_2 || (((-(arr_18 [i_5] [i_5]))))));
                            var_25 = (min(var_25, ((((~var_2) * (((var_18 ? var_1 : var_14))))))));
                            var_26 &= ((-(arr_30 [i_5])));
                        }
                    }
                }
            }
            var_27 = var_9;
            var_28 = var_4;
        }
        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {
            arr_38 [i_3] [i_3] = max((arr_27 [i_3] [i_9] [i_9] [i_9]), (arr_32 [i_3] [2] [i_3 - 1] [i_3] [2] [i_3 - 1]));
            var_29 = 28;
        }
        for (int i_10 = 1; i_10 < 16;i_10 += 1)
        {
            var_30 = (((arr_13 [i_3] [i_10]) + ((53 / (arr_18 [i_10] [i_10 + 3])))));
            var_31 = (max((max(8854788244766948282, 378897443)), ((((((arr_13 [i_3] [i_3]) ? var_17 : (arr_27 [i_3] [i_3] [i_3] [i_3])))) ? 4035225266123964416 : (108 >= var_3)))));
            var_32 = ((+((((arr_40 [i_10 - 1]) || (arr_40 [i_10 - 1]))))));
        }
        arr_41 [i_3] [i_3] = (((((arr_32 [i_3 + 1] [i_3] [i_3 + 1] [i_3 - 2] [6] [i_3 - 2]) & (arr_32 [i_3] [i_3] [i_3] [i_3] [0] [i_3]))) << (((max((arr_21 [i_3] [i_3] [i_3 + 1]), (arr_37 [i_3 - 1] [i_3 + 1]))) - 169))));
    }
    var_33 = var_18;
    #pragma endscop
}
