/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= ((-((~(~-6036588691917382577)))));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_21 = (~-2147483647);
        var_22 = (~((-(arr_1 [i_0] [i_0]))));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {

                for (int i_3 = 2; i_3 < 8;i_3 += 1)
                {
                    arr_13 [i_0] [i_0] [7] [i_0 - 1] [i_0] [i_0 + 1] = ((~(((!(((~(arr_2 [i_0])))))))));
                    arr_14 [5] [i_1] [6] [i_0] = ((!(!34021)));

                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        var_23 = ((~((-((~(arr_16 [i_0 + 1] [i_4] [i_0 + 1] [i_4] [i_4])))))));
                        var_24 = (+-var_15);
                    }
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        var_25 = ((-(!1479008208592928726)));
                        arr_20 [i_0] [i_1] [i_1] [i_1] [i_1] = ((!(((~(arr_18 [i_0] [i_1] [i_5] [i_3] [i_5]))))));
                    }
                    arr_21 [i_3] [i_3] [i_3] [i_1] [i_0] &= ((~((~((~(arr_8 [i_2] [i_1])))))));
                }
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    var_26 += (~-65);
                    var_27 = (((~(~var_4))));
                }
                var_28 -= ((!((!(~6036588691917382573)))));
            }
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                var_29 = ((!(!4229231690)));
                var_30 = ((~(((-(arr_19 [i_0] [i_1] [i_1] [i_7] [i_7] [i_7]))))));
                var_31 *= ((~((-(((!(arr_19 [i_7] [i_0] [i_1] [i_1] [i_0] [i_0]))))))));
                var_32 = (--6036588691917382560);
            }
            var_33 = ((!(!6036588691917382576)));
        }
    }
    /* vectorizable */
    for (int i_8 = 2; i_8 < 24;i_8 += 1)
    {
        var_34 = (--90);
        var_35 *= (~var_2);
        arr_32 [i_8] = ((!(!var_10)));
    }
    for (int i_9 = 0; i_9 < 21;i_9 += 1)
    {
        var_36 -= ((-(arr_34 [i_9] [12])));
        var_37 ^= (~240);
        var_38 -= (!var_5);
    }
    for (int i_10 = 0; i_10 < 23;i_10 += 1)
    {
        arr_40 [i_10] [i_10] = ((-(!67108863)));
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 23;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 19;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 23;i_13 += 1)
                {
                    {

                        for (int i_14 = 0; i_14 < 23;i_14 += 1)
                        {
                            arr_51 [i_10] [i_11] [i_12] [i_13] [i_13] = ((!(~-38)));
                            arr_52 [i_13] [i_13] = ((!((!((!(arr_42 [i_10] [i_13] [i_10])))))));
                        }

                        for (int i_15 = 4; i_15 < 22;i_15 += 1)
                        {
                            arr_55 [i_10] [19] [19] [i_10] [i_13] [i_13] [i_10] = ((!(((-(~var_17))))));
                            arr_56 [i_10] [i_10] [i_10] [i_13] [i_13] [i_10] = (--23152);
                        }
                        var_39 = 7664;
                    }
                }
            }
        }
    }
    var_40 = var_2;
    var_41 = ((!(~var_2)));
    #pragma endscop
}
