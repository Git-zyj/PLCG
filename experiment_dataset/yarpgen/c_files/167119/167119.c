/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= ((((((11280953185902272612 > 4194303) ? (max(7641420043211155736, 65535)) : (var_17 > var_4)))) ? ((((max(-1021906542, -1021906542)) >= (var_11 % var_10)))) : (((1021906549 * var_8) / var_6))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_20 |= (((arr_3 [i_0] [i_0] [i_2]) || (arr_3 [1] [i_1] [1])));
                    arr_8 [i_2] [i_2] [i_1] [i_0] = var_9;
                }
            }
        }

        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            var_21 = 1021906542;
            arr_12 [i_0] [i_0] = (((arr_2 [i_0]) * var_12));
        }
        for (int i_4 = 2; i_4 < 13;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    {
                        var_22 = (max(var_22, 1023));
                        var_23 = var_0;
                    }
                }
            }
            arr_23 [i_0] [i_4] [i_4] &= (arr_1 [i_4 + 1] [i_4]);
            var_24 = var_0;
            arr_24 [i_0] [i_0] [i_4] = (((8743509694486477825 % var_7) ? var_5 : var_15));
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
    {
        var_25 -= ((-1021906551 * (!91)));

        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                arr_33 [13] [i_9] [i_8] [i_7] = -1021906542;
                arr_34 [4] [i_9] [i_9] [i_7] |= ((((19961 ? 1021906550 : var_18)) & (57344 % 1021906541)));
                var_26 = var_0;
            }
            for (int i_10 = 1; i_10 < 1;i_10 += 1)
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 14;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 14;i_12 += 1)
                    {
                        {
                            var_27 = (max(var_27, var_6));
                            var_28 &= var_2;
                            var_29 = ((3 ? -1021906551 : 1023));
                            var_30 -= (arr_0 [i_10 - 1]);
                        }
                    }
                }
                var_31 = ((-(var_18 > var_6)));
                var_32 = var_8;
            }
            var_33 = var_1;
            arr_43 [i_8] = var_16;
        }
        for (int i_13 = 2; i_13 < 10;i_13 += 1)
        {
            /* LoopNest 2 */
            for (int i_14 = 1; i_14 < 13;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 14;i_15 += 1)
                {
                    {
                        arr_53 [i_14] = ((((((arr_19 [i_7]) / (arr_41 [i_7] [i_13] [i_14] [i_15] [i_15])))) || 2305843009205305344));
                        var_34 *= ((var_18 >= (arr_15 [i_14 + 1])));
                        arr_54 [i_14] [i_13] [i_13] [i_13] = (arr_42 [i_13 - 1] [i_13 + 1] [i_13] [i_13 + 3] [i_13] [i_13] [i_13]);
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 14;i_16 += 1)
            {
                for (int i_17 = 1; i_17 < 11;i_17 += 1)
                {
                    {
                        var_35 = (arr_58 [i_7] [i_13] [i_16] [i_17 + 1]);
                        arr_61 [i_17] [i_17] [5] [i_13] [i_13] = (((arr_58 [i_17 + 2] [i_17] [i_17] [i_17]) ? var_1 : 1));
                    }
                }
            }
            arr_62 [i_7] [i_13] [i_7] = (((var_4 + var_3) / (-1021906551 * var_7)));
            var_36 &= (((arr_45 [i_7]) <= (arr_60 [i_13 + 2] [5] [i_13] [i_13])));
            var_37 = var_10;
        }
        var_38 = (max(var_38, ((((arr_9 [i_7] [i_7]) ? (arr_9 [i_7] [i_7]) : (arr_9 [i_7] [i_7]))))));
    }
    #pragma endscop
}
