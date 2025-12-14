/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (!var_12);

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 7;i_2 += 1)
            {
                {
                    var_14 = 3650225464;

                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        var_15 = (min(var_15, (((!((min(var_1, (arr_5 [i_0] [i_0] [i_2] [i_0])))))))));
                        var_16 *= (((((var_11 ? (arr_8 [i_3 + 2] [i_3 + 1] [i_3] [i_3 + 3] [i_3 - 2]) : (arr_8 [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 + 2])))) ? ((var_4 ? (!var_12) : ((var_12 ? var_2 : var_10)))) : var_8));
                        var_17 = ((((-(~1))) >= ((1 ? var_12 : ((((arr_2 [i_0]) && var_12)))))));
                    }
                    for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
                    {
                        var_18 = var_4;
                        var_19 = -var_10;
                    }
                    for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
                    {
                        var_20 = ((((arr_14 [i_2 + 1] [i_5] [i_5] [i_5] [i_5] [i_5]) ? -25456 : var_1)));
                        var_21 = (~(((~-29257) ? ((-4439303847423025950 ? (arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [1]) : var_2)) : (arr_9 [i_0 - 1]))));
                    }
                    var_22 = (((((-31048 >= -1071899706) > (arr_13 [i_2 - 1] [i_0] [i_0] [i_0] [i_0 - 1]))) ? (((!var_8) ? var_8 : var_10)) : (((var_0 != (3650225463 / -4439303847423025935))))));
                }
            }
        }
        var_23 = (((arr_14 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [i_0 - 1]) ? ((var_11 * (((arr_2 [i_0 - 1]) | (arr_7 [i_0] [i_0] [i_0]))))) : 7675133977956805199));
        var_24 = var_4;
    }
    for (int i_6 = 1; i_6 < 9;i_6 += 1)
    {
        var_25 = ((min((var_2 || var_11), var_11)));
        var_26 = (min(var_26, (((min(2261935940806893502, 103))))));
        var_27 = var_10;
        /* LoopNest 3 */
        for (int i_7 = 1; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 9;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    {
                        var_28 = (((3650225476 ? (arr_3 [i_6] [i_7] [i_8 - 2]) : var_7)));
                        var_29 = (max(var_29, 0));
                        var_30 = (~1787473404);
                        var_31 += (max((7083 % 56843), (arr_19 [i_6] [i_7])));
                    }
                }
            }
        }
        var_32 = (var_1 - var_4);
    }
    var_33 += var_1;
    #pragma endscop
}
