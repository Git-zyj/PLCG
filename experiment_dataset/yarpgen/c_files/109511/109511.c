/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_16 = (min(var_16, ((((((var_8 ? (((64777 ? 176543108 : (arr_6 [i_0] [i_1] [i_2] [i_1])))) : 1023))) ? (49 > 150) : 105)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [0] [i_2] = var_5;
                                var_17 = (min(var_17, 2139051499));
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    var_18 &= ((((((((9223372036854775807 ? (arr_9 [i_5]) : var_2))) ? var_7 : (((arr_16 [i_0] [i_0] [i_0 - 4]) ? var_13 : 10455187923370555753))))) ? ((-1319081785 ? ((-(arr_11 [i_0] [i_0] [i_1] [i_1] [i_5]))) : 1006)) : var_14));
                    var_19 = (min((((var_9 != (arr_11 [i_5] [i_1] [i_5] [i_0 + 3] [i_0 + 2])))), (min(4294966289, 106))));
                    arr_17 [i_0] [i_1] [i_1] [i_5] = ((-((~(arr_4 [i_0])))));
                }
                arr_18 [i_0] [i_1] = (((((-(min(27704, 12263878108095562))))) ? (min(var_4, (1006 & 3))) : ((min((arr_2 [i_0] [i_1]), -3)))));
                var_20 = -2749059704906588635;
                arr_19 [i_0 + 4] = (((arr_0 [i_0]) << (((((var_15 ? 0 : var_13))) % var_6))));
            }
        }
    }
    var_21 = 1176559689;

    /* vectorizable */
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        var_22 = 2749059704906588635;

        for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
        {
            arr_27 [i_6] [i_6] = (arr_21 [i_6]);
            var_23 = (arr_20 [i_6] [i_7]);

            for (int i_8 = 1; i_8 < 1;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 22;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        {
                            arr_37 [i_6] [12] [i_9 + 1] [i_8] [i_7] [i_6] [i_6] = var_8;
                            var_24 = var_11;
                        }
                    }
                }
                arr_38 [i_6] [i_7] [i_8] = ((!((((arr_29 [i_6] [i_6] [i_8 - 1]) ? 27704 : 129)))));
            }
        }
        for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_12 = 1; i_12 < 23;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 24;i_14 += 1)
                    {
                        {
                            arr_50 [i_6] [i_13] [i_12] [i_11] [i_6] = ((var_8 ? ((((arr_28 [i_6] [i_12] [i_11] [i_6]) ? 4179314531 : var_11))) : (arr_32 [i_12 - 1] [i_12 - 1] [i_12 + 1])));
                            arr_51 [i_6] [i_11] [i_12 + 1] [i_13] [1] [i_6] = ((!(arr_47 [i_6] [i_6] [i_11] [i_11] [i_12] [i_13] [i_14])));
                        }
                    }
                }
            }
            var_25 = 204;

            for (int i_15 = 0; i_15 < 24;i_15 += 1) /* same iter space */
            {
                var_26 -= (arr_47 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]);
                var_27 += 61233;
                var_28 -= (!8746002335256509647);
            }
            for (int i_16 = 0; i_16 < 24;i_16 += 1) /* same iter space */
            {
                var_29 = (((((127 ? var_7 : (arr_29 [i_6] [i_6] [i_16])))) ? ((var_11 * (arr_43 [i_16] [i_6]))) : 1023));
                arr_56 [i_6] = 15023456962663880844;
            }
            var_30 = (max(var_30, var_3));
        }
        for (int i_17 = 0; i_17 < 24;i_17 += 1)
        {
            arr_60 [i_6] = ((~(((arr_59 [i_17]) & 37832))));
            arr_61 [i_6] [i_17] [i_17] = ((var_11 ? 127 : (arr_45 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])));
        }
        for (int i_18 = 0; i_18 < 24;i_18 += 1)
        {
            var_31 = var_10;
            var_32 = (4294966273 * var_4);
        }
    }
    for (int i_19 = 2; i_19 < 19;i_19 += 1)
    {
        arr_66 [i_19] = (((arr_62 [i_19]) / -3));
        var_33 = (((7269037090190231703 << 0) ? (((arr_43 [i_19 - 2] [i_19 + 4]) ? (arr_43 [i_19 + 4] [i_19 - 1]) : (arr_43 [i_19 + 3] [i_19 + 2]))) : (arr_43 [i_19 - 2] [i_19 + 3])));
    }
    var_34 |= ((((((var_6 - var_9) ? -1710650724 : ((var_11 ? var_5 : 2620625334))))) ? ((var_2 | (var_10 >= 1674341962))) : ((-((var_0 ? 151595422 : var_2))))));
    #pragma endscop
}
