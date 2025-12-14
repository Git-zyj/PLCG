/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, ((((2171889763 ? (max(var_15, var_7)) : (!var_3)))))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_18 = (~-var_11);
        var_19 = (min(var_19, ((((arr_0 [i_0]) ? ((((!(arr_1 [i_0]))))) : (((((arr_1 [i_0]) / var_10)) >> (((max(3, 2171889763)) - 2171889751)))))))));
        var_20 = ((((((var_16 ? (arr_0 [i_0]) : 253))) ? ((max(var_4, var_7))) : 2171889763)));
        var_21 = 17193320193496789395;
        var_22 += ((((arr_2 [i_0] [i_0]) ? 30 : var_7)));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_23 = ((((-((-(arr_0 [i_1]))))) | (arr_3 [i_1])));
        var_24 = (min(var_24, (((4294967275 ? 18446744073709551615 : 2171889763)))));
        arr_5 [i_1] = ((~(var_10 | var_8)));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        var_25 -= (arr_0 [1]);

        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            arr_10 [i_3] [i_3] [i_2] = ((-((max(-32506, 0)))));
            var_26 = (((228 * 65521) ? (((min(var_4, (arr_4 [i_3]))))) : (max((arr_4 [i_3]), var_11))));
            var_27 = ((((max((var_16 && var_7), var_6))) >= 213));
            var_28 ^= (+((max((arr_2 [i_2] [i_3]), 248))));
        }
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            var_29 = (((((arr_7 [i_4]) ? ((var_4 ? var_1 : 63684)) : var_8)) + ((41139 ? (!1389434175) : -var_9))));
            var_30 = (~3670016);

            for (int i_5 = 2; i_5 < 12;i_5 += 1)
            {

                for (int i_6 = 1; i_6 < 12;i_6 += 1)
                {
                    var_31 = (min(var_31, var_1));
                    var_32 = ((((((((var_16 ? (arr_8 [i_2] [i_2]) : (arr_20 [i_2] [10] [i_2] [i_2])))) ? -24809 : (arr_6 [i_2])))) || (var_11 | var_11)));
                }
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    var_33 = ((-(((arr_18 [5] [i_4] [i_5] [i_7]) + (((255 * (arr_23 [i_5 + 3] [i_7] [i_5] [i_4] [i_5 + 3] [i_7]))))))));
                    arr_25 [i_2] [i_4] [i_5 + 2] [1] = ((((215 ? (65535 & -1) : 63)) < (arr_2 [i_2] [i_2])));
                    var_34 += ((((((var_13 ? var_12 : (arr_9 [13] [13] [i_5 - 1])))) && (((var_16 ? var_6 : 3581438281))))));
                }
                arr_26 [11] [i_2] [4] [i_2] = var_10;
            }
            for (int i_8 = 1; i_8 < 14;i_8 += 1)
            {
                var_35 = -var_5;
                var_36 |= ((((((!var_9) ? (((var_15 ? 24 : var_3))) : 225))) || ((max(((var_3 ? (arr_24 [i_8] [i_8] [i_8] [i_8]) : (arr_20 [i_2] [i_4] [i_4] [i_8]))), ((58 ? 65528 : 248)))))));
                var_37 = ((2971156035 ? (((((max(244, var_1))) << ((((1 ? (arr_1 [i_2]) : (arr_22 [5]))) - 105))))) : ((((((arr_17 [i_8]) ? (arr_12 [i_2] [i_4] [i_4]) : var_13))) ? (((127 ? var_9 : var_9))) : var_13))));
            }
            /* vectorizable */
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                var_38 = var_6;
                var_39 += var_16;
                arr_32 [i_2] [i_2] = 42097;
            }
            var_40 = ((-(((arr_14 [i_2] [i_4] [i_2]) ? (arr_14 [i_2] [i_4] [i_2]) : (arr_14 [i_2] [i_4] [i_2])))));
        }
        var_41 = ((!(((var_2 ? 244 : (arr_16 [i_2] [i_2] [i_2] [i_2]))))));
        var_42 = ((28 ? 17 : 255));
    }
    var_43 = 14;
    var_44 = (var_12 + 4294967286);
    var_45 &= (((var_16 ? (239 / 621396986) : ((190 ? var_3 : 621396970)))));
    #pragma endscop
}
