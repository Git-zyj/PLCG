/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_19 = (((-var_12 ? var_2 : ((var_6 ? var_12 : var_5)))));
                            arr_13 [i_0] [i_1] [i_0] [i_3] [i_0] [i_1] = ((((((((var_13 ? var_11 : (arr_3 [i_0] [i_2])))) ? var_12 : ((var_18 ? var_17 : var_1))))) ? (((~(var_18 < var_4)))) : ((var_1 ? (((var_14 ? var_2 : var_0))) : -var_13))));
                            var_20 = ((~(((~var_17) ? var_8 : ((var_0 ? var_14 : (arr_10 [i_0] [i_2] [i_3])))))));
                        }
                    }
                }
                arr_14 [i_0] = (((arr_5 [i_0] [i_0] [i_0]) << ((((+((var_16 ? (arr_8 [i_0]) : var_14)))) - 190))));
                var_21 -= (((arr_4 [i_0]) <= var_0));
                var_22 = var_10;
            }
        }
    }

    for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                {
                    var_23 = ((((((var_8 * var_6) * var_2))) ? (((var_16 + var_8) ? -var_3 : var_13)) : (((2735280920077746301 ? 3219628319263244346 : 245)))));
                    arr_23 [i_4] [i_5] [i_4] [i_5] = var_4;
                }
            }
        }
        arr_24 [i_4] = ((~((~((var_15 ? var_4 : var_10))))));
    }
    for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
    {
        arr_28 [i_7] [i_7] = ((var_14 ? (arr_22 [i_7] [i_7] [i_7] [i_7]) : ((-(~var_8)))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 22;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 23;i_11 += 1)
                        {
                            {
                                var_24 = ((((((((var_4 ? var_4 : (arr_40 [i_9] [i_9] [i_10] [i_10] [i_7])))) ? ((var_6 + (arr_32 [i_7]))) : var_15))) ? var_12 : -33168));
                                arr_41 [i_8] [i_8] [i_7] [i_8] [i_7] = ((((((((38 ? 61359 : 6787786963793827793))) ? ((var_12 ? (arr_31 [i_7]) : var_4)) : var_0))) ? -var_9 : ((-((var_2 ? var_3 : var_1))))));
                                var_25 = (((((~(~-676066076)))) ? (((~(arr_30 [i_7] [i_9] [i_10])))) : (~var_13)));
                            }
                        }
                    }

                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {

                        for (int i_13 = 3; i_13 < 20;i_13 += 1)
                        {
                            arr_46 [i_7] = ((~(!32360)));
                            arr_47 [i_7] [i_8] [i_9] [i_13] = ((~((~((var_11 ? var_10 : (arr_27 [i_7] [i_7])))))));
                            arr_48 [i_8] [i_7] = (arr_29 [i_7]);
                            arr_49 [i_7] [i_7] [i_9] [i_12] = ((((((((arr_21 [i_7] [i_7]) << (var_14 - 3910273507970307742)))) ^ ((~(arr_35 [i_7] [i_7] [i_7])))))) ? (((~(var_15 & var_17)))) : var_6);
                            var_26 = (arr_43 [i_8] [i_8] [i_9] [i_8]);
                        }
                        /* vectorizable */
                        for (int i_14 = 0; i_14 < 23;i_14 += 1)
                        {
                            arr_53 [i_9] [i_8] [i_9] [i_7] = ((((var_17 ? var_18 : var_2))) ? (arr_26 [i_12]) : var_14);
                            var_27 = ((-var_8 ? var_13 : (arr_36 [i_7] [i_8] [i_7] [i_12] [i_12])));
                            arr_54 [i_7] [i_8] [i_7] [i_12] [i_14] = ((-var_8 ? ((var_17 ? var_18 : var_6)) : var_2));
                        }
                        for (int i_15 = 1; i_15 < 21;i_15 += 1)
                        {
                            var_28 = (min(var_28, ((~(((~var_13) ? (((arr_45 [i_7] [i_8] [i_8] [i_9] [i_15]) ? var_11 : var_3)) : (~var_11)))))));
                            var_29 = (min(var_29, ((((((var_5 ? ((var_18 ? (arr_42 [6] [i_8] [i_8] [i_9] [i_12] [i_15]) : (arr_26 [i_7]))) : ((var_1 ? (arr_43 [i_8] [i_9] [i_12] [i_15]) : var_12))))) + (((((-(arr_32 [22])))) ? var_6 : ((((arr_21 [18] [i_8]) ? var_4 : var_0))))))))));
                            arr_57 [i_7] [i_7] [i_9] [i_7] = (((((((3194994383079321609 ? 12442 : 3662085713))) ? (~var_4) : (~var_17))) <= ((((var_13 ? var_8 : var_12)) / -var_12))));
                            var_30 = (~(((((var_12 ? var_15 : var_8))) ? (arr_39 [i_7] [i_12] [i_12] [i_9] [i_9] [i_7] [i_7]) : ((var_2 ? (arr_33 [i_7] [i_7]) : var_16)))));
                        }
                        for (int i_16 = 0; i_16 < 23;i_16 += 1)
                        {
                            var_31 = var_14;
                            var_32 = (((~((var_13 ? var_17 : (arr_15 [i_8]))))));
                            var_33 = var_5;
                        }
                        var_34 = (arr_45 [i_7] [i_7] [i_7] [i_7] [i_7]);
                    }
                    arr_61 [i_7] = (~((((var_14 && (arr_33 [i_7] [i_7]))) ? (((arr_58 [i_7] [i_8] [i_7] [i_9] [i_9] [i_8]) ^ var_18)) : (~var_4))));
                }
            }
        }
        arr_62 [i_7] = (((((-var_5 + (var_7 - var_7)))) ? ((-(((arr_51 [i_7] [i_7] [i_7] [i_7] [i_7]) ? var_4 : var_4)))) : ((+((var_1 ? (arr_60 [i_7] [i_7] [i_7] [i_7] [i_7]) : var_18))))));
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 23;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 23;i_18 += 1)
            {
                {
                    var_35 = (((((-((-(arr_20 [i_7] [i_17] [i_17])))))) ? 32366 : (((((var_5 ? var_0 : var_6))) ? var_2 : (arr_56 [i_7] [i_7] [i_7] [i_7] [i_18])))));
                    arr_67 [i_7] [i_17] [i_17] [i_7] = (~var_17);
                    arr_68 [i_18] [i_7] [i_7] [i_7] = var_17;
                    arr_69 [i_7] [i_7] = (~38455);
                }
            }
        }
    }
    #pragma endscop
}
