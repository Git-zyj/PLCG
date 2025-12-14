/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115097
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_19 -= ((max(((var_7 ? (arr_1 [i_0] [2]) : 177)), (arr_4 [i_1]))));
                    var_20 -= 60129542144;
                }
            }
        }
    }
    var_21 *= (((((var_5 ? (!var_17) : ((max(-17261, var_12)))))) && var_16));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            {

                for (int i_5 = 2; i_5 < 19;i_5 += 1)
                {
                    var_22 = (max(var_22, ((max(((-(max(4294967295, (arr_2 [i_3] [i_4] [12]))))), (((arr_5 [15] [i_4] [i_3]) & 1)))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            {
                                var_23 = (max(var_23, 901073141));
                                var_24 = (min(var_24, (((~((((arr_2 [i_5 - 1] [i_5 - 2] [i_5 + 1]) && (arr_2 [i_5 - 1] [i_5 - 2] [i_5 + 1])))))))));
                                var_25 -= ((~(arr_6 [i_6])));
                                var_26 -= (((((-901073141 * ((max((arr_6 [i_3]), (arr_15 [i_4] [14]))))))) ? (((((arr_12 [i_3] [i_6] [i_3]) != 901073123)) ? (arr_3 [23] [i_4] [i_7]) : var_15)) : 1));
                                var_27 = (max(var_27, (~3140183212)));
                            }
                        }
                    }

                    for (int i_8 = 1; i_8 < 18;i_8 += 1)
                    {
                        arr_20 [i_4] [i_4] [i_8] [1] [i_8] &= (((arr_17 [i_8] [i_8] [i_5] [i_3] [i_3] [i_3]) ? var_0 : (arr_14 [i_3] [i_3] [i_5] [i_3])));
                        var_28 = (max(var_28, (((((((arr_11 [i_5 + 1] [i_4] [i_8] [13]) + ((-(arr_7 [i_8])))))) ? (((-(arr_3 [i_4] [i_5] [i_8 + 2])))) : (((65509 ? (max(-1189156192, (arr_0 [i_5] [i_5]))) : (89 ^ var_13)))))))));
                    }
                    arr_21 [i_3] [i_3] [i_4] [i_3] |= ((-((((arr_3 [i_5 - 1] [6] [i_3]) || ((!(arr_0 [i_3] [i_3]))))))));
                }
                var_29 &= var_2;
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        {
                            arr_26 [7] [i_9] [i_10] |= ((var_12 ? (-2124790600 & -1) : var_4));
                            var_30 ^= ((~((((((arr_12 [i_4] [i_4] [i_10]) == -2))) << (((arr_2 [i_3] [i_3] [1]) - 73))))));

                            for (int i_11 = 0; i_11 < 20;i_11 += 1)
                            {
                                var_31 ^= (((-(arr_9 [i_9] [14]))));
                                var_32 -= ((~(arr_2 [i_11] [15] [i_11])));
                            }
                            for (int i_12 = 0; i_12 < 20;i_12 += 1)
                            {
                                arr_32 [i_3] [i_3] [i_4] [i_9] [i_10] [i_12] &= (arr_31 [i_4] [17] [i_4] [i_4] [13]);
                                var_33 |= (+-901073124);
                            }
                        }
                    }
                }
                var_34 += ((-(arr_16 [i_3] [i_3] [i_3] [i_3] [i_3])));
                var_35 += ((60537 - var_10) * (arr_12 [i_4] [i_3] [13]));
            }
        }
    }
    #pragma endscop
}
