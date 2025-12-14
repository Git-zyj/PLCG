/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_6, (((var_17 || var_11) ? var_0 : (!var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_0] [6] = var_5;
                var_20 -= ((((((max(var_11, (arr_0 [i_0] [i_0])))) == (arr_2 [i_0])))) & var_16);

                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    arr_7 [i_0] = var_15;
                    arr_8 [i_0] [i_1] [i_0] = ((var_5 ? ((var_10 ? (arr_0 [i_0] [i_0 - 1]) : var_2)) : ((((max(var_17, var_2))) & (var_18 ^ var_9)))));
                    arr_9 [i_0] [i_0] [11] [i_2] = (((arr_1 [i_0 + 1] [i_0 + 1]) && (arr_3 [i_1] [i_2])));
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {

                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        var_21 = var_12;
                        var_22 -= var_11;
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        var_23 = ((((arr_5 [i_0] [i_3] [i_0]) >= var_1)));
                        var_24 = (var_5 <= (arr_14 [i_0] [i_3] [i_1] [i_1] [i_1] [i_0]));
                    }
                    /* vectorizable */
                    for (int i_6 = 3; i_6 < 17;i_6 += 1)
                    {
                        var_25 = ((var_11 & (arr_15 [i_0] [i_1] [i_1] [i_6])));
                        arr_18 [i_0 + 1] [i_0] [i_0] [i_1] [i_1] [i_0] = (((((!(arr_14 [i_0] [i_0] [i_0] [1] [1] [i_0])))) & ((var_1 ? (arr_15 [i_0 + 2] [1] [i_3] [10]) : (arr_0 [i_0] [i_6 - 3])))));

                        for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                        {
                            var_26 = ((var_17 || (var_3 || var_5)));
                            arr_22 [10] [i_0] [i_3] [i_3] [i_3] = (+(((arr_21 [i_0] [i_1] [i_1]) & var_17)));
                            var_27 *= (arr_17 [i_7] [i_1] [i_1]);
                            arr_23 [i_0] [i_0 - 1] [i_1] [i_0 - 1] [i_0] [i_1] [i_0] = var_7;
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                        {
                            var_28 = (arr_25 [i_0] [i_0 + 1] [i_1] [i_3] [i_6] [i_8]);
                            arr_27 [i_0] [i_0] [i_3] [i_3] = var_5;
                        }
                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            var_29 ^= (((arr_21 [i_1] [i_1] [i_3]) >> var_16));
                            var_30 -= ((((var_15 ^ (arr_20 [i_9]))) / (((var_15 ? (arr_16 [i_0] [1] [i_0] [i_0 + 2] [14] [i_1]) : var_4)))));
                            arr_30 [i_0] [i_1] [i_3] [i_1] = (arr_11 [i_1] [i_1] [i_6 + 1] [i_9]);
                            arr_31 [i_0 - 1] [i_0 - 1] [i_0] [1] [i_9] [i_9] = var_17;
                            var_31 -= ((var_2 ^ ((var_6 + (arr_1 [i_1] [i_9])))));
                        }
                    }
                    var_32 = (max(1152921504590069760, -2127190157));
                }
            }
        }
    }
    var_33 = var_14;
    var_34 = (min(var_34, (((var_7 ? var_17 : (((var_18 - var_0) ? var_3 : var_0)))))));
    #pragma endscop
}
