/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_1] [i_1] = min((max(var_6, (arr_6 [i_1] [i_1 + 2] [i_1]))), ((max((arr_6 [i_1] [i_1 + 2] [i_1]), var_4))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_11 = (arr_6 [i_0] [i_1] [i_1 - 1]);
                    var_12 = ((21464 || ((((31 <= var_5) ? 226 : 226)))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                {

                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        arr_15 [i_0] [i_1] [i_3] [i_4] [i_3] [i_1] = 1;
                        arr_16 [i_4] [i_1] [i_1] [i_0] = (((arr_13 [i_1]) ? (arr_14 [i_0] [i_1] [i_1] [i_1 + 2] [i_1 + 2]) : var_4));
                        arr_17 [i_1] [i_4] [i_3] [i_1] [i_1] = (-30915 ^ 17471374527020946019);
                    }
                    var_13 = var_4;
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                {
                    var_14 = (max(-23214, ((975369546688605577 ? 1196765176 : (((max(15, var_2))))))));
                    var_15 ^= (arr_11 [0]);
                    var_16 = ((var_7 | (((-3 + 9223372036854775807) << (1610 - 1610)))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_6 = 3; i_6 < 18;i_6 += 1)
    {
        var_17 ^= (var_7 && var_0);
        var_18 = ((-(arr_22 [i_6] [i_6])));
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
    {
        var_19 -= ((!(((((max(var_4, var_0))) ? (arr_23 [i_7]) : (((arr_24 [i_7]) ? (arr_25 [2] [2]) : (arr_23 [i_7]))))))));

        for (int i_8 = 0; i_8 < 0;i_8 += 1)
        {
            var_20 ^= ((((max((0 || 17471374527020946039), 25984))) ? (max(2838740868346789208, -8)) : (((max((arr_25 [18] [i_8 + 1]), -11229))))));
            var_21 = (17471374527020946033 || 12179);
        }
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
    {
        var_22 = (min(var_22, (((((min((arr_28 [i_9] [i_9] [i_9]), 32747))) ? (min((255 > var_3), (max(-3117276651772181447, -1)))) : -21711)))));
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 23;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 23;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 23;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 22;i_13 += 1)
                        {
                            {
                                var_23 = ((6 & 7) ^ var_2);
                                arr_45 [i_9] [i_12] [i_11] [i_10] [i_9] = ((45396 >= (((arr_27 [i_9]) ? 1 : (arr_27 [i_9])))));
                                var_24 *= 189;
                                arr_46 [i_9] = (((((var_7 * var_0) & (17471374527020946026 & var_10))) % var_9));
                            }
                        }
                    }
                    arr_47 [i_9] [i_11] [i_10] [i_9] = (min((min((arr_36 [i_9] [i_10] [i_9]), 29491)), var_9));
                    var_25 = (((17471374527020946039 && var_8) ? (min(var_4, (!var_8))) : 23217));
                }
            }
        }
        var_26 = ((((min(975369546688605586, (arr_29 [i_9] [i_9])))) ? (var_5 + var_3) : var_9));
        arr_48 [i_9] = ((((((((arr_37 [i_9] [i_9] [i_9]) + var_10))) ? -1877315883 : var_0)) >= ((((arr_43 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]) > -29491)))));
    }
    for (int i_14 = 1; i_14 < 20;i_14 += 1)
    {
        /* LoopNest 3 */
        for (int i_15 = 2; i_15 < 19;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 22;i_16 += 1)
            {
                for (int i_17 = 1; i_17 < 19;i_17 += 1)
                {
                    {
                        var_27 = 17471374527020946039;

                        for (int i_18 = 0; i_18 < 1;i_18 += 1)
                        {
                            arr_60 [6] [6] &= 3960394722;
                            arr_61 [i_14] [i_14] = (max((((47 ? -23021 : 229))), (min(var_2, (arr_43 [i_14] [i_15] [i_17 + 2] [i_18] [i_18] [i_18])))));
                            var_28 = (min((arr_37 [i_16] [i_15] [i_16]), 975369546688605585));
                        }
                        arr_62 [i_14] [i_15] = (((((((((arr_51 [i_14]) ? var_8 : 3263575967)) < var_9)))) & ((var_3 ? var_4 : var_6))));
                    }
                }
            }
        }
        var_29 = ((-((min(var_10, (arr_28 [i_14] [i_14 + 1] [i_14]))))));
        arr_63 [20] |= (((min((min(-24011, -1886646770)), ((var_5 ? -1 : (arr_28 [i_14] [i_14] [i_14]))))) & (((975369546688605583 >= ((1848281971 ? (arr_43 [0] [i_14] [i_14] [i_14] [i_14] [i_14]) : (arr_43 [16] [i_14] [i_14] [i_14] [i_14] [16]))))))));
    }
    var_30 ^= var_10;
    /* LoopNest 2 */
    for (int i_19 = 0; i_19 < 11;i_19 += 1)
    {
        for (int i_20 = 0; i_20 < 11;i_20 += 1)
        {
            {
                var_31 = ((-2035480936 | 34) ? ((var_5 ? 1941774686 : (arr_22 [i_20] [i_19]))) : (arr_22 [i_19] [i_20]));
                arr_70 [i_19] [i_20] = (((975369546688605576 + var_8) ? 7 : 17471374527020946000));
                arr_71 [i_20] [i_20] [i_19] = ((((var_7 > 163) & var_2)) % var_4);
            }
        }
    }
    var_32 = (min(var_32, var_1));
    #pragma endscop
}
