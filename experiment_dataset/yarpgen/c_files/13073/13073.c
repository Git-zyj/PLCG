/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, ((((((2996 != (min(var_8, 234))))) | var_13)))));
    var_20 = ((3 ? var_9 : (max((var_15 * var_7), var_18))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_21 = (arr_0 [i_0] [i_1]);
            arr_4 [i_0] [i_0] = ((-(((arr_0 [i_0] [i_0]) ? 1 : var_17))));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_7 [i_0] [i_2] = ((!(((0 ? 0 : var_11)))));
            var_22 = var_10;
        }
        arr_8 [i_0] [i_0] = var_6;

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {

            for (int i_4 = 1; i_4 < 16;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    var_23 = (arr_2 [i_4 + 3]);
                    arr_16 [i_5] [i_0] [i_0] [i_0] = (arr_5 [i_4 + 2] [i_4 + 2] [i_4 + 2]);
                    var_24 = (min(var_24, var_4));
                    arr_17 [i_0] [i_3] [i_0] [i_0] = var_9;
                }
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    var_25 = (max(var_25, var_1));
                    var_26 = (min(var_26, (((+(((arr_13 [i_6] [i_3]) ? 3221715252 : (arr_6 [i_0]))))))));
                }
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        {
                            arr_25 [i_0] [i_0] [i_8] [i_7] [6] &= (-2454681798894916491 + (arr_12 [i_4 + 1] [10] [i_7 - 1]));
                            arr_26 [i_8] [i_8] [i_4] [i_7] [2] &= ((var_2 ? (((arr_3 [i_4]) ? var_1 : var_2)) : (arr_15 [i_7] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1])));
                            var_27 = (min(var_27, (((-(((arr_2 [i_0]) ? var_11 : var_13)))))));
                            var_28 = (arr_9 [i_4 + 1] [i_7 - 1]);
                            arr_27 [i_0] [1] [i_0] = ((0 ? (arr_13 [i_0] [i_4 + 3]) : var_10));
                        }
                    }
                }
            }
            arr_28 [i_0] [i_0] [i_0] = ((-(arr_5 [i_0] [i_0] [i_0])));
            arr_29 [i_0] [12] |= (((arr_3 [i_3]) ^ (!var_12)));
        }
    }
    var_29 = (-9223372036854775807 - 1);
    #pragma endscop
}
