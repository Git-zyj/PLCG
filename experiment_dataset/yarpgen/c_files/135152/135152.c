/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = ((arr_0 [i_0]) ? ((var_7 ? 18446744073709551615 : (arr_0 [i_0]))) : ((((arr_0 [i_0]) >> var_5))));
        arr_3 [i_0] = ((((var_11 ? (arr_0 [i_0]) : 1))) ^ (arr_1 [i_0] [i_0]));
        var_12 -= -var_10;

        for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
        {
            var_13 -= ((1 | (arr_0 [i_0])));
            var_14 *= (((arr_7 [i_0] [1] [6]) ? 32 : (arr_0 [i_0])));
            arr_8 [i_0] [i_0] [i_0] = (!var_6);
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
        {
            arr_12 [i_2] [i_0] = (((~(arr_1 [16] [i_2]))) | (arr_5 [i_0]));
            arr_13 [i_0] &= (arr_1 [i_0] [i_2]);
        }
        var_15 += (((arr_11 [i_0] [i_0] [i_0]) ? 223 : (arr_10 [i_0] [i_0])));
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        var_16 = (min(var_16, (!var_8)));
        var_17 = (arr_15 [i_3]);
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
        {
            arr_22 [i_5] [i_4] [i_4] &= (((((223 != (arr_21 [i_4]))) ? (((arr_18 [i_4] [i_5]) + 1)) : -25509)));
            var_18 = (min(var_18, ((max(((var_8 & (arr_18 [1] [i_5]))), ((-(arr_18 [i_4] [i_5]))))))));

            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                var_19 += ((((-3586 ? (arr_26 [i_4] [i_5] [i_4] [i_4]) : var_8)) <= ((28167 >> (-6497857936612018053 + 6497857936612018070)))));
                var_20 = -3600;
                arr_27 [i_5] [17] [i_6] [4] = (min((((var_11 ^ 6497857936612018054) >> ((((arr_11 [i_4] [i_5] [0]) || (arr_19 [i_5] [i_6])))))), ((((((arr_21 [i_4]) || 1)) || ((min((arr_18 [0] [i_5]), var_8))))))));
                var_21 &= 1;
            }
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                var_22 = (min(var_22, ((((18349 ? ((max(var_9, var_6))) : ((4294967276 ? 15707808579993765475 : (arr_7 [i_4] [i_5] [i_7])))))))));
                var_23 |= (arr_28 [1] [i_5] [i_5]);
            }
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
        {
            var_24 = (arr_14 [i_4] [i_8]);
            arr_34 [i_4] [i_8] [i_8] = ((1 ? 1 : ((0 >> (((arr_26 [i_4] [i_4] [i_4] [i_4]) - 7360))))));
        }
        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            arr_37 [i_9] [i_4] [i_9] = 0;
            var_25 = (304269393 >= var_7);
            arr_38 [i_9] [i_9] = (arr_19 [i_9] [i_9]);
            var_26 |= 1817;
        }
        arr_39 [i_4] |= ((((arr_15 [i_4]) << (((arr_15 [i_4]) - 15055)))));
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 20;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 20;i_12 += 1)
                {
                    {
                        var_27 = (min(var_27, var_10));
                        var_28 |= ((!(arr_30 [i_4] [i_12])));
                    }
                }
            }
        }
        var_29 *= ((~(4294967295 | 138)));
    }
    for (int i_13 = 0; i_13 < 17;i_13 += 1)
    {
        var_30 += (((min((arr_4 [i_13]), (arr_24 [i_13] [i_13] [i_13] [i_13])))));
        arr_51 [i_13] = (arr_26 [15] [i_13] [i_13] [i_13]);
        var_31 = (((arr_29 [i_13] [i_13] [i_13] [i_13]) || (arr_29 [i_13] [i_13] [i_13] [i_13])));
        arr_52 [i_13] [i_13] = var_4;
        var_32 = (max(var_32, ((((arr_7 [i_13] [i_13] [i_13]) && (((0 - (arr_16 [i_13] [i_13])))))))));
    }
    var_33 = (min(var_33, var_11));
    var_34 = (0 ? (((var_1 ? var_5 : -9223372036854775786))) : (((var_4 ? 0 : 88))));
    #pragma endscop
}
