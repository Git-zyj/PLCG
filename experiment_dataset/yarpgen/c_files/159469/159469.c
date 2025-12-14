/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (32761 == var_5);
    var_12 = (((-(-536870912 | var_5))));

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        var_13 = (arr_8 [i_3]);
                        var_14 = (min(var_14, ((((arr_1 [7]) >> (((((min(var_5, -26)))) + 20297)))))));
                        var_15 = (min(var_15, (((1 >> (((arr_10 [i_2]) - 7120911119697165911)))))));
                    }
                    var_16 -= (-2147483647 - 1);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 17;i_5 += 1)
                        {
                            {
                                var_17 = -2147483639;
                                var_18 *= ((((((arr_0 [i_2]) ? 3412887035 : (arr_0 [i_5 + 3])))) ? (((var_7 + (arr_0 [0])))) : (min((arr_0 [i_0 + 1]), 7402878939292754037))));
                                var_19 = ((((((arr_16 [i_4] [i_4] [i_2] [i_1] [i_0]) ? 0 : (arr_1 [i_0 - 1])))) ? 3 : (arr_11 [i_0])));
                            }
                        }
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_6 = 1; i_6 < 19;i_6 += 1)
        {
            arr_22 [i_6] [i_6] [i_0] = ((var_7 ? (arr_18 [i_0] [i_6] [i_6]) : ((((var_4 >= (arr_0 [i_0])))))));

            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                arr_25 [i_0] [i_0] [i_6] [i_7] = (arr_17 [i_0 - 1] [i_6] [i_6 - 1] [i_6 - 1] [5] [1]);
                arr_26 [i_7] [i_6] [i_6] [i_0] = ((2798820874343228303 ? (arr_12 [i_6 - 1] [i_6 - 1] [i_7]) : 65535));
                arr_27 [i_7] [13] [i_7] [i_6] = 3412887039;
                var_20 = (min(var_20, ((((arr_9 [i_0 + 2]) <= var_4)))));
            }
        }
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            var_21 *= ((((((-(arr_0 [i_8])))) ? (((arr_16 [i_0] [i_0] [i_0] [i_8] [i_8]) ? var_4 : var_2)) : 0)));
            arr_31 [i_0] [i_0] [i_8] = var_10;
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 20;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 20;i_10 += 1)
                {
                    {
                        var_22 = var_4;
                        arr_36 [i_0] = var_6;
                        arr_37 [i_0] [i_0] [i_0] = (((((((((arr_32 [i_0 - 1] [i_0 - 1] [i_0 - 1]) ? (arr_4 [i_0] [i_0] [i_10]) : (arr_11 [i_10])))) ? (((1637948116 ? 2147483627 : 1))) : (~65551)))) ? -1649756862 : 5304784699331409556));
                        arr_38 [i_10] [i_10] = 100;
                        var_23 ^= ((!((((5304784699331409558 ? var_9 : 65516))))));
                    }
                }
            }
        }
        var_24 &= ((42 ? 2140338641 : 14048305056341835669));
        var_25 -= ((((-114 ? var_10 : var_6)) / ((-(arr_11 [i_0 - 1])))));
    }
    #pragma endscop
}
