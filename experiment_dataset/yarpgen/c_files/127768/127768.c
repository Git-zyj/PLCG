/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127768
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = (((((-19116 ? -19095 : (~-4)))) ? (-47 >= var_10) : (arr_1 [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {

                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            var_20 += ((!(arr_6 [i_2 + 1] [i_2 + 1] [i_2 + 1])));
                            var_21 = ((var_15 ? (((1530403293 && (((-579045162 ? 2436965231784743469 : var_5)))))) : -var_12));
                            arr_12 [i_0] [i_0] [i_2] [i_3] [i_4 + 1] = (max((((!(((var_13 ? 2436965231784743469 : (arr_5 [i_0] [i_1] [i_2] [i_3]))))))), 7377326456959163893));
                        }
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            var_22 = (((-1530403283 / var_5) > ((var_3 ? (arr_4 [i_0]) : 17039061843760763213))));
                            arr_16 [i_0] [i_3] [i_3] [i_3] [i_2] [i_1] [i_0] = ((1530403272 ? 0 : -7558119069701014519));
                        }
                        for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
                        {
                            var_23 = ((!((((8972014882652160 && 12512015298664510630) ? 3648612265789970755 : -4)))));
                            var_24 = max(18446744073709551601, (((var_13 ? var_17 : (arr_17 [i_0] [i_1] [i_1] [i_2 - 2] [i_3])))));
                            var_25 = (max(var_18, -var_3));
                            var_26 = (((-127 - 1) | 31));
                            var_27 = (((((var_11 ? (max(-7558119069701014536, var_12)) : (var_8 >= var_14)))) ? ((((5675915419315711304 ? var_9 : var_13)) & -6172)) : ((((var_16 || (!var_16)))))));
                        }
                        for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
                        {
                            var_28 = (min(var_28, var_19));
                            var_29 = 1;
                            arr_23 [i_0] [i_0] = var_13;
                        }

                        for (int i_8 = 2; i_8 < 14;i_8 += 1)
                        {
                            var_30 = ((~(arr_24 [i_0] [i_1] [i_2] [i_3] [i_8])));
                            arr_27 [i_0] [i_0] [i_2] [i_3] [i_8] [i_8] [i_8] = ((!(~var_8)));
                        }
                        for (int i_9 = 0; i_9 < 16;i_9 += 1) /* same iter space */
                        {
                            arr_32 [i_0] [i_0] [i_3] [i_3] = (arr_7 [i_0] [i_0] [i_2] [i_3]);
                            var_31 = 65024;
                            var_32 = ((-var_14 ? var_19 : ((120 ? 2 : -1793))));
                            var_33 = (arr_28 [i_9] [i_0] [i_2] [i_0] [i_0]);
                        }
                        for (int i_10 = 0; i_10 < 16;i_10 += 1) /* same iter space */
                        {
                            arr_35 [i_0] [i_1] [i_2] [i_3] [i_10] = ((!(!63)));
                            var_34 = (min(var_34, -var_0));
                            var_35 |= -7720953141613360269;
                            var_36 = ((!(arr_9 [i_0] [i_1] [i_10] [i_3])));
                        }
                    }
                }
            }
        }
        var_37 = arr_30 [i_0] [i_0] [i_0];
        var_38 = (min(var_38, var_13));
    }
    var_39 = var_0;
    #pragma endscop
}
