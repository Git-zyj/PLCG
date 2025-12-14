/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_9 & (1 || 18)));
    var_16 &= (var_3 < var_4);

    for (int i_0 = 1; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (max(((var_11 ? (-452998266 | var_14) : 0)), var_12));
        var_17 = 2567482118;
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {

            for (int i_3 = 1; i_3 < 16;i_3 += 1)
            {
                var_18 = (max(var_18, var_1));
                var_19 = (min(var_19, ((((var_10 ^ 30451) ? (18066316781559991451 | var_9) : (var_13 == 1))))));
            }
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                var_20 |= (((0 | var_6) > (14 && var_2)));

                for (int i_5 = 3; i_5 < 16;i_5 += 1)
                {
                    var_21 = ((61905 + 127) / 245);
                    var_22 += var_6;
                    var_23 *= var_11;
                }

                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    var_24 = (((-1809279830 & 0) - 1065353216));
                    var_25 -= (19281 + 255);
                    var_26 = (max(var_26, (103 || -31127)));
                    var_27 |= var_3;
                    var_28 = (max(var_28, (3270021917 * var_11)));
                }
                arr_21 [i_1] = (((-284010460972331016 - var_5) == var_3));
                var_29 = (min(var_29, (((var_2 <= (((16 ? 7680 : 0))))))));
            }
            var_30 *= (((-5 / -126) * var_0));
        }
        var_31 *= var_3;
        var_32 = var_12;
        var_33 = (min(((((var_1 / -31127) == (((var_1 ? var_4 : var_4)))))), var_0));
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 22;i_7 += 1)
    {
        arr_24 [i_7 + 1] [i_7] = ((var_12 ? var_7 : var_3));
        var_34 = (((var_5 & 15) && (var_1 || -31148)));
    }

    for (int i_8 = 2; i_8 < 14;i_8 += 1)
    {
        var_35 = ((((max((-3974697194138678446 == var_3), (min(0, 17397))))) && (1 || 1)));
        var_36 = ((-188849261331469637 ? (7 > -31123) : (32767 * 0)));
    }
    for (int i_9 = 0; i_9 < 16;i_9 += 1)
    {
        arr_29 [i_9] [i_9] = ((((4329621700818054006 * (-2 / var_1))) * (0 * var_3)));
        arr_30 [i_9] = (((((max((-32767 - 1), -21919))) ? (var_10 <= 0) : var_14)));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 17;i_10 += 1)
    {
        arr_34 [i_10] = ((((var_2 ? var_10 : 37390)) - var_12));
        var_37 *= (var_8 % var_4);
        arr_35 [i_10] = (-11115 + -95);
    }
    var_38 = (max(var_0, -75));
    #pragma endscop
}
