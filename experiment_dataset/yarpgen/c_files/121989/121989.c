/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, ((max(((var_5 - (var_11 > var_2))), (~32767))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_14 = (arr_5 [i_0] [i_2] [i_2]);
                    var_15 = ((!(arr_2 [i_0] [i_0])));
                    var_16 = (max(((((arr_2 [i_0] [i_0]) > (arr_5 [i_2] [i_2 + 1] [i_1 + 2])))), (((arr_5 [i_2] [i_2 - 1] [i_1 + 2]) << (187 - 147)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 16;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 17;i_6 += 1)
                    {
                        {
                            var_17 ^= ((~var_3) ? var_1 : var_10);
                            arr_19 [i_6] [i_4] [i_4] [i_4] = ((((arr_17 [i_3] [i_4] [i_5] [i_6]) != var_8)) ? (min((arr_13 [i_5] [i_5 + 1] [i_5 - 1]), -805772038385202833)) : (((((((arr_14 [i_6]) & var_11)) != (arr_15 [i_3] [i_4] [i_6]))))));
                        }
                    }
                }
                var_18 = var_9;

                for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
                {

                    /* vectorizable */
                    for (int i_8 = 1; i_8 < 17;i_8 += 1)
                    {
                        var_19 = 255;
                        arr_25 [i_3] |= (((32767 ? (arr_20 [i_3]) : (arr_10 [i_4] [i_7]))));
                        var_20 = (max(var_20, 805772038385202832));
                        arr_26 [i_3] [i_4] [i_8] = -32761;
                    }
                    for (int i_9 = 3; i_9 < 16;i_9 += 1)
                    {
                        arr_29 [i_9] [i_7] [i_7] [i_7] [i_4] [i_3] = ((!(arr_16 [i_3] [i_7])));
                        arr_30 [i_3] [i_4] [i_4] [i_7] = (((!((var_10 < (arr_11 [i_3] [i_3]))))));
                    }
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        var_21 = (((min((arr_28 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]), (arr_28 [i_7] [i_4] [i_7] [i_4] [i_10] [i_3])))) ? 2064384 : var_3);
                        var_22 = (max(var_22, ((min(var_7, (max((((var_6 ? 212 : var_7))), (arr_28 [i_3] [i_4] [i_7] [i_10] [i_10] [i_10]))))))));
                    }
                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        var_23 = (((((min((arr_9 [i_3]), 2064410))) ? 1146713296 : 19457)));
                        var_24 ^= (var_7 * var_4);
                        var_25 *= (min(((244 ? (arr_34 [i_4 + 1] [i_4 - 2]) : (((arr_13 [i_3] [i_3] [i_3]) ? 11660390562371491386 : var_8)))), (((((max(7, var_1))) < (arr_27 [i_3] [i_3]))))));
                    }
                    var_26 = ((min(var_4, ((((arr_12 [i_3]) && (arr_12 [i_3])))))));
                }
                /* vectorizable */
                for (int i_12 = 0; i_12 < 18;i_12 += 1) /* same iter space */
                {

                    for (int i_13 = 2; i_13 < 17;i_13 += 1) /* same iter space */
                    {
                        var_27 ^= (~var_12);
                        arr_40 [i_3] [i_4] [i_12] [i_12] [i_12] [i_13] = ((((arr_20 [i_3]) ^ -6730871689078150455)));
                    }
                    for (int i_14 = 2; i_14 < 17;i_14 += 1) /* same iter space */
                    {
                        arr_44 [i_14] [i_12] [i_12] [i_4] [i_4] [i_3] |= var_1;
                        var_28 &= (!var_12);

                        for (int i_15 = 0; i_15 < 18;i_15 += 1) /* same iter space */
                        {
                            var_29 = (~0);
                            var_30 |= ((var_7 ? var_8 : 65533));
                        }
                        for (int i_16 = 0; i_16 < 18;i_16 += 1) /* same iter space */
                        {
                            var_31 = (arr_12 [i_14 - 2]);
                            var_32 += 4732;
                            var_33 = (min(var_33, var_4));
                            var_34 += (arr_47 [i_16] [i_14] [i_12] [i_4] [i_3]);
                        }
                        for (int i_17 = 0; i_17 < 18;i_17 += 1) /* same iter space */
                        {
                            arr_54 [i_17] [i_12] [i_3] = ((6559616021309481371 <= (arr_53 [i_3] [i_3] [i_3])));
                            var_35 |= ((!(arr_51 [i_4 + 2] [i_4] [i_14 - 2] [i_14 - 2] [i_14])));
                            arr_55 [i_3] [i_12] [i_4] = (((arr_38 [i_3] [i_4] [i_17] [i_3] [i_17]) ? (!var_7) : (arr_42 [i_3] [i_4 + 1] [i_12] [i_14] [i_17] [i_17])));
                            var_36 = ((var_2 ? (arr_35 [i_4 - 3] [i_4] [i_4]) : (arr_23 [i_12])));
                        }
                        for (int i_18 = 0; i_18 < 1;i_18 += 1)
                        {
                            var_37 = (var_7 - var_2);
                            var_38 = (min(var_38, (((8245147849405027235 >> (arr_38 [i_4] [i_4] [i_4] [i_4 - 3] [i_12]))))));
                        }
                    }
                    var_39 &= (arr_10 [i_4 - 3] [i_4]);
                }
                for (int i_19 = 0; i_19 < 18;i_19 += 1) /* same iter space */
                {
                    var_40 += (((~(var_0 != var_4))));
                    var_41 = (min(var_41, (arr_53 [i_3] [i_4] [i_19])));
                }
                for (int i_20 = 0; i_20 < 18;i_20 += 1) /* same iter space */
                {
                    var_42 ^= var_0;
                    var_43 = (min(var_43, var_8));
                }
                /* LoopNest 3 */
                for (int i_21 = 2; i_21 < 17;i_21 += 1)
                {
                    for (int i_22 = 1; i_22 < 15;i_22 += 1)
                    {
                        for (int i_23 = 3; i_23 < 15;i_23 += 1)
                        {
                            {
                                arr_73 [i_3] = (((arr_46 [i_23] [i_22 + 2] [i_21] [i_21 - 1] [i_23]) ? var_8 : ((var_6 / (arr_46 [i_23] [i_22 + 1] [i_21] [i_21 - 2] [i_21])))));
                                var_44 = (min(var_44, ((((-(arr_18 [i_22 + 1] [i_21 - 1])))))));
                                arr_74 [i_3] [i_3] [i_3] [i_3] = (var_10 < 2);
                            }
                        }
                    }
                }
            }
        }
    }
    var_45 = ((var_5 ? (max((~var_6), var_1)) : var_5));
    #pragma endscop
}
