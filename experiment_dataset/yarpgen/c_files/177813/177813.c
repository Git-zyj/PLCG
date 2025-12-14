/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            arr_10 [i_2] [i_2] [i_2] [i_2] [i_2] = var_6;
                            var_13 = -23;
                            var_14 = -1;
                        }
                    }
                }
                var_15 = -11524728719332964746;
            }
        }
    }

    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
        {
            arr_16 [i_5] = ((((((min((arr_9 [i_4] [i_4] [1] [i_4] [i_5] [i_5]), 1)) > var_7)))) <= 1);
            var_16 = (max(var_16, ((max((((arr_11 [i_4] [i_5]) ? var_11 : (arr_11 [i_4] [i_5]))), (((-1075357470 ? 1 : 92))))))));
            arr_17 [i_4] [i_4] [i_4] = (1 > 237);
        }
        for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
        {
            var_17 *= (arr_3 [i_4] [i_4]);
            arr_22 [i_4] = (((((arr_7 [i_4] [i_4] [i_4] [i_6]) ? var_11 : var_9))) ? ((18 * (arr_7 [i_6] [i_6] [i_4] [i_4]))) : (arr_19 [i_6]));
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
        {
            var_18 = (+(((arr_15 [i_7] [i_7] [i_4]) ? 378464823 : var_0)));
            var_19 = (((((var_7 ? var_10 : 5567946689424543352))) ? ((-(arr_18 [i_4] [i_4]))) : var_5));
            var_20 -= ((((((var_6 + 2147483647) >> (32658 - 32652)))) > ((var_0 ? 67108856 : (arr_18 [i_4] [i_4])))));
            var_21 *= ((((var_9 ? (arr_2 [i_7] [i_4]) : var_8)) > var_9));
            var_22 = ((1 ? 288230376151711744 : 18));
        }
        arr_25 [i_4] = ((((max(var_5, var_4))) ? ((~((33625 ? var_2 : 4189021127)))) : var_0));
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 24;i_8 += 1) /* same iter space */
    {
        arr_28 [i_8] = ((-(arr_2 [i_8 - 1] [i_8 - 1])));
        var_23 = -var_11;
    }
    for (int i_9 = 1; i_9 < 24;i_9 += 1) /* same iter space */
    {
        var_24 = 117;
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 25;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                {
                    arr_36 [i_9] = ((-0 - (-9223372036854775807 - 1)));

                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {
                        arr_40 [i_9] = (i_9 % 2 == zero) ? ((min((((-(var_10 - 32767)))), (max((((1 >> (((arr_32 [i_9] [i_11] [i_12]) + 328225746408215128))))), (arr_31 [i_9])))))) : ((min((((-(var_10 - 32767)))), (max((((1 >> (((((arr_32 [i_9] [i_11] [i_12]) + 328225746408215128)) + 3014955601463060376))))), (arr_31 [i_9]))))));
                        var_25 = (max(var_25, ((((((13 ? -1 : 95))) ? ((-(arr_33 [i_9 + 1] [14] [i_9] [i_9]))) : (((arr_38 [i_9] [i_9] [i_9] [i_10]) ? var_4 : 75)))))));
                    }
                    for (int i_13 = 0; i_13 < 25;i_13 += 1)
                    {
                        var_26 = (max((~67108840), (((arr_7 [i_9 + 1] [i_9 - 1] [i_9 - 1] [i_9 + 1]) ? (arr_32 [i_9] [i_9 + 1] [i_9]) : 1))));

                        for (int i_14 = 2; i_14 < 24;i_14 += 1)
                        {
                            var_27 += var_12;
                            var_28 = (min(var_28, (((+(((arr_27 [i_14]) % (arr_7 [i_9 + 1] [i_9 - 1] [i_9] [i_9]))))))));
                            arr_45 [i_9] [i_13] [i_11] [i_11] [i_13] [2] &= var_6;
                            var_29 = (!var_6);
                            var_30 = ((!((((arr_44 [i_13] [i_11] [i_9]) ? -46 : var_4)))));
                        }
                        var_31 = ((-13835058055282163712 ? ((((arr_27 [i_9]) * (arr_6 [i_9 - 1] [i_9 - 1] [i_9 - 1])))) : (arr_7 [i_9 + 1] [i_9 - 1] [i_9] [i_9 + 1])));
                    }
                    for (int i_15 = 2; i_15 < 24;i_15 += 1)
                    {
                        var_32 = (max(4611686018427387904, ((max(1, (max(var_0, var_1)))))));
                        var_33 = -18446744073709551615;
                    }
                }
            }
        }
    }
    for (int i_16 = 1; i_16 < 24;i_16 += 1) /* same iter space */
    {
        arr_51 [i_16] |= -2700761316439327814;
        var_34 = arr_39 [i_16] [6] [16] [16] [i_16] [i_16];
        arr_52 [i_16] = ((-((max((arr_35 [i_16 + 1] [7] [7]), (arr_35 [i_16 - 1] [i_16] [i_16]))))));
    }
    #pragma endscop
}
