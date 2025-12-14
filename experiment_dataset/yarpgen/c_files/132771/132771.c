/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_1 [i_0]) && (((arr_0 [i_0]) >= (arr_1 [i_0])))));
        var_15 *= (((29103 / 18446744073709551615) ? ((((arr_0 [i_0]) <= (arr_0 [i_0])))) : ((((arr_1 [i_0]) == var_12)))));

        for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
        {
            var_16 = (arr_4 [i_1] [i_0]);
            var_17 *= ((!((((arr_1 [i_0]) ? (arr_0 [2]) : var_0)))));
            var_18 = (arr_0 [16]);
            var_19 = -3;
        }
        for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
        {
            var_20 = var_7;
            var_21 = 3;
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        {
                            var_22 -= (((-7 + var_6) ? (arr_14 [i_2] [i_2] [i_3] [i_3] [i_5] [i_0]) : (arr_1 [i_5])));
                            var_23 = 65535;
                            var_24 = ((var_12 ? (arr_14 [i_5] [i_2] [1] [2] [i_5] [i_4]) : -1993233944));
                            var_25 *= -29114;
                        }
                    }
                }
            }

            for (int i_6 = 3; i_6 < 17;i_6 += 1)
            {
                var_26 |= (((arr_11 [i_6 + 1] [i_6 + 1] [i_6] [4] [i_6]) ? 29094 : (arr_11 [i_6 - 2] [i_6 + 1] [i_6] [i_6] [i_6])));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        {
                            arr_22 [1] [i_2] [i_6 - 2] [i_7] [i_6] [i_8] = -0;
                            var_27 = (((arr_0 [i_2]) ? (arr_0 [i_0]) : (arr_0 [i_8])));
                            arr_23 [i_0] [i_6] [i_6] = ((((((arr_8 [i_0] [i_0] [i_0] [i_0]) ? var_10 : -4))) ^ (arr_3 [i_7] [i_6 + 1] [i_8])));
                            var_28 = (arr_15 [i_0] [i_2] [i_6 + 2] [i_6] [i_0]);
                        }
                    }
                }
                var_29 = (max(var_29, ((((((var_4 ? (arr_17 [i_0] [i_0]) : 0))) && (arr_21 [i_0] [i_2] [i_6] [i_6 + 1] [i_6]))))));
            }
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {

                for (int i_10 = 0; i_10 < 19;i_10 += 1)
                {
                    var_30 = (arr_0 [i_0]);
                    var_31 = ((-907849739 ? 1073741824 : ((var_10 ^ (arr_18 [i_0])))));
                }
                for (int i_11 = 0; i_11 < 19;i_11 += 1)
                {
                    var_32 ^= (arr_25 [i_0] [i_11]);
                    arr_34 [i_0] [i_2] [i_9] [i_11] = (arr_10 [i_0] [i_2] [i_0] [i_11]);
                    var_33 = var_9;
                }
                arr_35 [i_0] [i_2] [i_0] [i_2] = 29113;
            }
            for (int i_12 = 0; i_12 < 19;i_12 += 1)
            {
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 19;i_13 += 1)
                {
                    for (int i_14 = 2; i_14 < 18;i_14 += 1)
                    {
                        {
                            var_34 = ((((arr_21 [i_0] [i_2] [i_12] [i_13] [i_14]) - (arr_29 [i_0] [i_0]))));
                            arr_42 [i_14] [i_13] [i_12] [i_2] [i_0] = var_4;
                        }
                    }
                }

                for (int i_15 = 3; i_15 < 18;i_15 += 1)
                {
                    var_35 = -0;

                    for (int i_16 = 0; i_16 < 19;i_16 += 1)
                    {
                        var_36 = ((-5 ? (-9220 & var_13) : (arr_26 [i_0] [i_2] [i_12] [i_15 - 1])));
                        var_37 = ((-(((arr_9 [i_0] [i_2] [i_2] [i_15]) ? 0 : 1))));
                        var_38 |= var_11;
                    }
                    var_39 += ((-((14 << (var_12 - 10887288824114360267)))));

                    for (int i_17 = 2; i_17 < 17;i_17 += 1)
                    {
                        var_40 |= ((!(((576460752303357952 ? 13625 : var_3)))));
                        arr_53 [i_15] [i_2] [i_12] [i_15 + 1] = 4;
                        var_41 = (max(var_41, ((((arr_39 [i_0] [i_0] [i_0] [i_0] [i_0] [10]) >= (arr_20 [i_0]))))));
                        var_42 = (arr_44 [i_15] [i_15] [i_15]);
                    }
                    for (int i_18 = 0; i_18 < 19;i_18 += 1)
                    {
                        arr_56 [i_12] [i_15] [i_12] [i_12] [i_12] = (var_3 ^ 65535);
                        arr_57 [i_0] [i_2] [i_12] [i_15 - 1] [i_15] [i_18] &= ((3018746198 ? 65535 : 1));
                        var_43 = (((-8427416434307205327 + -120) ? 1276221116 : ((~(arr_27 [i_2] [i_15 + 1] [i_18])))));
                    }
                    for (int i_19 = 0; i_19 < 19;i_19 += 1)
                    {
                        var_44 = ((~(arr_40 [i_0] [i_2] [i_12] [i_15 - 1] [6])));
                        var_45 &= (((arr_32 [i_0] [1]) - -13644));
                        var_46 = (max(var_46, (((-(var_12 >= var_6))))));
                        var_47 -= var_10;
                        var_48 -= -1;
                    }
                    for (int i_20 = 0; i_20 < 19;i_20 += 1)
                    {
                        var_49 = (min(var_49, (((-((var_1 ? (arr_8 [i_20] [6] [12] [4]) : 72)))))));
                        arr_62 [i_15] [i_12] [i_0] [i_15] = ((var_14 <= (arr_30 [i_0] [i_2] [i_12])));
                        var_50 = (((-124 ? var_11 : (arr_30 [i_0] [i_12] [i_15 - 1]))));
                        var_51 = -15;
                    }
                    var_52 = arr_43 [i_0] [i_0] [i_0];
                }
                arr_63 [i_0] [8] [i_0] = var_1;
            }
            for (int i_21 = 0; i_21 < 19;i_21 += 1)
            {
                var_53 = ((((~(arr_17 [i_0] [i_21]))) - 3838455944));
                var_54 = (max(var_54, ((~(arr_48 [i_21] [i_21])))));
            }
        }
        for (int i_22 = 2; i_22 < 18;i_22 += 1)
        {
            var_55 = ((1735333146 != (4 != 23365)));
            var_56 = (min(var_56, var_13));
            var_57 = 712;
            var_58 = ((32767 >> (((((arr_40 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_25 [i_0] [i_22]) : (arr_5 [i_0] [i_0]))) - 51))));
        }
        for (int i_23 = 0; i_23 < 19;i_23 += 1)
        {

            for (int i_24 = 0; i_24 < 19;i_24 += 1)
            {
                var_59 += 1;
                arr_73 [i_0] [i_0] [i_0] = ((!(!var_9)));
            }
            var_60 = (arr_52 [i_23] [i_23]);
            var_61 = (min(var_61, var_8));
        }
    }
    var_62 = ((var_11 ? ((min(var_7, var_2))) : ((169 >> (var_4 - 1478103812)))));

    for (int i_25 = 0; i_25 < 11;i_25 += 1)
    {
        var_63 -= ((((min((arr_27 [i_25] [i_25] [i_25]), (~var_5)))) ? 5435 : 1));
        arr_77 [i_25] [10] = (max(((max(56324, 123))), (max(var_7, ((var_2 ? var_13 : (arr_20 [i_25])))))));
    }
    #pragma endscop
}
