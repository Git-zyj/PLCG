/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -1;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_14 = (var_9 ^ -27338);
                        var_15 = (arr_0 [i_1]);
                        var_16 = (var_6 % var_0);
                    }
                }
            }
        }
        arr_10 [i_0] [i_0] = (arr_6 [i_0] [i_0] [i_0]);

        for (int i_4 = 2; i_4 < 19;i_4 += 1) /* same iter space */
        {
            var_17 = ((-var_0 & (arr_8 [i_0])));

            for (int i_5 = 2; i_5 < 20;i_5 += 1) /* same iter space */
            {
                arr_15 [i_0 + 1] [i_4 + 2] [i_5] [i_5] = ((-(arr_14 [i_0 - 2] [i_5])));
                var_18 = ((var_7 - (arr_3 [i_4 + 1])));
            }
            for (int i_6 = 2; i_6 < 20;i_6 += 1) /* same iter space */
            {
                var_19 -= (((arr_11 [i_6 - 2] [i_4 - 1]) != (arr_11 [i_6 - 2] [i_4 - 1])));
                var_20 = var_11;
            }
            for (int i_7 = 2; i_7 < 20;i_7 += 1) /* same iter space */
            {
                arr_21 [i_0] [i_7] [i_7] = ((var_10 ? (arr_4 [i_0 + 3] [i_4 + 1]) : (arr_4 [i_0 + 3] [i_4 + 1])));
                var_21 = ((var_7 ? (arr_19 [i_7] [i_0] [i_7]) : 9223372036854775807));
            }
        }
        for (int i_8 = 2; i_8 < 19;i_8 += 1) /* same iter space */
        {
            arr_25 [i_0] [12] [i_0] = (arr_7 [i_0 + 2]);
            var_22 = (arr_0 [i_0 + 2]);
            var_23 = var_6;
        }
        for (int i_9 = 2; i_9 < 19;i_9 += 1) /* same iter space */
        {
            arr_29 [i_9 + 2] [i_0] = (((arr_17 [i_0] [i_0] [i_0]) ? (((arr_17 [i_0] [8] [i_0]) / var_1)) : (((!(arr_26 [i_0 + 2] [i_0 + 2]))))));
            var_24 = (!1);
        }
    }
    for (int i_10 = 1; i_10 < 19;i_10 += 1)
    {
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 20;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                {
                    arr_40 [i_10] = -48;
                    var_25 = (!((min((!var_0), (max(10, (-9223372036854775807 - 1)))))));
                    /* LoopNest 2 */
                    for (int i_13 = 1; i_13 < 17;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            {
                                arr_46 [i_10] [i_10] [i_11] [i_10] [i_10] [i_10] [i_10] = (min(var_7, (min((((var_12 ? (arr_17 [i_10] [i_11] [i_10]) : 28002))), 9223372036854775807))));
                                arr_47 [i_10] [i_10] [i_10] [1] [i_10 - 1] = ((((((((((arr_23 [i_10] [i_13] [i_13]) / 1))) >= (arr_34 [i_10 - 1] [i_13 + 2]))))) != (max(243, -9077801191936112673))));
                                var_26 = ((((min((248 * 32765), ((var_12 ? 60769 : 120))))) - (min(((4294967295 ? var_7 : (arr_23 [i_14] [i_11] [11]))), (arr_39 [i_13 + 1] [i_13 + 3] [i_14] [13])))));
                                var_27 -= ((((((arr_1 [i_14]) ? (arr_19 [10] [10] [10]) : 1792))) ? ((((arr_5 [i_13 - 1] [i_10 + 1] [i_10 + 1]) * -32765))) : (arr_6 [1] [i_13] [i_14])));
                                arr_48 [i_10] [i_10] [i_10] [i_11] [i_10] [i_10] [13] = (arr_20 [i_11] [i_10] [i_12]);
                            }
                        }
                    }
                    var_28 = (min((((~(arr_20 [11] [i_10] [i_10 + 1])))), (((((var_11 ? var_9 : (arr_14 [i_10] [i_10])))) | 18102168041818979110))));
                }
            }
        }
        var_29 = 0;
        var_30 += ((!((((((var_11 ? (arr_5 [i_10] [9] [i_10]) : (arr_17 [i_10] [i_10] [12])))) ? (arr_36 [i_10] [1] [i_10]) : (arr_17 [i_10] [i_10] [20]))))));
        var_31 &= (arr_1 [i_10]);
    }
    for (int i_15 = 0; i_15 < 1;i_15 += 1)
    {
        arr_53 [i_15] = ((~((-32758 | (arr_17 [i_15] [i_15] [18])))));
        var_32 = (max(((max(0, 2147483648))), (arr_6 [i_15] [i_15] [i_15])));
        var_33 = (arr_0 [14]);
        var_34 = ((+((((((arr_27 [i_15]) % (arr_4 [i_15] [i_15])))) ? (arr_52 [13]) : var_10))));
    }
    #pragma endscop
}
