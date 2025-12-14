/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131556
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_11 = ((~(arr_3 [i_1] [i_0] [i_0])));
                var_12 = ((+(((arr_1 [i_0] [i_1]) ? ((((arr_0 [i_1]) ? (arr_5 [i_0] [i_1] [i_1]) : (arr_1 [i_1] [i_1])))) : (arr_0 [i_1])))));
                var_13 &= (((((arr_5 [i_0] [i_0] [i_0]) - var_10)) + 18511));
                var_14 ^= ((((min((arr_6 [i_0]), (((arr_3 [i_0] [i_0] [i_1]) ? var_10 : (arr_6 [i_1])))))) ? (arr_3 [i_0] [i_0] [i_0]) : (arr_1 [i_0] [i_0])));

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_15 = ((((max(var_5, (arr_6 [i_1])))) <= var_10));
                    var_16 = (((((((arr_0 [i_0]) ? var_8 : var_3)) / (arr_6 [i_0]))) - var_9));
                }
            }
        }
    }
    var_17 += var_2;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            {
                var_18 ^= ((!((((((50870 ? (arr_0 [i_3]) : (arr_5 [i_4] [i_4] [i_3])))) ? (arr_8 [i_4]) : (arr_14 [i_3] [i_3] [i_3]))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        {

                            for (int i_7 = 2; i_7 < 11;i_7 += 1)
                            {
                                var_19 = var_0;
                                arr_23 [i_3] [i_4] [i_5] [i_6] [i_7] = (((((~(arr_21 [i_7 + 2] [i_7] [i_7 - 2] [i_7 - 2] [i_7 + 2] [i_7 - 2])))) - ((((((arr_10 [i_4] [i_4]) ^ 2543144040))) ? (arr_8 [i_4]) : ((var_1 + (arr_2 [i_3])))))));
                                var_20 = (arr_19 [i_3] [i_5] [i_7 + 2] [i_7 - 2] [i_7 + 2] [i_7]);
                                var_21 = (min(var_21, var_10));
                            }
                            for (int i_8 = 0; i_8 < 14;i_8 += 1)
                            {
                                arr_26 [i_3] [i_3] [i_3] [i_3] |= ((-270006400 > ((((arr_2 [i_3]) || (arr_2 [i_6]))))));
                                var_22 = (max(var_22, (arr_0 [i_3])));
                                var_23 *= var_5;
                            }
                            for (int i_9 = 0; i_9 < 14;i_9 += 1) /* same iter space */
                            {
                                var_24 = (max((arr_11 [i_9]), (((!(arr_18 [i_5]))))));
                                var_25 = (((min((arr_11 [i_5]), var_10)) * (arr_6 [i_6])));
                                var_26 &= var_4;
                                var_27 = (max(var_27, 2684876348));
                                var_28 = (max(var_28, (((~((-(max(50870, (arr_3 [i_5] [i_5] [i_5]))))))))));
                            }
                            for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
                            {
                                arr_32 [i_10] [i_10] [i_4] [i_4] [i_5] [i_4] [i_3] = (((~(arr_18 [i_10]))));
                                var_29 = (max(var_29, ((~((min((arr_10 [i_3] [i_3]), (arr_10 [i_6] [i_5]))))))));
                            }
                            arr_33 [i_3] [i_3] [i_4] [i_5] [i_6] |= ((((((arr_16 [i_3] [i_4] [i_5]) + (arr_4 [i_3] [i_3])))) > ((14665 ? ((((arr_9 [i_6]) ? var_6 : 0))) : ((~(arr_7 [i_3] [i_3] [i_5] [i_3])))))));
                        }
                    }
                }
                arr_34 [i_3] = (((arr_20 [i_3] [i_4] [i_3] [i_3]) ? (arr_30 [i_4] [i_3]) : (arr_20 [i_3] [i_4] [i_3] [i_3])));
            }
        }
    }
    var_30 = ((50871 ? var_8 : (((((var_5 ? var_8 : var_7)))))));
    #pragma endscop
}
