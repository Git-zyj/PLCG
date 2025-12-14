/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_2;

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                arr_10 [i_0] [i_1] [i_2] = (((-75961100203058315 ? (arr_2 [i_0 - 1] [i_1]) : var_2)) > (~var_4));
                var_15 -= ((255 >= ((2305843009213693951 ? ((min((arr_2 [i_1] [i_2]), (arr_4 [i_0 - 1] [i_0 - 1] [i_0 + 1])))) : (arr_4 [i_0] [i_0] [i_0 - 1])))));
                var_16 = (min(var_16, ((((-75961100203058315 ? ((65533 ? var_12 : 9223372036854775781)) : (var_6 + 127)))))));
            }
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                arr_13 [i_0] [i_1] = (min((((arr_2 [i_0 + 1] [i_0 + 1]) ? ((max(var_1, var_13))) : (arr_5 [i_0 + 1] [i_0 - 1]))), var_8));

                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    var_17 = (min(var_17, ((max(((((var_5 ? var_6 : (arr_7 [i_0] [i_0] [15]))) << (((((arr_12 [i_4]) ? 4294967290 : 2254036634)) - 4294967281)))), (((262143 > (min((arr_6 [i_0] [i_0]), 506511153))))))))));

                    for (int i_5 = 1; i_5 < 18;i_5 += 1)
                    {
                        var_18 *= (((~(arr_17 [i_0 - 1] [i_4] [i_5] [i_5] [i_5]))));
                        var_19 += (!28672);
                        var_20 = (((var_6 ? var_3 : (arr_14 [i_0] [i_0] [i_0] [i_0 + 1]))));
                    }
                }
                var_21 = ((((max(28664, var_8)) != var_7)) ? var_7 : ((((((arr_14 [i_0] [i_0] [i_0] [i_0]) ? 125 : (arr_15 [i_0] [i_0] [i_1] [i_1] [i_0]))) == var_10))));
                arr_18 [i_1] [i_1] = (((((var_11 ? 99 : ((15 * (arr_1 [i_0])))))) ? ((-var_10 * ((139 ? 1 : 2040930661)))) : (((-(((arr_4 [i_0] [9] [9]) * 99)))))));
                var_22 = ((!(((var_2 ? (!var_3) : (arr_16 [i_0] [i_0 - 1] [i_1] [i_0 - 1] [i_3]))))));
            }
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                var_23 = (max(var_23, ((((arr_16 [i_0] [i_0 - 1] [i_0] [i_0] [i_0 + 1]) ? (((1 >= (arr_7 [i_0 + 1] [i_0 - 1] [i_0 - 1])))) : ((var_1 >> ((var_1 ? var_12 : (arr_15 [i_0 - 1] [1] [i_0 + 1] [i_0 + 1] [i_0]))))))))));
                arr_21 [i_0] [i_0] [i_0] [i_0] = (~((((((arr_2 [i_0] [i_6]) / var_5))) ? 4611686018427371520 : (arr_2 [i_0 + 1] [i_0 - 1]))));
                var_24 *= (min((min((~var_2), ((var_7 ? var_0 : -16384)))), ((min((arr_4 [i_0] [i_1] [i_0]), var_6)))));
            }
            var_25 = max(1, ((-(arr_6 [i_0 - 1] [i_0 - 1]))));

            for (int i_7 = 2; i_7 < 17;i_7 += 1)
            {
                var_26 = (((2254036657 / var_0) < (((min(var_13, (arr_16 [i_0 + 1] [i_0 + 1] [i_0] [i_0] [i_0])))))));
                arr_25 [0] [i_1] [19] = (min((arr_1 [i_1]), (((~(~31))))));
                var_27 = (arr_2 [i_1] [i_7]);
                arr_26 [14] [i_1] [i_7] [i_7] = ((!(((~(arr_4 [i_1] [8] [i_7 + 1]))))));
            }
        }
        var_28 *= ((-((-(((arr_8 [i_0] [i_0] [i_0]) ? 9223372036854775792 : 1))))));
    }
    #pragma endscop
}
