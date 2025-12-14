/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((((((max(3968, -3961))) ? (arr_3 [i_0 - 3] [i_0 + 1] [i_0]) : 1))) ? (((1 ^ 0) << (((min(-2, var_15)) + 24)))) : 1));
                arr_6 [i_0] = ((((-2147483627 ? (arr_0 [i_1]) : (arr_0 [i_1])))) ? ((((((arr_4 [i_0] [i_1] [i_1]) ? var_5 : var_8))) ? (((-9223372036854775805 ? (arr_1 [i_0]) : 2147483647))) : (min((arr_4 [i_0] [i_0] [i_1]), var_10)))) : ((((!(arr_3 [i_0] [i_0] [i_0]))))));

                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_15 [i_3] [i_1] [i_1] [i_3] [i_2] |= ((((min(var_11, 194))) ? (((min((arr_0 [i_2 - 1]), (arr_0 [i_2 - 2]))))) : ((((((arr_11 [12]) ? -9 : 121))) ? (min((arr_4 [15] [15] [i_1]), -7)) : ((max(-20, (arr_9 [i_2 - 1] [i_2 - 1] [i_1]))))))));
                                arr_16 [i_0] [i_3] = (((((var_8 - (arr_2 [i_0])) - ((-123 ? (arr_0 [i_4 + 1]) : var_2))))));
                            }
                        }
                    }
                    arr_17 [i_1] [i_0] = (min((max((arr_9 [i_0] [i_1] [i_2]), (arr_2 [i_0]))), (max((-2147483647 - 1), -730692120))));
                }
                for (int i_5 = 2; i_5 < 13;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        var_18 += (max((((-3947 ? -11 : (arr_22 [i_1] [i_6])))), ((((arr_23 [i_0] [i_0] [i_0 - 3] [i_0 + 1]) ? (7 >= var_6) : -32763)))));
                        arr_24 [i_0] = ((-102 == (((arr_2 [i_0]) & (arr_23 [i_5] [i_5] [i_5 + 2] [i_5 + 4])))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        arr_28 [7] [i_1] [i_1] [i_5] [i_0] [i_7] = (arr_20 [i_0 + 2] [i_5 - 2] [i_0 + 2]);
                        arr_29 [i_0] [i_0] [1] = ((-(arr_27 [i_7])));
                        var_19 = (max(var_19, (((-((var_11 ? var_9 : 8)))))));
                    }

                    for (int i_8 = 4; i_8 < 13;i_8 += 1)
                    {
                        var_20 ^= var_2;
                        arr_34 [i_0] = (arr_1 [i_0]);
                    }
                }
                arr_35 [i_0] [i_0] = ((((max(0, (arr_31 [i_0] [i_0] [i_0 + 1])))) == (arr_33 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1])));
            }
        }
    }
    var_21 = var_17;
    #pragma endscop
}
