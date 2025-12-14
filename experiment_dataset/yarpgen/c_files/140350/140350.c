/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_11;
    var_17 = ((min((!-11479), -var_5)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_18 -= (-774097143 + -11479);
        var_19 = (var_14 - (arr_1 [i_0] [i_0]));
        var_20 = ((var_10 ? (arr_0 [i_0]) : (!-11471)));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            var_21 *= ((!var_8) ? (((var_0 <= var_11) & ((var_9 ? 11479 : var_2)))) : (((-11479 | 11478) ? ((31781 ? var_7 : var_3)) : -var_5)));
            var_22 = ((!(var_5 && var_7)));

            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                arr_12 [i_1] [i_3] [i_1] = var_14;
                var_23 = (((((((-11489 ? -11479 : (arr_8 [i_1] [i_2] [i_1] [i_1]))) == var_0))) < (min(15, (var_2 ^ -11479)))));
            }
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            arr_15 [i_1] [3] = ((!(arr_11 [i_1] [i_4] [i_4])));
            var_24 ^= ((!(((~(arr_6 [i_4]))))));
        }

        for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
        {
            var_25 = ((var_12 ? (arr_4 [1] [i_5]) : ((8943108030969600639 ? -1 : var_3))));
            arr_18 [i_1] = var_8;
            arr_19 [1] [i_5] [1] = -8943108030969600630;
            var_26 = (((-8943108030969600630 ? 270988711 : 270988711)) / 60);
        }
        for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
        {

            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {

                /* vectorizable */
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    var_27 = ((4023978584 || (var_11 == var_0)));
                    var_28 = -5270135422528576700;
                    var_29 *= -8943108030969600639;
                    var_30 = ((((((arr_21 [i_1] [i_6] [11]) | 10))) ? 16948 : 99));
                    var_31 = (arr_13 [i_8]);
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {

                    for (int i_10 = 2; i_10 < 13;i_10 += 1)
                    {
                        var_32 -= (arr_25 [i_1] [i_1] [i_10] [i_9] [i_10 + 1]);
                        var_33 = (min(var_33, var_9));
                        arr_33 [i_1] [i_1] [i_6] [i_7] [i_7] [i_9] [i_10] = (var_6 + var_14);
                        arr_34 [i_10] [i_10 - 2] [i_10] [i_10] [i_10] [i_10] [i_10] = ((var_6 ^ ((54 ? (arr_6 [i_9]) : var_14))));
                    }
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        arr_37 [i_11] [i_9] [i_7] [i_1] [i_6] [i_6] [i_1] = arr_36 [i_1] [i_1] [i_1];
                        var_34 *= (((((var_1 ? -5270135422528576700 : var_13))) & 4433230883192832));
                        var_35 = ((-(arr_28 [i_1] [i_1] [i_7] [i_9] [i_11])));
                    }
                    for (int i_12 = 0; i_12 < 17;i_12 += 1)
                    {
                        arr_40 [15] [15] [i_6] [15] [i_12] [i_12] = (var_2 || var_15);
                        var_36 = -10;
                    }
                    var_37 = var_13;
                }
                arr_41 [1] = var_12;

                for (int i_13 = 0; i_13 < 17;i_13 += 1)
                {
                    arr_45 [i_7] |= (~8943108030969600639);
                    var_38 = (((((arr_42 [i_1] [1] [i_7] [i_13] [i_7] [1]) ? var_2 : (arr_42 [1] [i_13] [i_13] [1] [i_1] [i_7]))) * (!var_9)));
                }
            }
            var_39 = 270988712;
            var_40 = ((!((((!var_14) ? (arr_23 [i_6] [i_6] [i_1] [i_1]) : ((29163 ? var_13 : var_6)))))));
        }
        var_41 = ((((min((arr_24 [i_1]), (arr_24 [i_1])))) ? (max((min(270988702, var_1)), ((max(var_14, var_5))))) : ((((((3 ? 0 : 16948))) - ((var_4 * (arr_22 [i_1] [i_1]))))))));
        var_42 = 3117697270535445762;
    }
    var_43 = (((((min((var_0 == 6067172949171200286), var_3)))) - 8943108030969600629));
    #pragma endscop
}
