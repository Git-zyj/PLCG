/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((~(!56914)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_1] = (((((!(((var_9 - (arr_3 [i_0] [i_0] [i_1]))))))) >= -33094));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [i_1] [i_0] = (~513619849);
                            var_13 += ((((arr_8 [i_0] [i_0] [i_2] [i_3]) - (((arr_10 [6]) / (arr_9 [i_2]))))) % ((~(arr_0 [i_1 - 1] [i_0 + 2]))));
                        }
                    }
                }
                var_14 = (max(var_14, ((((((!(88802264 != 57870)))) >> (((((arr_1 [i_0 - 1]) - (arr_5 [i_1 - 1] [i_0 - 1] [i_0] [i_1 - 1]))) - 2037095640)))))));
                var_15 = (((((~(arr_8 [i_0] [i_0 - 1] [i_0] [9])))) > ((-(((arr_9 [i_0]) + (arr_5 [3] [i_1] [i_1] [i_0])))))));
            }
        }
    }
    var_16 = (((!var_4) * (((((var_1 << (var_3 + 103))) <= (3297720174 || 3126257952191422536))))));

    /* vectorizable */
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        var_17 += (arr_0 [i_4] [i_4]);

        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            arr_17 [i_4] [i_4] = ((var_1 + (var_0 + 8622)));
            arr_18 [i_4] [1] = ((-(arr_15 [i_5] [i_4])));
        }
        arr_19 [i_4] [i_4] = (~15);
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 11;i_6 += 1)
    {
        var_18 += (!7665);
        /* LoopNest 3 */
        for (int i_7 = 2; i_7 < 9;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 10;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    {
                        arr_30 [i_6] [i_6] [i_8 + 1] = ((!(arr_29 [i_7])));
                        var_19 = (-3126257952191422537 - (arr_20 [i_6]));
                        var_20 += -76;
                        arr_31 [i_6] [i_6] [6] [i_6] [10] = (!-36);
                        arr_32 [i_8] [i_6] = ((!(-32767 - 1)));
                    }
                }
            }
        }

        for (int i_10 = 0; i_10 < 12;i_10 += 1)
        {
            arr_36 [i_6] [i_6] = (var_7 << (arr_21 [i_6 - 1]));
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 12;i_11 += 1)
            {
                for (int i_12 = 2; i_12 < 11;i_12 += 1)
                {
                    {
                        arr_43 [i_6] [i_6] [1] [i_6] [i_10] |= ((-(((arr_28 [i_6 - 1]) + (arr_37 [i_12])))));
                        arr_44 [i_6] [11] [i_6] [i_12 - 2] = -0;
                    }
                }
            }
            arr_45 [i_6] = (var_11 >= 8633);
            var_21 = (!-2233305153);
            arr_46 [i_6] [i_10] = (((arr_10 [i_6 + 1]) / var_3));
        }
    }
    for (int i_13 = 0; i_13 < 22;i_13 += 1)
    {
        /* LoopNest 3 */
        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {
            for (int i_15 = 2; i_15 < 20;i_15 += 1)
            {
                for (int i_16 = 1; i_16 < 20;i_16 += 1)
                {
                    {
                        var_22 = (((~var_3) << (!var_0)));
                        arr_58 [18] [i_14] [i_14] [i_15] [i_16] = ((((~(arr_53 [i_15 + 1] [i_15 - 1] [i_15 - 1] [i_15 - 1]))) + (var_6 / 25408)));
                    }
                }
            }
        }
        arr_59 [i_13] = ((!(!var_10)));
    }

    /* vectorizable */
    for (int i_17 = 0; i_17 < 18;i_17 += 1)
    {
        var_23 += var_2;
        var_24 = (2233305153 * 8603);
        var_25 ^= ((~(arr_61 [12])));
    }
    for (int i_18 = 1; i_18 < 18;i_18 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_19 = 0; i_19 < 19;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 19;i_20 += 1)
            {
                {
                    var_26 = ((((-(arr_54 [i_18] [i_20]))) - (57848 + var_6)));
                    arr_74 [i_19] [i_19] [0] = ((-(4294967295 > 127)));
                    var_27 = (((((arr_52 [i_20]) ^ (57871 - -4470946516589493358))) - ((((var_0 + -25409) + (((arr_52 [i_20]) + (arr_47 [i_18]))))))));
                    arr_75 [i_19] [i_19] = (((((arr_69 [17] [i_18 + 1] [i_18 - 1]) ^ var_7)) - (((-(!224))))));
                }
            }
        }
        var_28 &= (-1 || 1);
        var_29 = (max(var_29, ((((((arr_73 [12] [i_18] [i_18 - 1]) | (arr_73 [i_18] [i_18 + 1] [i_18 + 1]))) < -1)))));
        var_30 -= (((!1) >> (-25418 + 25432)));
    }
    for (int i_21 = 1; i_21 < 18;i_21 += 1) /* same iter space */
    {
        var_31 = ((2812806551397566170 / var_5) + (((((arr_72 [i_21] [i_21 + 1] [i_21] [i_21 - 1]) >= 956)))));
        arr_79 [i_21] = (((var_11 > var_1) || (~var_10)));
    }
    /* vectorizable */
    for (int i_22 = 1; i_22 < 18;i_22 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_23 = 0; i_23 < 19;i_23 += 1)
        {
            for (int i_24 = 0; i_24 < 1;i_24 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_25 = 2; i_25 < 15;i_25 += 1)
                    {
                        for (int i_26 = 4; i_26 < 15;i_26 += 1)
                        {
                            {
                                var_32 = ((var_9 != (var_3 - 1)));
                                arr_93 [i_22] [i_25] = (arr_54 [i_22 + 1] [i_22 + 1]);
                                var_33 -= (((var_11 + 2147483647) >> (var_10 - 3498370946)));
                            }
                        }
                    }
                    var_34 = (var_10 | var_4);
                    var_35 = (max(var_35, (((((((arr_83 [i_23]) | 25388))) || 1492782435)))));
                }
            }
        }
        var_36 ^= (((arr_64 [i_22] [i_22 + 1]) + var_3));
    }
    #pragma endscop
}
