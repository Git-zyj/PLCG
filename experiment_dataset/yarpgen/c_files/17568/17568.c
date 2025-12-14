/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_6 > 0);

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_19 = (arr_0 [i_0]);
        var_20 = (min(var_20, ((max(var_17, (max(((-6 + (arr_0 [i_0]))), 0)))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_4 [i_1] [i_1] = (arr_2 [i_1] [i_1]);
        var_21 = (arr_2 [i_1] [i_1]);
        var_22 = (((arr_3 [i_1]) > (arr_2 [i_1] [i_1])));

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_23 &= ((var_11 + (arr_6 [i_1] [i_2] [i_1])));
            var_24 -= ((11801366638792032702 ? (arr_5 [i_1]) : (arr_5 [i_2])));
        }
        for (int i_3 = 3; i_3 < 13;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                var_25 = (arr_3 [i_4]);
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_26 = (((arr_2 [i_3 - 2] [i_4]) ? (arr_6 [i_3 + 2] [6] [i_3 - 3]) : (arr_2 [i_3 - 1] [i_3 - 1])));
                            var_27 += var_11;
                            var_28 = 28566;
                            arr_18 [10] [10] = (((((var_8 ^ (arr_9 [i_1] [i_1] [i_4])))) ? (arr_12 [i_3 + 2] [i_4] [i_5] [i_6]) : 65535));
                        }
                    }
                }
                var_29 &= ((4481 ? var_16 : (~4481)));

                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {

                    for (int i_8 = 1; i_8 < 11;i_8 += 1)
                    {
                        arr_23 [i_1] [i_3] [i_1] [i_7] [i_3] [i_7] = (arr_14 [i_3 - 3] [i_4] [i_8 + 2]);
                        var_30 *= (((~1) && (arr_7 [i_3 + 1] [i_3 - 1])));
                    }
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        var_31 = 11279133685653562848;
                        var_32 += ((!(arr_21 [i_1] [i_1] [i_1] [i_1] [i_1])));
                        var_33 = (42294 ? (arr_16 [i_3 + 2] [i_3 - 3] [i_3 + 2] [i_3 - 3] [i_3 + 2] [i_3 + 1]) : (arr_16 [i_3 + 1] [i_3 + 2] [i_3 - 2] [i_3 - 1] [i_3 + 1] [i_3 + 1]));
                    }
                    arr_26 [i_1] [i_1] [i_1] [0] = 671957938;
                    var_34 = (arr_6 [0] [i_3 + 1] [i_4]);
                    var_35 = ((~(arr_22 [i_3] [i_3] [i_3] [i_3 - 3] [i_3] [i_3])));
                }
                arr_27 [i_1] [i_1] [i_1] [i_1] = (((arr_2 [7] [i_3 - 1]) ? (arr_25 [i_1] [i_3 - 1] [i_3 - 1] [i_3 - 1]) : (arr_11 [i_3 + 1] [i_3 - 1] [i_3 - 1] [14])));
            }
            var_36 = (!4009540736082280082);
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 15;i_11 += 1)
                {
                    {

                        for (int i_12 = 1; i_12 < 13;i_12 += 1)
                        {
                            arr_35 [i_1] [i_12] = ((-4473 != (!4481)));
                            arr_36 [i_1] [i_3 + 1] [i_10] [i_1] [i_11] [i_12] [i_12] = (arr_21 [i_1] [i_3] [i_3] [i_11] [i_12]);
                        }
                        for (int i_13 = 0; i_13 < 15;i_13 += 1)
                        {
                            arr_39 [i_1] = (arr_14 [i_1] [i_1] [i_1]);
                            arr_40 [i_1] [i_1] [i_1] [i_1] [i_1] = (((arr_25 [i_3 + 2] [i_3 - 1] [i_3 + 2] [i_3 + 2]) ? 143856150378343670 : (((~(arr_16 [4] [i_3 - 1] [i_3] [i_3] [i_3 - 2] [i_3 - 3]))))));
                            var_37 = (max(var_37, (arr_22 [3] [i_1] [i_3] [i_10] [13] [i_3])));
                        }
                        for (int i_14 = 0; i_14 < 15;i_14 += 1)
                        {
                            var_38 = (((arr_3 [i_3 - 2]) ? (arr_3 [i_3 - 2]) : -5298609536672734482));
                            var_39 += var_15;
                            var_40 = ((~(arr_2 [i_3 - 2] [i_3])));
                        }
                        var_41 &= (~var_4);
                    }
                }
            }
            var_42 = ((~(arr_16 [i_3 + 1] [i_3] [i_3] [9] [i_3] [i_1])));
        }
        for (int i_15 = 0; i_15 < 15;i_15 += 1)
        {
            var_43 = ((3317647183 * ((((arr_19 [13] [i_15] [i_15] [1] [10]) ? 21 : (arr_20 [i_1]))))));
            var_44 = ((-(arr_38 [i_1] [i_1] [14] [12] [i_15] [i_15])));
            var_45 = ((!(arr_19 [i_1] [i_1] [i_1] [i_1] [i_1])));
        }
    }
    var_46 = (((4294967291 / var_3) ? var_14 : (max(((min(var_12, var_16))), (-2147483647 - 1)))));
    #pragma endscop
}
