/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_14 >> (((((((var_9 + 2147483647) >> (var_1 - 133))) >> (((~var_8) - 95)))) - 131050))));
    var_21 = (((((var_5 ? (max(var_12, var_14)) : (!var_12)))) == (min(var_15, ((min(var_19, var_14)))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [18] = (var_19 / var_0);
        var_22 |= (((arr_1 [i_0]) << ((min((arr_0 [i_0]), var_4)))));
        var_23 = ((((((((arr_3 [12]) ? var_12 : var_13))) ? var_15 : (var_17 | var_1)))) ? (max(var_8, (max(var_14, var_1)))) : (arr_1 [i_0]));
        arr_5 [i_0] = (max((((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : var_6)), (~var_8)));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_24 = ((min((((arr_7 [i_1]) ? (arr_8 [16]) : var_10)), var_18)));
        arr_9 [i_1] = (+-1371237620);
        var_25 *= ((~(max(var_19, var_5))));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 19;i_2 += 1)
    {
        var_26 = (max(var_26, ((((-32767 - 1) ? (-32767 - 1) : (-32767 - 1))))));
        var_27 = var_15;
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        var_28 = ((((var_13 && (arr_2 [i_3] [i_3])))));
        arr_14 [i_3] = var_0;

        for (int i_4 = 1; i_4 < 9;i_4 += 1)
        {
            var_29 = (min(var_29, (((((((max(var_11, var_11))) ? var_18 : (min((arr_2 [i_4] [i_3]), var_4)))) >= ((-(arr_2 [i_3] [i_3]))))))));
            var_30 = ((var_5 ? (!var_1) : ((((((var_8 ? (arr_17 [i_4]) : var_15))) && (var_0 && var_3))))));
        }
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            var_31 = var_7;
            var_32 = ((~(((max(var_10, var_7)) | (max(var_8, var_10))))));
            var_33 = ((var_16 == (max(var_16, (arr_8 [i_3])))));
        }
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {

            /* vectorizable */
            for (int i_7 = 3; i_7 < 7;i_7 += 1)
            {
                var_34 ^= -var_16;
                var_35 = ((~(~var_0)));
            }
            for (int i_8 = 4; i_8 < 7;i_8 += 1)
            {
                arr_31 [7] [7] [i_6] [i_3] = ((((((arr_10 [i_3] [i_3]) && var_11)) && (arr_24 [i_3] [i_8 - 3] [i_8 - 3] [i_8 - 4]))) ? (arr_25 [i_3] [i_3] [i_3] [8]) : (!var_14));
                arr_32 [8] = ((!(((~var_14) != (((max((arr_13 [i_6]), var_19))))))));
                arr_33 [i_8] [2] [0] [i_3] = (var_15 > var_0);
            }
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 6;i_10 += 1)
                {
                    {
                        arr_38 [i_9] = ((!((!(arr_30 [i_3] [4])))));
                        var_36 |= (max(((max(var_9, (arr_37 [i_3])))), (arr_24 [i_3] [i_6] [i_9] [i_10 + 1])));
                    }
                }
            }
        }
    }
    var_37 = var_8;
    var_38 += var_14;
    #pragma endscop
}
