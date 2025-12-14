/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128394
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_11;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_16 = ((((max(-23639, (arr_2 [i_0])))) ? ((((arr_1 [i_0]) && (arr_2 [i_0])))) : var_6));

        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_17 ^= ((!((((arr_2 [i_3]) ? (((~(arr_9 [i_3] [i_2] [i_1] [i_0] [i_0] [i_0])))) : (((arr_0 [i_0] [i_3]) | (arr_6 [i_3] [i_3] [i_2 - 2] [i_3]))))))));
                        arr_10 [i_1] [i_0] [i_3] = (((arr_0 [i_1 + 1] [i_0]) / 23638));
                        arr_11 [i_0] [i_0] [i_2 + 1] [i_0] [i_0] = ((max(3758096384, (((1 ? -8 : 12))))));
                    }
                }
            }
            var_18 -= (((arr_2 [14]) | (arr_8 [i_1] [i_1] [8] [i_1])));
        }
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            var_19 = ((~(((arr_5 [i_4] [i_4] [i_4] [i_0]) ? 61489 : var_2))));
            var_20 = (max(var_20, var_5));
            var_21 = (max(var_21, (((-23639 > ((max((arr_9 [i_0] [i_4] [i_4] [i_0] [i_0] [i_4]), 1))))))));
        }
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {

                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        var_22 = (max(var_22, ((((arr_12 [i_7] [i_8] [4]) ? ((((17592186044416 >> (var_5 - 13608316384370425601))) * (((-1 ? 0 : 12))))) : -17531)))));
                        var_23 = (~-13);
                        arr_26 [i_7] [i_7] [i_7] = ((1340316713 ? 23628 : -23639));
                    }
                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        var_24 ^= 392227569;

                        /* vectorizable */
                        for (int i_10 = 4; i_10 < 16;i_10 += 1)
                        {
                            var_25 = ((4983462522716740266 || (arr_18 [i_10 - 2] [i_6])));
                            arr_32 [i_7] [i_6] [i_7] [i_7] [i_7] [i_7] = ((-(arr_20 [i_10 - 4] [i_10 + 1] [i_10 - 3])));
                            arr_33 [i_5] [i_6] [i_7] [i_5] [i_10 - 2] = (arr_8 [6] [i_10 - 1] [i_7] [i_10 + 1]);
                        }
                        for (int i_11 = 1; i_11 < 14;i_11 += 1)
                        {
                            var_26 = (((((arr_34 [i_11] [i_11 + 2] [i_11 + 1] [i_11] [i_11 + 1]) * (((!(arr_7 [2] [i_7] [i_7] [2])))))) >= ((~(arr_28 [i_5] [i_11 + 1] [i_7] [i_9] [i_7])))));
                            var_27 = ((-(9 && var_2)));
                            var_28 *= (min((max(18314, (1 * 23638))), ((-(arr_34 [i_5] [i_5] [i_11 + 2] [i_6] [i_11])))));
                        }
                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 17;i_12 += 1) /* same iter space */
                        {
                            var_29 = 4294967293;
                            arr_39 [i_5] [i_7] [i_7] [i_5] [i_12] = ((-1073741824 ? ((((arr_23 [i_5] [i_6] [11]) && var_1))) : (arr_20 [6] [i_6] [i_6])));
                            var_30 = (max(var_30, (arr_16 [i_5])));
                        }
                        for (int i_13 = 0; i_13 < 17;i_13 += 1) /* same iter space */
                        {
                            var_31 -= ((((-(arr_36 [i_5]))) + (((arr_24 [i_13] [i_9] [i_6] [i_5]) % (arr_36 [i_13])))));
                            var_32 = (min(var_32, ((min(21374, (((!(!-23650)))))))));
                            var_33 = (max(((((arr_17 [i_5] [i_5]) != (arr_17 [i_5] [i_5])))), ((-23639 ? (arr_17 [i_5] [i_5]) : 1))));
                            var_34 ^= 145;
                        }
                    }
                    var_35 = (min(var_35, ((!((((arr_40 [i_5]) ? (arr_40 [i_5]) : (arr_40 [i_5]))))))));
                    /* LoopNest 2 */
                    for (int i_14 = 1; i_14 < 15;i_14 += 1)
                    {
                        for (int i_15 = 1; i_15 < 1;i_15 += 1)
                        {
                            {
                                var_36 *= (min((((arr_30 [i_5] [i_6] [i_7] [i_6] [i_15 - 1]) - 37)), (arr_40 [i_5])));
                                arr_49 [i_5] [i_7] = -1775;
                                var_37 = (max(var_37, -52));
                            }
                        }
                    }
                }
            }
        }
        var_38 -= (((((!(arr_6 [i_5] [i_5] [i_5] [i_5])))) != (((-2091 + 2147483647) << (((-83 + 113) - 30))))));
        arr_50 [i_5] |= (arr_40 [i_5]);
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 17;i_16 += 1) /* same iter space */
    {
        var_39 -= (((!18320) ? ((-40 ? (arr_1 [i_16]) : (arr_27 [i_16] [i_16] [i_16] [i_16]))) : 713));
        var_40 = (min(var_40, 85));
        arr_54 [i_16] = -186;
        var_41 = 1;
    }
    var_42 = -325515541;
    #pragma endscop
}
