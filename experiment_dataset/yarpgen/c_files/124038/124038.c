/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_20 ^= (((((((max(var_5, var_13))) ? (arr_3 [i_2]) : var_4))) ? (var_1 == var_3) : ((~(max((arr_1 [8]), 2074933593))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_21 = ((var_12 ? (((!(arr_12 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_4] [i_4] [i_0 + 1])))) : ((+((max((arr_3 [i_1]), var_11)))))));
                                var_22 = (arr_2 [2]);
                                var_23 = (((arr_6 [i_2] [i_3 + 1] [i_2] [16]) ? var_11 : var_6));
                                arr_13 [i_2] [i_2] = var_2;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            {

                for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
                {

                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            arr_29 [i_5] [i_9] [i_5] [8] &= var_17;
                            var_24 = (max(var_24, 1));
                        }
                        var_25 += (max(var_9, ((((!(arr_16 [i_5]))) ? (((min(16, (arr_2 [15]))))) : ((1 ? (arr_20 [1] [1] [i_8]) : (arr_9 [i_5] [i_6] [i_7] [i_5])))))));
                        var_26 = -var_10;

                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            var_27 = ((-(arr_10 [i_5] [1] [i_8] [i_5] [i_8] [1])));
                            var_28 = (!var_14);
                            var_29 = (1 != 1);
                        }
                        for (int i_11 = 0; i_11 < 10;i_11 += 1)
                        {
                            arr_36 [i_5] [i_5] [i_8] = ((((((arr_0 [i_5]) < (arr_0 [8])))) + ((((-1 ? var_13 : var_14)) / 1))));
                            var_30 = (max(var_30, (((((min(var_0, (arr_21 [i_7] [i_8] [i_11])))) | ((~(arr_0 [i_5]))))))));
                            var_31 = (((arr_22 [i_5] [i_5] [7] [i_8] [i_5] [0]) % var_4));
                            var_32 += (4455843358045648412 * 69);
                            var_33 = (max(var_33, ((((((var_16 ? (arr_12 [i_5] [i_6] [i_7] [i_7] [i_7] [i_7] [i_11]) : var_1))) ? var_9 : (min((((arr_34 [i_7] [i_6] [i_7] [i_8] [i_8]) ? var_3 : 9790658626558430185)), (arr_23 [i_7]))))))));
                        }
                        for (int i_12 = 1; i_12 < 9;i_12 += 1)
                        {
                            var_34 = var_18;
                            arr_39 [i_5] [3] [8] [8] [i_8] [6] [i_8] = (((arr_19 [i_5] [1] [i_5]) * (((arr_19 [i_12] [i_6] [i_5]) / var_15))));
                        }
                    }
                    var_35 = ((-(((arr_38 [i_5] [i_5] [i_5] [7] [i_5] [i_5]) ? var_9 : (arr_38 [i_5] [i_5] [1] [i_7] [i_5] [i_7])))));
                }
                for (int i_13 = 0; i_13 < 10;i_13 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 10;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 10;i_15 += 1)
                        {
                            {
                                var_36 = (((((24576 ? (max(var_0, -1372702130)) : ((var_12 ? (arr_26 [i_13]) : (arr_4 [i_6] [i_6])))))) ? -126 : (max(((var_0 ? var_14 : var_4)), (arr_0 [16])))));
                                var_37 = ((var_12 <= ((min((!120), (!var_13))))));
                            }
                        }
                    }
                    arr_47 [i_5] [i_5] = 17;
                }
                for (int i_16 = 3; i_16 < 8;i_16 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_17 = 2; i_17 < 9;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 10;i_18 += 1)
                        {
                            {
                                var_38 = var_14;
                                var_39 = ((-((((((((arr_17 [3] [i_6] [i_6]) + 2147483647)) << (251 - 251)))) ? var_13 : ((var_14 ? var_1 : var_10))))));
                                arr_57 [i_5] [i_5] [i_17] [5] [i_5] [7] [5] = (min(15281346477123143112, 18127332382813652194));
                            }
                        }
                    }

                    for (int i_19 = 0; i_19 < 10;i_19 += 1)
                    {
                        var_40 ^= ((((min((arr_48 [i_5] [i_5] [i_16 - 3] [i_16]), (arr_44 [i_6] [i_6] [i_16 + 2] [i_16 + 2])))) ? ((min(((var_11 ? var_16 : 358013436)), ((((arr_3 [i_19]) ? (arr_34 [i_19] [i_6] [i_19] [i_19] [6]) : (arr_55 [i_19] [i_6] [i_19] [6] [i_19]))))))) : var_18));
                        var_41 = (((15467588419805831964 / 1) % (((-30 * (arr_48 [i_16] [i_16] [i_16 - 3] [i_16]))))));
                    }
                }
                var_42 &= (min(var_17, ((-(arr_33 [i_6] [0] [4] [0] [0])))));

                /* vectorizable */
                for (int i_20 = 0; i_20 < 10;i_20 += 1) /* same iter space */
                {
                    var_43 = (var_7 ^ (arr_11 [1] [i_5] [i_6] [i_20]));
                    var_44 = ((arr_21 [4] [4] [8]) ? (arr_21 [i_5] [i_5] [i_5]) : (arr_21 [i_5] [i_6] [i_20]));
                    var_45 = var_13;
                }
                for (int i_21 = 0; i_21 < 10;i_21 += 1) /* same iter space */
                {
                    var_46 = (((((~((-3 ? var_11 : var_3))))) ? ((~(((arr_55 [i_21] [4] [i_5] [i_5] [i_21]) ? (arr_11 [i_5] [i_6] [i_5] [10]) : var_3)))) : (((arr_62 [i_6] [i_6] [i_6] [5]) ? ((max(var_14, (arr_60 [i_5] [i_5] [1] [i_5])))) : ((874655201 ? var_17 : -36))))));
                    var_47 = 24600;
                    var_48 -= (var_9 ? var_10 : (!-var_9));
                    var_49 = var_18;
                }
                /* vectorizable */
                for (int i_22 = 0; i_22 < 10;i_22 += 1) /* same iter space */
                {
                    var_50 = (((arr_8 [i_22] [i_22] [16] [16]) ? var_5 : var_5));
                    var_51 = (((44 || 2979155653903719646) ? 319411690895899445 : -1329332411));

                    for (int i_23 = 0; i_23 < 1;i_23 += 1)
                    {
                        var_52 = -40;
                        var_53 = (arr_27 [i_5] [i_6] [i_22] [i_22] [i_23]);
                        arr_71 [i_5] [i_23] [i_5] [i_22] [6] = arr_25 [i_5] [i_5] [i_5] [i_23] [i_23];
                    }
                }
                for (int i_24 = 0; i_24 < 10;i_24 += 1) /* same iter space */
                {
                    var_54 *= ((((min(var_11, var_18))) ? -2147483645 : (arr_61 [9] [i_6] [0])));
                    arr_76 [i_5] [i_5] [i_6] [i_5] = var_14;
                    arr_77 [i_5] [4] [i_6] [8] = (min(((((((var_11 == (arr_52 [i_5] [i_6] [i_6] [i_24]))))) + (max(15467588419805831948, (arr_68 [i_6] [i_6] [i_6] [i_6]))))), ((((!(arr_20 [i_5] [i_5] [i_5]))) ? (min(var_18, var_7)) : (~var_1)))));
                }
                var_55 = (((arr_14 [i_5]) ? (((((((arr_1 [i_5]) ? var_11 : var_6))) ? (arr_27 [7] [0] [i_5] [8] [0]) : var_5))) : (max((arr_59 [i_6] [i_5]), ((min((arr_52 [2] [0] [0] [6]), var_9)))))));
            }
        }
    }
    var_56 = var_0;
    #pragma endscop
}
