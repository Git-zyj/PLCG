/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183116
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_7;
    var_17 = (!var_5);

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_18 = ((var_7 ? (((((var_10 ? var_13 : (arr_2 [i_0])))) ? (((min((arr_0 [i_0] [i_0]), var_9)))) : (arr_2 [i_0]))) : (((var_8 && -1) ? (arr_0 [i_0] [i_0]) : (arr_2 [i_0 - 1])))));
        var_19 = ((!((max(((65535 ? var_5 : var_15)), 799661358)))));
        var_20 = var_4;
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 11;i_1 += 1)
    {
        var_21 = (var_5 >> (arr_4 [i_1 + 3]));
        arr_6 [6] = (((var_15 - var_8) - (arr_5 [i_1])));
        var_22 = (((arr_5 [i_1 + 4]) <= (((arr_4 [i_1]) ? 16132 : (arr_3 [0])))));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
    {
        var_23 = (arr_8 [i_2]);
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 18;i_4 += 1)
            {
                {
                    var_24 = (((((arr_8 [i_4 + 2]) ^ (((var_5 ? (arr_9 [i_3] [1]) : var_15))))) << (((arr_12 [i_2] [i_2] [i_4 + 1] [i_3]) - 19715))));

                    for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                    {
                        arr_15 [6] [16] [i_2] [i_2] [i_3] [i_2] = (arr_8 [i_2]);
                        var_25 &= ((((var_4 ^ (((arr_14 [i_2] [1] [2] [i_5]) ? (arr_7 [18] [i_5]) : var_9)))) == var_15));
                        arr_16 [i_2] [i_5] [i_4] [i_5] &= (((((arr_13 [0] [i_3] [i_3] [i_3] [i_3]) ? var_10 : (arr_13 [i_2] [i_2] [i_2] [i_2] [i_2]))) + ((((arr_8 [i_5]) >> (var_5 && var_0))))));
                    }
                    for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                    {
                        arr_20 [i_2] [i_2] [i_2] [i_2] = var_1;
                        var_26 = (((((var_9 ? var_2 : var_7)))) ? var_10 : ((max(var_3, -268783889))));

                        for (int i_7 = 2; i_7 < 18;i_7 += 1)
                        {
                            arr_23 [i_2] [i_2] [i_2] [i_6] [i_7] = ((((var_1 ? (((arr_17 [i_2] [i_2] [i_4] [i_2]) ? (arr_17 [i_2] [17] [i_7] [i_2]) : var_10)) : 1)) * ((((arr_8 [i_3]) ? (arr_14 [i_2] [15] [i_4] [10]) : (((arr_8 [i_6]) ? var_15 : -1329374270)))))));
                            arr_24 [4] [i_2] [14] = (arr_22 [i_2] [i_2] [15] [15] [i_7]);
                        }
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            var_27 = ((+(min((var_12 >> 1), ((var_2 << (var_4 - 14951)))))));
                            var_28 = ((!(!-30795)));
                            var_29 = (((((arr_14 [i_4 - 1] [i_4] [i_4 - 1] [i_4 + 1]) < 2046290544)) ? (max(var_0, (~var_9))) : var_14));
                            var_30 *= (((((-(((arr_22 [i_6] [i_3] [i_6] [i_6] [i_6]) ? -1 : 18446744073709551615))))) ? ((((arr_10 [i_4] [i_8]) / var_6))) : ((((((arr_10 [i_6] [i_8]) + var_2))) ? (arr_8 [i_6]) : ((var_15 ? var_3 : (arr_11 [i_4] [15] [i_8])))))));
                        }
                        for (int i_9 = 0; i_9 < 0;i_9 += 1)
                        {
                            var_31 = ((((min((1037443048 > 54938), var_5))) << ((((max(6498691865824874195, var_9))) - 120999615))));
                            var_32 = ((((1 && 2660668140) ? var_10 : (arr_9 [i_4 + 2] [i_6]))));
                        }
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 20;i_10 += 1) /* same iter space */
                    {
                        arr_33 [i_2] [i_3] [1] [1] [i_3] = (((((var_1 ? 398757609 : var_10))) ? var_15 : var_3));
                        var_33 = ((var_12 ? (arr_28 [i_2] [i_10]) : (((arr_28 [i_2] [i_2]) ? (arr_9 [19] [19]) : (arr_9 [i_2] [i_2])))));
                        var_34 = ((arr_14 [i_4 + 2] [i_4] [11] [17]) / var_3);

                        for (int i_11 = 0; i_11 < 20;i_11 += 1)
                        {
                            var_35 = (min(var_35, ((((arr_35 [i_4 + 1] [i_4 - 1]) * -9)))));
                            var_36 = ((var_1 / (((arr_28 [i_2] [i_3]) * var_10))));
                            var_37 = (((!var_4) ? (((var_12 ? 0 : (arr_30 [15])))) : var_8));
                        }
                    }
                }
            }
        }
        var_38 = (((((arr_8 [i_2]) ? (arr_29 [i_2] [17] [i_2] [i_2] [i_2]) : var_10)) * (((((((var_2 ? (arr_28 [i_2] [i_2]) : (arr_30 [i_2])))) < ((var_14 ? var_4 : var_8))))))));
    }
    for (int i_12 = 0; i_12 < 20;i_12 += 1) /* same iter space */
    {
        var_39 = (max(((max(var_7, var_11))), (((!(arr_34 [i_12] [i_12] [i_12]))))));

        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            arr_42 [i_12] = ((((((arr_9 [9] [9]) ? var_5 : (arr_41 [i_12] [i_12])))) ? var_3 : 65529));
            var_40 = ((-(((arr_39 [i_12]) + (arr_39 [i_13])))));

            /* vectorizable */
            for (int i_14 = 2; i_14 < 18;i_14 += 1)
            {
                arr_47 [i_12] [i_13] [i_12] [i_12] = (arr_41 [i_12] [i_12]);
                var_41 = ((var_7 > (((arr_35 [i_13] [i_13]) / (arr_27 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12])))));
            }

            for (int i_15 = 0; i_15 < 20;i_15 += 1)
            {
                var_42 += (!(((+(((arr_41 [6] [i_15]) ? 9562 : (arr_41 [6] [1])))))));
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 20;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 20;i_17 += 1)
                    {
                        {
                            var_43 = (max(var_43, (arr_37 [11] [i_16])));
                            var_44 = ((~((((((arr_52 [i_17] [i_13] [i_13] [i_16] [i_17]) - 1))) ? ((-(arr_35 [i_12] [i_17]))) : var_0))));
                        }
                    }
                }
                var_45 = (((arr_17 [i_12] [i_13] [i_12] [i_12]) ? var_0 : (((var_1 / -24618) ? ((var_2 ? 10641 : var_3)) : ((((var_14 < (arr_8 [i_13])))))))));
                var_46 = (min((((~var_5) * ((var_2 ? (arr_10 [i_12] [i_15]) : var_14)))), ((max(var_14, var_7)))));
            }
            for (int i_18 = 0; i_18 < 20;i_18 += 1)
            {
                arr_56 [i_12] [i_13] = (var_1 ? var_3 : (((((var_9 ? var_3 : var_4))) ? var_14 : (((arr_50 [i_18] [i_18] [i_13] [i_12] [i_12]) ? var_8 : var_9)))));
                /* LoopNest 2 */
                for (int i_19 = 2; i_19 < 19;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 20;i_20 += 1)
                    {
                        {
                            arr_61 [i_18] [i_18] [i_18] [18] [i_12] = (var_10 < var_3);
                            var_47 = (((min((var_5 / var_3), var_14)) * var_12));
                            var_48 = var_15;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_21 = 3; i_21 < 17;i_21 += 1)
                {
                    for (int i_22 = 3; i_22 < 18;i_22 += 1)
                    {
                        {
                            var_49 = (((((!var_1) ? ((var_1 ? var_10 : (arr_35 [i_12] [i_22]))) : 49152)) % ((((((var_15 << (((arr_11 [i_12] [i_13] [i_18]) - 7855365801929608070))))) + (min(var_13, (arr_65 [i_12] [i_12] [i_12] [i_21] [i_18] [i_21]))))))));
                            var_50 = (var_0 | (min((var_5 != var_4), var_13)));
                        }
                    }
                }
                arr_70 [i_12] = (arr_31 [i_12] [1] [1] [i_12]);
            }
            /* vectorizable */
            for (int i_23 = 0; i_23 < 20;i_23 += 1)
            {
                var_51 = ((((var_8 ? (arr_14 [i_12] [i_12] [5] [1]) : (arr_62 [i_23] [12] [i_13] [1]))) < (((var_11 > (arr_50 [6] [i_13] [i_23] [6] [17]))))));
                var_52 = ((+((((arr_37 [i_13] [i_13]) && 3264317716)))));
                var_53 = var_6;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_24 = 0; i_24 < 19;i_24 += 1)
    {
        for (int i_25 = 2; i_25 < 17;i_25 += 1)
        {
            for (int i_26 = 0; i_26 < 0;i_26 += 1)
            {
                {
                    var_54 = var_9;
                    var_55 = ((((min(1, -1364920596))) ? ((((((118 ? var_9 : var_2))) ? ((((arr_73 [2] [i_24]) == var_15))) : var_1))) : (((arr_34 [i_25] [i_25] [i_25]) ? ((var_1 ? var_8 : (arr_44 [i_24] [i_24] [i_25] [i_24]))) : (arr_53 [0] [i_26] [i_26 + 1] [i_26 + 1])))));
                }
            }
        }
    }
    #pragma endscop
}
