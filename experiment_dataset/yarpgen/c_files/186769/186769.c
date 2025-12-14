/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 *= (arr_0 [i_0]);
        var_18 = (((arr_0 [i_0]) ? 126 : ((~((126 ? 175 : var_11))))));
        var_19 += (arr_1 [i_0]);
        var_20 += (arr_0 [9]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_21 = (max(var_21, (126 % var_8)));
        var_22 = (max(var_22, 1931807972022809283));
        var_23 ^= ((-6358053226258917632 ? 2 : (arr_0 [i_1])));
    }
    var_24 = ((~((var_0 ? var_15 : ((max(var_6, 125)))))));

    /* vectorizable */
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        arr_8 [i_2] = (!126);
        var_25 -= 94432987;

        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            var_26 *= (-44182 - -7647745536439152455);
            var_27 = (((arr_6 [i_2 - 1]) != (arr_6 [i_2 - 1])));
        }
        for (int i_4 = 2; i_4 < 20;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                arr_15 [i_4] [i_2] = var_0;
                var_28 = (min(var_28, (~86)));
                arr_16 [i_2] [i_4 + 1] [i_5] [4] = arr_9 [i_2 - 1];
            }
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                arr_20 [i_2] [12] [i_6] [12] = 2841561462306989697;
                var_29 |= (((((arr_9 [i_2]) - -94432990)) > (arr_7 [i_2 - 1])));
                var_30 = (max(var_30, ((((arr_4 [i_2]) ? (arr_7 [i_2 - 1]) : (arr_10 [i_2 - 1] [i_2 - 1] [i_4 - 2]))))));
            }
            arr_21 [i_2 - 1] [18] |= 14951;
            arr_22 [i_2] = (~2841561462306989697);
            var_31 ^= ((1667640557 ? -109 : (((-94432988 <= (arr_9 [i_2 - 1]))))));
        }
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            var_32 = (!10145432646856606876);

            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                var_33 ^= ((arr_26 [i_2] [i_2]) ? (arr_26 [i_7] [i_2 - 1]) : (arr_13 [i_2] [0] [7] [11]));
                arr_28 [i_7] [19] [i_7] [i_7] = -98;
                var_34 = ((((-2030365327 ? 1090715534753792 : 94432987)) * (var_1 >= -970)));
            }
            arr_29 [i_7] [12] [i_7] = (arr_9 [i_7]);
            var_35 = ((((~(arr_14 [i_2 - 1] [i_7] [i_2] [i_2]))) <= (arr_10 [i_2] [i_2] [i_2 - 1])));
            arr_30 [i_2] [i_7] = (arr_23 [i_2] [i_2] [i_7]);
        }
    }
    var_36 = ((21339 + (max(var_5, var_14))));
    var_37 *= ((var_1 ? (6358053226258917623 <= var_7) : ((var_16 ? (var_10 + var_16) : var_10))));
    #pragma endscop
}
