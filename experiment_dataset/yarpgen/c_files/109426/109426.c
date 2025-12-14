/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 13;
    var_21 = (max(24, 0));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_22 = ((((((((18446744073709551573 ? (arr_1 [i_1] [i_1]) : (arr_3 [i_1])))) ? ((((arr_0 [i_0]) == var_18))) : (arr_1 [i_0 - 1] [i_0 + 1])))) && 28));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_0] [i_1] = (((((((arr_5 [i_1] [i_2]) & var_3)) | ((max(var_19, var_19)))))) == (max(var_12, 24)));
                            var_23 = (arr_3 [i_1]);

                            for (int i_4 = 0; i_4 < 11;i_4 += 1)
                            {
                                var_24 = ((!((min((max(-9223372036854775795, 13)), (arr_7 [1] [i_1] [i_1] [1]))))));
                                arr_12 [i_1] = (-9223372036854775807 - 1);
                                var_25 = (min(((var_0 % (max(var_18, (arr_0 [4]))))), -4297958110055327380));
                                var_26 = (((161 - 0) && (arr_3 [i_1])));
                            }
                            var_27 = (max(var_27, (((~(min(-var_14, (((arr_10 [i_0] [2] [i_2] [i_1] [i_0] [i_2] [i_0]) ? (arr_3 [i_2]) : 7343551961729058138)))))))));
                            var_28 = ((+(((!-28) ? 1207330324 : var_18))));
                        }
                    }
                }
                arr_13 [i_1] [i_1] = (-9223372036854775807 - 1);
                var_29 = (max(var_29, (arr_5 [2] [i_0 + 1])));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 8;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 9;i_7 += 1)
                        {
                            {
                                arr_23 [i_1] [i_5] [1] = (((((0 | (!var_17)))) ? ((var_18 ? var_11 : (arr_4 [i_0 - 1]))) : -713079823));
                                arr_24 [i_6] [i_6] [i_6] [i_6 - 1] [i_1] = (((-9223372036854775807 - 1) ? ((-(min(-9223372036854775807, -3133267627970111578)))) : 8177414815048720165));
                                var_30 += ((var_6 ? ((max((arr_3 [1]), (min((-9223372036854775807 - 1), (arr_3 [0])))))) : ((var_10 ? (min((arr_22 [i_7] [10] [6] [10] [4]), 18446744073709551607)) : (arr_19 [10] [i_1])))));
                                var_31 -= var_12;
                            }
                        }
                    }
                }
            }
        }
    }
    var_32 = (var_15 && var_0);
    var_33 = 4;
    #pragma endscop
}
