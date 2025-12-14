/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150162
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 4; i_2 < 8;i_2 += 1)
                {
                    var_20 = max((min(-106, var_17)), (!var_15));
                    var_21 = ((-((min((arr_5 [i_2] [i_2 - 2] [i_0]), (-32767 - 1))))));
                    var_22 -= -512;
                    var_23 = (min((var_7 >= var_9), (((arr_6 [i_2 - 4] [i_2 - 1] [i_2 + 2]) - var_2))));
                }
                for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
                {
                    var_24 = (-1 <= -23);
                    arr_12 [i_0] [i_0] = (arr_0 [i_1] [i_3]);
                    var_25 = 192;
                }
                for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
                {
                    arr_17 [i_0] [i_1] [i_4] = ((((((arr_4 [i_1]) >= ((max(var_8, var_17)))))) % var_3));
                    arr_18 [i_0] [i_0] = arr_4 [i_0];
                    var_26 = arr_4 [8];
                }
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    var_27 += ((4 << (((((max(-3, -59))) == 13)))));
                    var_28 -= 15;
                }

                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    var_29 += (max((!var_16), ((195 << (847 - 832)))));
                    var_30 = ((((var_6 != (arr_0 [i_0] [i_1]))) && (4064 ^ -8)));
                    arr_25 [i_0] [1] [1] = -3712;
                    arr_26 [i_0] [i_0] [i_6] = ((-(((arr_3 [i_1]) * -6))));
                    var_31 -= (min(((((arr_14 [i_6] [i_6] [i_6]) && ((!(arr_11 [6] [i_0] [i_6])))))), (max((-83 | var_6), (!252)))));
                }
                var_32 &= (max((max((arr_15 [i_0]), var_0)), ((((arr_15 [i_0]) > (arr_15 [i_1]))))));

                for (int i_7 = 1; i_7 < 6;i_7 += 1)
                {
                    arr_29 [i_0] [i_1] [i_7] [i_7] = ((~((max(-33, (arr_2 [i_7 + 1]))))));

                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        var_33 = 0;
                        arr_33 [i_7] [i_0] [i_1] [i_7] [i_7] [i_7] = (arr_28 [1] [i_7]);
                        var_34 = (min(((195 ^ ((var_12 << (34 - 20))))), -2));
                    }
                }
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {

                    for (int i_10 = 0; i_10 < 10;i_10 += 1) /* same iter space */
                    {

                        for (int i_11 = 4; i_11 < 8;i_11 += 1)
                        {
                            arr_44 [i_11] [i_10] [1] [i_10] [i_0] = ((max((!-8), (arr_13 [i_11 - 1] [i_11] [i_11 + 2] [i_11]))));
                            var_35 = (min((max(var_2, -20475)), (arr_38 [i_0] [i_0] [i_9] [i_1] [i_0])));
                            var_36 ^= (arr_22 [i_9] [i_11 + 1]);
                        }
                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 10;i_12 += 1)
                        {
                            var_37 += var_12;
                            var_38 = ((-15 | ((var_12 << (((arr_35 [5] [i_9] [i_9]) + 22097))))));
                            arr_47 [i_0] [i_10] [4] [9] = ((var_6 | (!var_4)));
                        }
                        var_39 = (min((~-18), 16384));
                    }
                    for (int i_13 = 0; i_13 < 10;i_13 += 1) /* same iter space */
                    {
                        arr_52 [i_0] [i_1] [i_1] [i_13] = min(var_17, (min((arr_27 [i_0] [i_0] [i_13]), var_9)));
                        var_40 |= var_18;
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 10;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 10;i_15 += 1)
                        {
                            {
                                var_41 = (max(var_41, -var_17));
                                var_42 = ((+((((((arr_30 [i_15]) >= -6857))) - var_7))));
                                arr_59 [i_1] [i_1] [i_1] [i_1] [i_1] = min(((((~9808) || 1792))), (arr_51 [i_0] [i_15]));
                            }
                        }
                    }
                    arr_60 [i_0] [i_9] = var_9;
                }
            }
        }
    }
    var_43 = var_10;
    var_44 = (min((min(((-18 ? var_1 : 48)), var_13)), (((!var_19) ? var_8 : var_18))));
    var_45 = -var_12;
    #pragma endscop
}
