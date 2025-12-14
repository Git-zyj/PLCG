/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_12;
    var_14 = var_12;
    var_15 = (~var_8);

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_16 = (((((-(!var_4)))) | 1395968422));
        arr_2 [i_0] = ((var_4 ? (((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0]))) : ((~(((arr_0 [i_0]) ? (arr_1 [i_0]) : var_1))))));
        var_17 = (min(61731, (min(((min(802644094, var_7))), 4070756174))));
        var_18 = ((((((arr_1 [i_0]) ? var_11 : (var_5 + var_4)))) <= (arr_0 [i_0])));
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        var_19 = (max(((var_0 ? var_5 : (var_1 * 18446744073709551615))), (!17203689973892363815)));

        for (int i_2 = 3; i_2 < 14;i_2 += 1)
        {
            var_20 = ((((!(~var_9))) || (((+((1312234962 ? (arr_0 [i_1]) : (arr_1 [i_1]))))))));
            var_21 = ((((((~var_4) ? ((398020470 ? 33554431 : 1631403940280690325)) : (arr_4 [i_1 - 1])))) ? (~var_5) : (((((var_3 ? (arr_0 [i_1 - 1]) : var_1))) ? (arr_1 [i_2 + 2]) : (!var_9)))));

            /* vectorizable */
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    var_22 = (0 ? var_6 : (arr_12 [i_1] [i_2 + 3] [i_2 + 3] [i_4]));

                    for (int i_5 = 1; i_5 < 16;i_5 += 1)
                    {
                        var_23 = var_3;
                        arr_17 [i_1] = (~var_9);
                    }
                }
                var_24 = 4319;
                var_25 ^= (((!18446744073709551615) ? (arr_5 [i_2 + 1] [i_1 - 1] [i_1]) : (arr_7 [i_1] [14])));
                arr_18 [i_2] [i_2] [i_1] [i_2] = ((!(arr_4 [i_1 - 1])));

                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    var_26 = var_7;
                    var_27 = (max(var_27, ((((arr_4 [i_3]) ? ((var_2 ? var_10 : (arr_1 [i_6]))) : var_5)))));
                }
                for (int i_7 = 1; i_7 < 13;i_7 += 1)
                {
                    arr_25 [i_1] = var_1;
                    var_28 += var_3;
                }
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    var_29 = ((-var_2 ? (((arr_6 [i_1 - 1] [i_3] [i_8]) ? 7883007614174476916 : 7847)) : (((arr_20 [i_1] [i_2] [5] [i_8]) ? (arr_5 [i_2] [i_2] [i_1]) : (arr_4 [i_3])))));
                    var_30 = var_9;
                    var_31 = var_12;
                    var_32 = (arr_21 [i_1] [i_2 - 2] [i_2 + 2] [i_8] [i_8] [i_1 + 1]);
                    var_33 = (arr_22 [i_1] [i_1] [i_3] [i_1 - 1]);
                }
            }
        }
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            arr_31 [i_1] [i_1] = ((((~var_11) >= var_4)) ? ((((!(arr_11 [i_1] [i_1]))))) : var_6);
            var_34 &= (((max((arr_7 [10] [10]), (arr_29 [10] [i_1 + 1] [10])))) ^ (max((arr_15 [i_9] [i_9] [4] [i_9] [4] [i_1 + 1] [i_1]), var_2)));
        }
    }
    for (int i_10 = 2; i_10 < 17;i_10 += 1)
    {
        var_35 = ((var_2 <= (((((arr_33 [i_10]) > var_2)) ? ((var_10 ? (arr_33 [i_10]) : var_6)) : var_7))));
        var_36 = ((((((var_4 ? (arr_1 [i_10]) : 81576957))) || (arr_0 [i_10 + 2]))));
    }
    #pragma endscop
}
