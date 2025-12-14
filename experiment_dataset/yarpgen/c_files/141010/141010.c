/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((max(var_3, 24068))) / var_15))) ? (min(((var_3 ? var_8 : var_10)), var_7)) : ((var_7 - (((min(var_13, var_5)))))));
    var_17 = (min(var_17, var_10));

    for (int i_0 = 1; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_18 = ((min(2533762692, -var_5)));
        var_19 *= ((!(((((max(1, 5))) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0 - 1] [i_0 + 1]))))));
        arr_2 [i_0] [i_0] = var_13;
        var_20 = ((((4294967295 / ((-(arr_0 [i_0])))))) ? var_1 : ((var_6 ? ((((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : var_8))) : 6815029142115497378)));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_21 = ((~(((arr_1 [i_0] [i_1]) - (arr_1 [i_0] [i_1])))));
            var_22 ^= ((((arr_0 [i_0]) ^ (arr_0 [i_1]))));

            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                var_23 = (min(var_23, ((((min((arr_6 [i_0] [i_2] [i_0] [i_0 + 2]), (arr_0 [i_0])))) ? (arr_0 [i_0]) : ((31 ? var_8 : var_14))))));
                arr_9 [i_1] [i_1] [i_2] = ((((((arr_0 [i_0 - 1]) * (arr_1 [i_0 - 1] [i_0 + 4])))) ? (max((arr_1 [i_0 - 1] [i_0 + 4]), 26302)) : (min((arr_1 [i_0 - 1] [i_0 + 4]), (arr_1 [i_0 - 1] [i_0 + 4])))));
                arr_10 [i_0] [i_1] [i_1] [i_2] = ((0 & (((((-32767 - 1) ^ 2)) - 4294967287))));
            }
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                var_24 = (min((arr_7 [i_0] [i_1]), 52089));

                for (int i_4 = 4; i_4 < 20;i_4 += 1)
                {
                    arr_16 [i_1] [i_1] [i_1] [i_1] = 1;
                    var_25 = (((arr_7 [i_0] [i_3]) ? -1 : (min((-32767 - 1), (min(1, 11845902238784885269))))));
                    arr_17 [i_1] [i_3] [i_1] [i_0] [i_1] = (~1413);
                    var_26 = (min(var_26, ((((arr_3 [i_0]) + ((-(0 > 127))))))));
                }

                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    var_27 = (arr_3 [i_3]);
                    var_28 = (arr_1 [i_3] [i_0]);
                    var_29 += (-(((((255 ? 63 : var_0)) < (((((arr_6 [i_0] [i_3] [i_3] [i_5]) < 0))))))));
                }
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    arr_24 [i_1] [i_0] [i_1] [i_3] [i_6] = ((-(arr_4 [i_0 + 2])));
                    var_30 = (min(var_30, ((((+-32289) * ((-22 ? (max(var_10, var_6)) : 4294967295)))))));
                    arr_25 [i_0] [i_0] [i_0] [i_1] = 1588591906;
                    var_31 &= (max(((~((~(arr_14 [i_0] [i_1] [i_3] [i_6]))))), ((var_2 * (((!(arr_4 [i_6]))))))));
                    arr_26 [i_1] [i_1] = (((((arr_23 [i_0] [i_1] [i_3] [i_6]) != ((var_5 ? (arr_20 [i_1] [i_1] [i_3] [i_6] [i_3]) : 4503599627370495)))) ? 56 : (((~var_11) ? var_9 : var_2))));
                }

                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    arr_29 [i_1] [i_3] [i_7] = (-9223372036854775807 - 1);
                    var_32 = var_2;
                    var_33 -= (((-43382 * 0) < (((arr_8 [i_0 - 1] [i_0] [i_0] [i_0 + 3]) ^ (arr_5 [i_0 + 2] [i_0] [i_0] [i_0 + 1])))));
                    var_34 *= ((+((((arr_0 [i_0 - 1]) < var_9)))));
                    arr_30 [i_0] [i_0] [i_1] [i_1] [i_3] [i_7] = (((((min(-120, 2215438221940447451))) ? -var_1 : (((arr_15 [i_0] [i_1] [i_3] [i_7]) - -2654)))));
                }
            }
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                arr_33 [i_1] [i_1] = var_2;
                var_35 = ((var_3 == (arr_22 [i_1] [i_0 + 1] [i_0] [i_0] [i_0] [i_0 + 4])));
            }
        }
    }
    for (int i_9 = 1; i_9 < 17;i_9 += 1) /* same iter space */
    {
        var_36 &= 534773760;
        arr_38 [i_9] [i_9] &= var_3;
    }
    #pragma endscop
}
