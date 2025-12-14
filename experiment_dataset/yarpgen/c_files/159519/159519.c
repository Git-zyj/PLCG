/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((((((((arr_1 [i_0]) ? 400846417 : var_2))) ? (arr_0 [i_0] [i_0]) : (arr_0 [7] [7]))) > ((((var_13 ? var_0 : var_4)) >> (var_12 - 34999)))));
        var_15 = (min((((((arr_1 [i_0]) + 2147483647)) << (((((arr_1 [i_0]) + 19283)) - 24)))), -var_4));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_16 = (((((var_7 ? (arr_3 [i_1]) : var_3))) ? (((arr_3 [i_1]) / (arr_0 [i_1] [i_1]))) : (arr_3 [i_1])));
        var_17 = (((((255 / (arr_0 [2] [2])))) ? (arr_3 [i_1]) : var_10));
        arr_6 [i_1] [17] = ((var_7 * (arr_3 [i_1])));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 15;i_2 += 1)
    {
        var_18 = (5221286621647061981 + 100663296);
        var_19 ^= ((((-12584 ? (arr_7 [16]) : var_2)) - -234));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                {
                    arr_17 [i_3] [i_5] [i_4] = ((!(!255)));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 13;i_7 += 1)
                        {
                            {
                                var_20 ^= (((arr_18 [i_7] [i_7] [i_7] [i_7] [10]) ? (arr_10 [i_7]) : 0));
                                var_21 = (((((var_9 ? (arr_23 [i_5] [i_6] [i_7]) : var_4))) ? (16 << 1) : (arr_10 [i_7])));
                                var_22 -= var_11;
                            }
                        }
                    }
                }
            }
        }
        arr_25 [i_3] [i_3] = (((((2626 ? var_3 : (arr_19 [i_3] [i_3])))) ? var_10 : (~248)));
    }

    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {
        arr_28 [i_8] = var_5;
        var_23 = (((-6682 ^ 89) < (((84 || ((((arr_20 [i_8]) ? 65535 : 12))))))));
        var_24 |= ((((((max(213, 1))) || (arr_10 [i_8]))) ? ((~(arr_16 [11] [i_8]))) : (var_5 && 2147483647)));
    }
    for (int i_9 = 0; i_9 < 20;i_9 += 1) /* same iter space */
    {
        var_25 = (((((((156 ? (arr_5 [i_9]) : 0))) ? var_3 : (arr_3 [i_9]))) * (arr_3 [i_9])));
        var_26 = ((~(arr_0 [i_9] [i_9])));
        var_27 = (arr_5 [15]);
        var_28 = var_4;
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 20;i_10 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 20;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 19;i_12 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 20;i_14 += 1)
                        {
                            {
                                arr_43 [i_12] [i_12] = (arr_31 [i_10]);
                                var_29 = (max(var_29, ((((arr_41 [i_12 + 1] [i_12 + 1] [i_13] [i_12 + 1]) <= (arr_41 [i_12 + 1] [i_12 + 1] [i_11] [i_12 - 1]))))));
                                var_30 = (((~var_9) << (((arr_42 [i_12] [i_12] [19] [i_12] [i_12] [i_14]) / (arr_40 [i_11] [i_12] [i_12])))));
                                var_31 *= (arr_33 [i_11] [14] [i_11]);
                            }
                        }
                    }
                    var_32 ^= (440059830 && -1877);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_15 = 2; i_15 < 19;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 20;i_16 += 1)
            {
                {
                    var_33 -= (((arr_36 [i_10] [i_10] [i_16] [i_10]) + (((arr_36 [i_10] [4] [i_10] [i_16]) ? var_13 : (arr_38 [i_16] [19] [i_10])))));
                    var_34 = ((var_8 ? (arr_37 [i_15] [i_15 - 2] [i_15] [i_15]) : (arr_36 [i_16] [i_15] [i_10] [i_10])));
                    var_35 = var_4;
                }
            }
        }
        var_36 = ((((((arr_47 [i_10] [i_10] [i_10] [i_10]) & var_11))) ? (arr_0 [i_10] [i_10]) : (((arr_37 [i_10] [i_10] [i_10] [i_10]) & var_14))));
        var_37 ^= ((var_5 ? (arr_47 [i_10] [i_10] [16] [i_10]) : 81));
        arr_49 [9] = ((!((((arr_45 [i_10] [i_10]) ? var_9 : 12757923669857087521)))));
    }
    var_38 = (((min(((var_6 ? var_2 : var_12)), var_4)) == ((var_10 ? (max(var_14, var_11)) : (!var_6)))));

    for (int i_17 = 0; i_17 < 17;i_17 += 1)
    {
        arr_54 [i_17] = ((((((((var_3 << (254 - 248)))) ? ((251165901 ? 5 : 0)) : 59497))) - (max((min((arr_38 [i_17] [i_17] [i_17]), var_3)), (((-32762 ? var_8 : var_2)))))));
        /* LoopNest 3 */
        for (int i_18 = 0; i_18 < 17;i_18 += 1)
        {
            for (int i_19 = 3; i_19 < 16;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 17;i_20 += 1)
                {
                    {

                        for (int i_21 = 0; i_21 < 17;i_21 += 1)
                        {
                            var_39 -= (255 * 4294967295);
                            var_40 -= var_10;
                            var_41 = -10;
                        }
                        arr_63 [i_17] [i_18] [i_17] [i_18] = ((!(arr_35 [i_19 - 3] [i_19 + 1])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
