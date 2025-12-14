/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((-(max(var_2, var_9))))) ? (max(var_2, -0)) : 2621349915));

    for (int i_0 = 1; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_3 [14] = (((4049025872 < 4294967279) || (max((arr_1 [i_0 - 1]), (arr_2 [i_0 + 2])))));
        var_20 = (max(var_20, (((((((var_8 ? 4294967279 : var_3)))) ? (((-(arr_2 [15])))) : (((74 + var_3) | -1673617380)))))));

        /* vectorizable */
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            arr_6 [i_1] = ((((20002 || (arr_5 [i_1] [i_1 - 2])))));
            arr_7 [18] &= ((arr_1 [i_0 + 2]) | (arr_2 [i_0]));
            var_21 -= ((41 > (arr_4 [i_0 + 3])));

            for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
            {
                arr_10 [i_1] [i_1] [i_1 + 1] [17] = (arr_4 [i_0 + 1]);
                var_22 = (max(var_22, (((20002 ? 4294967279 : 1)))));
                arr_11 [9] [i_1] [i_2] = 0;
                arr_12 [i_0] [i_1] = (((1 ? 1 : (arr_9 [i_1] [i_1] [i_1 + 2] [i_1]))));
            }
            for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        {
                            var_23 |= (71 || 0);
                            arr_22 [8] |= ((!(arr_2 [i_0 + 3])));
                            var_24 = (min(var_24, ((((4294967268 / 1673617373) ? (((2384558238 < (arr_20 [i_3] [1])))) : (arr_20 [i_0] [12]))))));
                            var_25 = (min(var_25, ((((arr_19 [i_0 + 3] [i_1 - 2] [i_3]) | (arr_16 [i_0] [i_0]))))));
                        }
                    }
                }
                var_26 = (min(var_26, (((var_17 || (arr_13 [i_0] [i_1 + 2]))))));
            }
            for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
            {
                arr_26 [i_1] [i_1 + 2] [i_1 + 2] = var_5;
                arr_27 [i_0] [i_0] [i_6] [i_1] = 3182815713881564786;
                var_27 *= (var_1 * var_14);
            }
            for (int i_7 = 1; i_7 < 17;i_7 += 1)
            {
                arr_30 [i_1] = (((((var_8 ? (arr_16 [i_0] [i_0]) : (arr_17 [i_0] [i_0] [i_1] [2])))) * -3168375292));

                for (int i_8 = 1; i_8 < 1;i_8 += 1)
                {
                    arr_33 [i_0 + 1] [2] [i_7] |= (((arr_13 [i_8] [2]) ? (var_2 | 31) : ((1 ? var_17 : 20002))));
                    var_28 += 18446744073709551590;
                    arr_34 [i_0] [i_1] [i_0] [i_0] = (arr_4 [i_0]);
                }
                var_29 -= ((4294967271 ? 1 : (arr_24 [15] [i_1 + 2] [i_7])));
                var_30 = 2286319093;
            }
            arr_35 [i_1] [i_1] = (((arr_5 [i_1] [i_1 - 2]) - (arr_5 [i_1] [i_1 - 2])));
        }
        for (int i_9 = 2; i_9 < 18;i_9 += 1)
        {
            arr_38 [i_0] [1] [i_9] = (((((-32767 - 1) * 17743743720372583889)) ^ (min(403720788, var_2))));

            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                arr_43 [i_10] = (((min(((((-2147483647 - 1) + 29993))), -var_18)) + ((((((arr_21 [i_9] [i_9 + 2] [i_10]) ? var_12 : (arr_42 [i_0] [1] [i_0] [9])))) ? var_13 : ((((arr_28 [i_10] [i_0 + 3] [i_0 + 3]) ? 1013702269 : (arr_13 [i_0] [i_0]))))))));
                var_31 ^= ((~((((max(140, 0))) * ((var_11 / (arr_16 [i_0 + 1] [i_9])))))));
            }
            /* vectorizable */
            for (int i_11 = 0; i_11 < 21;i_11 += 1)
            {
                arr_46 [i_0] [i_9] [i_9] = ((32767 > (arr_23 [i_9 + 1] [i_9] [i_9] [i_0 - 1])));
                var_32 = (max(var_32, ((18446744073709551615 > (arr_28 [i_0 + 2] [i_0 + 1] [i_11])))));
            }
            for (int i_12 = 0; i_12 < 21;i_12 += 1)
            {
                arr_50 [i_0] [i_0] [i_0] [5] = (min(((((var_17 ? 18446744073709551615 : (arr_2 [i_0 + 3]))) - var_14)), 19948));
                arr_51 [i_0] [i_9 + 2] [1] [i_9 + 2] = (max((((arr_39 [i_0] [i_0] [1]) ? ((~(arr_48 [i_0] [i_0] [15]))) : -var_6)), 112));
                arr_52 [i_0] [10] [i_12] [i_0] = (((max((arr_41 [i_0 + 1] [i_0 + 1] [i_0 - 1]), var_11)) * var_7));
            }
        }
    }
    for (int i_13 = 1; i_13 < 18;i_13 += 1) /* same iter space */
    {
        arr_57 [i_13] &= (((((!((min((arr_13 [i_13] [i_13]), var_3)))))) | (((max(var_0, (arr_5 [14] [i_13])))))));
        var_33 = (min(var_33, ((1 ? 116 : 18446744073709551601))));
    }
    var_34 = ((-((285459014 + (var_12 - 0)))));
    #pragma endscop
}
