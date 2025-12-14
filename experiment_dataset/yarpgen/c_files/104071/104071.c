/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_20 += (((((28 ? -10025 : ((-(arr_0 [i_0])))))) ? 175 : 175));
        var_21 = (arr_1 [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 9;i_3 += 1)
                {
                    {
                        var_22 = (max(-254856951, 23681));
                        var_23 = (~173);
                        var_24 = (max(var_24, -29));
                    }
                }
            }
        }
    }
    var_25 = min(219, 11);

    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        var_26 = (~-11);
        var_27 = (arr_12 [i_4]);
        var_28 = (min(var_28, (((+((((arr_11 [12]) <= (arr_11 [12])))))))));
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        var_29 = ((-(((23680 >= ((54 ? var_5 : 34)))))));
        var_30 = (((((~((max(-11, 80)))))) ? (max((((arr_14 [i_5]) * var_10)), (((243 << (29 - 12)))))) : 113));
    }
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 14;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 15;i_8 += 1)
            {
                {
                    var_31 = (arr_17 [i_8] [i_7 + 1]);
                    var_32 = (max(var_32, (((246 ? 205 : (((arr_18 [i_7 + 1] [i_7 + 1]) & (arr_17 [i_7 - 1] [i_7]))))))));
                    arr_23 [i_6] [i_7 + 1] [i_8] = 227;
                    var_33 += ((89 + ((((arr_17 [i_7 - 1] [i_7 + 1]) <= (arr_17 [i_7 - 1] [i_7 - 1]))))));
                }
            }
        }
        arr_24 [i_6] = (!81);
        arr_25 [5] [i_6] = max((arr_20 [i_6]), (9 ^ 6358904784979229259));
        arr_26 [i_6] = (min(-45944693, (arr_22 [i_6] [i_6] [i_6])));
        var_34 = (max(var_34, (arr_16 [i_6])));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 25;i_9 += 1)
    {

        for (int i_10 = 0; i_10 < 25;i_10 += 1)
        {
            var_35 = (~2147483647);

            for (int i_11 = 0; i_11 < 25;i_11 += 1) /* same iter space */
            {
                var_36 = (((arr_28 [i_11]) ? (arr_31 [i_10] [i_10]) : 246));
                var_37 = (arr_28 [i_9]);
            }
            for (int i_12 = 0; i_12 < 25;i_12 += 1) /* same iter space */
            {
                var_38 *= (((arr_28 [i_10]) ? (arr_27 [i_12] [i_9]) : (arr_35 [i_9] [i_10] [i_12])));
                var_39 = ((-(arr_31 [i_9] [i_10])));
            }
            var_40 = var_7;
        }
        for (int i_13 = 2; i_13 < 24;i_13 += 1)
        {

            for (int i_14 = 1; i_14 < 23;i_14 += 1)
            {
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 25;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 25;i_16 += 1)
                    {
                        {
                            var_41 -= ((~(arr_47 [20] [i_14 - 1] [i_14] [i_14] [13])));
                            var_42 = var_8;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_17 = 1; i_17 < 23;i_17 += 1)
                {
                    for (int i_18 = 1; i_18 < 24;i_18 += 1)
                    {
                        {
                            var_43 *= (arr_27 [i_9] [i_18 + 1]);
                            var_44 = (max(var_44, -3));
                        }
                    }
                }
                var_45 = 32767;
            }
            var_46 = (((arr_47 [i_13 + 1] [i_13 + 1] [i_13 + 1] [13] [i_13 + 1]) ? (arr_33 [i_13] [i_9] [i_13]) : (arr_33 [i_13] [i_9] [i_13])));
            arr_53 [i_13] [i_13 - 1] = 2874413971489915771;
        }
        /* LoopNest 2 */
        for (int i_19 = 1; i_19 < 23;i_19 += 1)
        {
            for (int i_20 = 2; i_20 < 23;i_20 += 1)
            {
                {
                    var_47 = ((!(arr_32 [i_9] [i_19] [i_20])));

                    for (int i_21 = 0; i_21 < 25;i_21 += 1) /* same iter space */
                    {
                        var_48 = (869278897653274939 <= 1);
                        var_49 = -797841782;
                    }
                    for (int i_22 = 0; i_22 < 25;i_22 += 1) /* same iter space */
                    {
                        var_50 = 29;
                        arr_67 [i_19] = (arr_33 [i_19] [i_20 + 2] [i_20]);
                        arr_68 [i_9] [i_9] [i_19] [i_9] = 18446744073709551610;
                    }
                }
            }
        }
        var_51 = (min(var_51, ((((~1002011698) ? 1 : (~-907748579))))));
    }
    var_52 = var_9;
    var_53 = (min(var_53, 16));
    #pragma endscop
}
