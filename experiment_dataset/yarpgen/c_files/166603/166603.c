/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166603
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += ((min(((18446744073709551615 ? var_3 : 18446744073709551615)), (((9 ? var_9 : var_9))))));
    var_13 = var_4;

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_14 = (min(var_14, (!18446744073709551615)));
        arr_2 [i_0 - 1] = 1017066559;
        arr_3 [i_0 + 1] = ((((min((min(1, 18446744073709551615)), (min(var_5, 18446744073709551615))))) || (((1537493791 ? (arr_0 [i_0 + 2] [i_0 + 1]) : ((-(arr_1 [i_0 + 2]))))))));
        arr_4 [i_0 + 1] = min((((((arr_1 [i_0 + 2]) / 120)) <= (arr_1 [i_0 + 1]))), ((((max(-17372, (arr_1 [i_0 + 2])))) == (((arr_1 [i_0 + 1]) ? var_10 : 18446744073709551615)))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_7 [i_1] = (arr_5 [i_1]);
        arr_8 [i_1] = (arr_5 [i_1]);
    }
    for (int i_2 = 0; i_2 < 0;i_2 += 1)
    {
        var_15 = 2673639188;
        var_16 = ((+((((-1475351875 || 79) && ((!(arr_9 [i_2 + 1]))))))));

        /* vectorizable */
        for (int i_3 = 3; i_3 < 15;i_3 += 1)
        {
            var_17 = (((((4294967295 ? (arr_13 [i_2 + 1] [i_2 + 1] [i_3 - 2]) : (arr_9 [i_2 + 1])))) >= 18446744073709551605));
            var_18 = (min(var_18, 934004122));
        }
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        arr_19 [i_4] &= (((((min(-var_4, (((arr_12 [i_4]) * 0)))) + 9223372036854775807)) >> (min(0, (arr_17 [i_4])))));
        var_19 -= (!(min((arr_16 [i_4] [i_4]), (arr_16 [i_4] [i_4]))));
    }
    #pragma endscop
}
