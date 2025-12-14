/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            {
                var_13 = (max(var_13, var_3));

                for (int i_2 = 2; i_2 < 24;i_2 += 1) /* same iter space */
                {
                    var_14 += ((((max((min(12565664760377495971, var_7)), (1 >= var_2)))) ? ((1 ? -7569428654075965754 : 4238654140)) : var_11));

                    for (int i_3 = 1; i_3 < 22;i_3 += 1) /* same iter space */
                    {
                        var_15 *= ((7569428654075965744 ? (min((~var_6), -127)) : var_6));
                        var_16 += (~1);
                    }
                    for (int i_4 = 1; i_4 < 22;i_4 += 1) /* same iter space */
                    {
                        arr_14 [i_0] [12] [16] [i_4] = (max((((var_0 || var_6) || (((var_3 ? var_5 : -31474))))), (((var_7 || var_6) || -47457288))));
                        arr_15 [i_4 + 2] = ((((min(7569428654075965754, 1))) | (max(((max(var_3, var_4))), (80 * var_9)))));
                    }
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 22;i_5 += 1) /* same iter space */
                    {
                        var_17 ^= 127;

                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            arr_20 [i_5] [i_5] [6] [17] [i_6] = (((-127 ? var_7 : -69)));
                            arr_21 [i_0] [i_1] [1] [i_5] [2] = -86;
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            arr_25 [i_1] [i_5] = var_11;
                            arr_26 [i_5] = var_11;
                            arr_27 [i_5] = ((~((var_0 ? var_9 : 1))));
                            arr_28 [i_5] [23] [13] [i_1] [i_5] = var_7;
                        }
                        arr_29 [i_0] [i_1] [i_2] [i_5] = var_3;
                    }
                    var_18 = (min(var_18, ((max(((((min(var_5, 0))) ? var_6 : (!var_7))), ((max(1, var_3))))))));
                }
                for (int i_8 = 2; i_8 < 24;i_8 += 1) /* same iter space */
                {
                    arr_33 [13] [13] [i_8] = (((((min(-127, 215)))) << (-47 + 49)));
                    arr_34 [i_8] [9] [19] [i_0] = ((((min(48, 36662))) >= var_2));
                }
            }
        }
    }
    var_19 ^= ((((max(((var_7 ? var_10 : var_10)), (~var_10)))) ? ((min((~var_12), (~var_3)))) : (min(var_7, (max(var_9, var_3))))));
    var_20 = (((((-(max(var_0, 123))))) ? var_12 : ((((min(-2, 1))) ? (16 + -7899) : (((-28713 ? var_4 : var_6)))))));
    #pragma endscop
}
