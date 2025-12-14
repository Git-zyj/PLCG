/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156121
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (((var_7 ? (0 == 7) : ((((var_1 * var_3) < (min(var_6, 7))))))))));

    for (int i_0 = 4; i_0 < 19;i_0 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
        {
            arr_5 [2] [i_1] = ((~((5708516515605344129 << (3 - 3)))));
            var_17 = var_6;
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 19;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        {
                            var_18 = (max(var_18, ((((var_14 / (arr_1 [12] [i_1])))))));
                            var_19 = ((((var_15 ? var_11 : 1)) >= -7));
                        }
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    {
                        var_20 *= (((((18446744073709551611 + 32762) >> (((min((arr_21 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]), -32)) + 86)))) != (((max((var_4 || var_14), (!var_13)))))));

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            var_21 = (((var_14 | var_11) <= (((arr_13 [i_6]) >> (var_6 + 2083462137815089095)))));
                            var_22 = ((arr_2 [i_0 + 1] [i_0 + 2]) - var_2);
                            var_23 = (max(var_23, (((7 ? (((31 == (arr_9 [i_0 - 1] [i_0 - 1] [i_0] [i_0])))) : 31)))));
                        }
                        for (int i_9 = 1; i_9 < 19;i_9 += 1)
                        {
                            var_24 = (((((((arr_9 [i_9 - 1] [i_7] [i_5] [i_0 - 1]) ? (arr_18 [i_6]) : 10204565101894267399)) / (var_5 / var_8))) - var_2));
                            arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_6] = (var_8 == -77);
                            arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_6] = (arr_0 [i_0]);
                            var_25 -= -0;
                        }

                        for (int i_10 = 3; i_10 < 20;i_10 += 1)
                        {
                            arr_33 [i_0] [i_0 - 4] [i_0] [i_0 - 2] [i_0] [i_6] = ((-(((((((arr_17 [i_10]) != 8242178971815284224))) > (max(76, -29)))))));
                            var_26 &= (min((max((arr_28 [i_5] [i_0] [i_0] [i_5] [i_6] [i_5] [i_10]), ((var_6 ^ (arr_18 [i_0]))))), ((((arr_16 [i_0] [i_0 - 3] [i_6]) ^ (arr_16 [i_5] [i_0 + 1] [19]))))));
                            arr_34 [i_0] [16] [i_6] [i_7] [i_6] [i_10] = var_4;
                            var_27 = ((var_6 == (((-17158 / (((arr_11 [i_0] [i_5] [i_6] [i_6] [11] [i_5] [i_10]) ? var_5 : (arr_25 [i_0] [i_6] [i_0] [i_0] [i_0]))))))));
                        }
                        for (int i_11 = 0; i_11 < 21;i_11 += 1) /* same iter space */
                        {
                            arr_39 [i_0] [i_5] [i_6] [2] [i_6] = ((-(max(((((arr_12 [i_11]) | -12))), (2479517005661902506 & -1527275684)))));
                            arr_40 [i_0] [i_6] [i_7] = ((var_8 << ((var_1 * (arr_37 [i_0 + 2] [i_5] [i_6] [9] [i_11])))));
                            var_28 = (min(var_28, ((max((max((var_10 - var_10), ((var_14 ? (arr_38 [i_11] [i_7] [i_5] [i_6] [i_5] [i_0]) : var_1)))), (~65530))))));
                        }
                        for (int i_12 = 0; i_12 < 21;i_12 += 1) /* same iter space */
                        {
                            var_29 = (max(var_29, ((min(var_11, ((262112 ? (((1 ? 1 : -7408))) : 85205757)))))));
                            var_30 = (min(1, -28));
                            arr_43 [i_0] [i_6] [i_6] [i_6] [i_0] = (arr_14 [i_5]);
                        }
                    }
                }
            }
            var_31 = (~2);
        }
        arr_44 [i_0] = -55;
    }
    for (int i_13 = 4; i_13 < 19;i_13 += 1) /* same iter space */
    {
        var_32 *= var_14;
        var_33 = (((((var_15 <= 0) + (((-127 - 1) / (arr_10 [i_13 - 2] [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]))))) + (((((((1 > (arr_8 [i_13 + 2] [i_13])))) != ((max(1, 10394)))))))));
    }
    /* vectorizable */
    for (int i_14 = 4; i_14 < 19;i_14 += 1) /* same iter space */
    {
        arr_51 [i_14] = (((((-48 ? 127 : 31952345680154816))) ? var_6 : var_15));
        arr_52 [i_14] = ((var_14 * (((arr_14 [i_14]) / (arr_36 [i_14] [12] [i_14] [i_14 - 3] [i_14])))));
        arr_53 [i_14] [i_14] = ((-(!var_9)));
        /* LoopNest 3 */
        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {
            for (int i_16 = 1; i_16 < 17;i_16 += 1)
            {
                for (int i_17 = 1; i_17 < 18;i_17 += 1)
                {
                    {
                        var_34 = (arr_27 [i_14 + 1] [i_15] [i_17] [18] [i_16]);
                        arr_63 [i_14] [i_15] [i_14] [i_17] = ((-((0 ? 1 : 67108863))));
                    }
                }
            }
        }
    }
    var_35 &= ((((((((var_13 ? var_15 : var_11))) ? var_1 : var_13))) ? (((max(131, 127)))) : var_9));

    /* vectorizable */
    for (int i_18 = 3; i_18 < 15;i_18 += 1)
    {
        arr_67 [i_18] [i_18] = (~var_0);

        for (int i_19 = 0; i_19 < 1;i_19 += 1)
        {

            for (int i_20 = 0; i_20 < 1;i_20 += 1)
            {
                arr_75 [i_18] [1] [i_20] = ((1755953253 ? 49676 : 1));
                var_36 *= (((9 ^ 1755953253) == 11484));
            }
            var_37 = (max(var_37, ((((arr_8 [i_18 + 1] [i_18 - 1]) ? var_9 : 49676)))));
            arr_76 [i_18 - 3] [i_19] [i_18] = ((var_15 ? (arr_8 [i_18] [i_18]) : (arr_8 [i_18] [5])));
        }
    }
    #pragma endscop
}
