/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17875
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_19 = (((((var_14 << (((arr_0 [i_0] [i_0]) - 153016031))))) || (((var_13 ? var_4 : (-9223372036854775807 - 1))))));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_20 = (max((((arr_2 [i_0]) ? (arr_3 [i_0] [i_1]) : ((((arr_5 [i_0] [i_0] [i_0]) ^ 5))))), var_5));
            var_21 *= ((((((min((arr_3 [15] [i_0]), var_12))) ? var_16 : var_12)) & ((134217727 ? (251 >= 134217734) : (134217736 % 134217720)))));
            arr_6 [i_0] [i_1] [i_0] = ((((((var_17 + 9223372036854775807) << (((((arr_1 [9]) + 3339793318529070785)) - 10))))) && ((max((arr_4 [i_0] [i_0]), var_11)))));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_22 = (max((max((arr_4 [i_0] [i_2]), -134217701)), (min(-134217737, 306222869))));
            var_23 = ((!((min((arr_3 [i_0] [i_2]), (arr_3 [i_0] [i_2]))))));
            var_24 = (max(var_24, (((min(-134217736, -194557729)) / ((((5 || (arr_2 [i_0])))))))));
            var_25 = (max(var_25, 134217701));
        }
        for (int i_3 = 1; i_3 < 14;i_3 += 1)
        {
            var_26 = var_6;
            arr_12 [i_0] [i_0] [16] = 4294966784;
        }
    }
    /* vectorizable */
    for (int i_4 = 4; i_4 < 18;i_4 += 1)
    {
        var_27 = (var_3 ? var_18 : var_1);
        var_28 = 5;
        var_29 = (max(var_29, ((((arr_13 [i_4] [i_4]) | var_9)))));
        arr_15 [i_4] [i_4] = (((134217745 * 0) * 2835203097));
    }

    for (int i_5 = 3; i_5 < 22;i_5 += 1)
    {
        arr_19 [i_5] [i_5] = (arr_17 [i_5] [i_5]);

        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            var_30 *= (max((((arr_20 [i_5] [i_5 - 2] [12]) & (arr_20 [i_5 + 1] [i_5 + 1] [14]))), (arr_20 [i_5 + 1] [i_5 + 1] [6])));
            arr_23 [i_5] [i_6] = var_8;
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            arr_28 [i_5 - 2] [i_7] [i_5] = 4392699911877825171;
            arr_29 [i_5] [i_5 - 1] = ((var_18 + (arr_21 [i_5 + 1] [i_7] [i_5])));

            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                var_31 -= (arr_21 [i_5] [i_5] [i_7]);
                var_32 = (max(var_32, (~var_16)));
                var_33 = (max(var_33, (((((((arr_21 [i_5] [i_7] [i_7]) ? (arr_30 [i_5 - 2] [i_7] [21] [16]) : (arr_24 [i_5])))) ? ((var_7 + (arr_21 [6] [6] [i_7]))) : (arr_22 [i_5 - 3]))))));
            }
            var_34 -= ((4294967295 ? -4392699911877825181 : (arr_22 [i_7])));
        }
    }
    #pragma endscop
}
