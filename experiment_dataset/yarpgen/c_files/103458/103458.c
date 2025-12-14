/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103458
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_20 = (((arr_0 [i_0]) ? (arr_0 [i_0]) : (!var_5)));

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {

            for (int i_2 = 4; i_2 < 12;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    var_21 = ((((2405772297 ? 14697191268198871336 : var_17)) | (arr_1 [i_0])));
                    var_22 = (-(arr_5 [i_0] [i_0]));
                }
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    var_23 *= (((arr_10 [i_2] [i_2] [i_2 - 3] [i_2] [12] [i_1]) / 2337331768270594453));
                    var_24 = (arr_1 [i_0]);
                    arr_12 [i_0] [i_2] = (~var_12);
                    var_25 -= (arr_7 [i_0] [i_1] [i_0]);
                }
                var_26 = ((~(arr_4 [i_0] [i_0] [i_0])));
                arr_13 [i_0] [i_1] [i_0] [i_1] = ((((((var_15 >= (arr_11 [i_2 + 2] [7] [i_2 + 2] [i_2 - 3]))))) % (arr_10 [i_0] [i_0] [i_1] [i_1] [i_0] [i_0])));
            }
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                var_27 = ((((!(arr_10 [3] [3] [2] [i_1] [i_5] [i_0]))) ? (arr_6 [3] [i_0] [i_1]) : (arr_0 [i_5])));
                var_28 = ((14697191268198871340 < (((arr_16 [i_0] [i_0] [i_0]) ? 3749552805510680280 : 16714))));
            }
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                var_29 *= (arr_5 [i_0] [i_1]);
                var_30 = ((var_7 % (arr_19 [i_1] [i_1] [i_1] [i_6])));
            }
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 11;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 12;i_8 += 1)
                {
                    {

                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            arr_29 [i_0] [i_0] [i_7] [i_8 - 2] [i_8 - 2] [i_7] = 54;
                            arr_30 [i_0] = (((arr_10 [i_0] [i_0] [i_7] [i_8 - 3] [i_7] [i_0]) ? (arr_10 [i_0] [0] [i_9] [i_8 - 1] [i_9] [i_0]) : -973419747));
                            arr_31 [i_0] [i_1] [i_8 + 2] [i_0] [i_1] [i_0] [i_0] = ((var_16 ? (((16945849207927852494 ? (arr_21 [i_1]) : var_11))) : (var_12 - 3749552805510680280)));
                        }
                        for (int i_10 = 0; i_10 < 14;i_10 += 1)
                        {
                            arr_35 [i_10] [i_0] [i_0] [i_0] [i_1] [i_0] = ((arr_15 [i_8 + 2] [i_0]) % -734678628);
                            var_31 |= (((arr_11 [7] [1] [i_7] [i_7]) ? (arr_22 [i_1] [i_1] [i_1]) : ((var_0 - (arr_0 [13])))));
                        }
                        arr_36 [i_0] [i_7] [i_1] [i_0] [i_0] = var_9;
                        var_32 = 3749552805510680280;
                        var_33 = ((734678628 ^ (arr_16 [i_7 + 1] [i_7 + 1] [i_7 - 1])));
                        var_34 = (arr_1 [i_0]);
                    }
                }
            }
        }
        for (int i_11 = 0; i_11 < 14;i_11 += 1)
        {
            arr_40 [12] [12] [i_11] &= (((arr_5 [i_0] [i_11]) >= (arr_5 [i_0] [i_11])));
            arr_41 [i_0] [i_11] [9] = -var_7;
            var_35 = (arr_7 [i_11] [i_0] [i_11]);
        }
        arr_42 [i_0] = ((((~(arr_0 [i_0])))) ? (!var_1) : (arr_14 [i_0] [i_0] [i_0] [i_0]));
    }
    var_36 |= ((~(((var_3 + var_17) ? -var_4 : (min(var_12, var_16))))));
    var_37 = (((((((-9140714334615484273 ? 1889194999 : -5411791974203673303))) ? 2405772297 : 0)) + 22278));
    var_38 = var_15;
    var_39 &= (var_12 - var_11);
    #pragma endscop
}
