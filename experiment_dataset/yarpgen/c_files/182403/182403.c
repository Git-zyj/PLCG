/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= var_0;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            var_20 = ((((arr_1 [i_1 + 3]) ? (arr_1 [i_1 - 3]) : (arr_1 [i_1 + 3]))));
            var_21 = (max(102, var_4));
            var_22 = (arr_4 [i_1] [i_1] [i_1]);
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_23 = (((-30435 & (11599687731804890582 ^ 1))));

            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                arr_10 [1] [i_2] [i_0] = ((((((((arr_8 [i_0] [i_0] [i_0] [i_0]) | -26558))) ? 1 : (arr_5 [13]))) | ((max(((var_18 ? (arr_3 [13] [i_2] [0]) : (arr_6 [0] [4] [4]))), ((((arr_9 [i_3] [i_0]) + var_5))))))));
                arr_11 [i_2] = (max((min((arr_1 [i_0]), (arr_5 [i_0]))), (arr_5 [i_0])));
                arr_12 [i_0] [6] [9] = (102 + -3959);
                var_24 = (min(var_24, (((27620 ? (arr_5 [i_3]) : (((((3564594093 ? var_16 : 3077341663801159105))) ? (min((arr_4 [i_3] [i_3] [i_3]), var_14)) : (arr_5 [i_0]))))))));
            }
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                arr_15 [i_4] [i_2] [i_4] = 18124385333896498934;
                arr_16 [i_4] [0] [i_4] = ((((max(var_17, ((((arr_2 [i_2] [1]) || var_18)))))) & (((arr_0 [5]) ? ((max(123, -27315))) : 65535))));
            }

            for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
            {
                var_25 -= ((-((-(arr_17 [4])))));
                arr_21 [i_0] [i_5] [4] [7] = -730373213;
            }
            /* vectorizable */
            for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
            {
                arr_25 [i_2] [2] &= (arr_1 [i_2]);
                var_26 = 0;
            }
            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {
                arr_28 [i_0] [i_2] [i_7] [1] = (((7181 || var_12) ? var_7 : (arr_19 [i_0] [i_0] [0] [i_7])));
                var_27 -= (max(((1 ? (arr_26 [12] [14] [i_7 - 1]) : ((var_2 ? var_2 : (arr_13 [i_7] [4] [4]))))), 322358739813052710));
                var_28 = ((~(((arr_9 [6] [i_7 - 1]) ? -var_16 : (arr_26 [1] [i_7] [i_7])))));
            }
            for (int i_8 = 3; i_8 < 12;i_8 += 1)
            {
                var_29 = (((((arr_13 [i_8 - 1] [i_8 + 2] [i_8 - 2]) ? (arr_13 [i_8 - 1] [i_8 + 2] [i_8 - 2]) : (arr_13 [i_8 - 1] [i_8 + 2] [i_8 - 2])))) ? (arr_2 [i_8] [i_2]) : ((max((arr_7 [i_0] [i_2] [i_8 - 2]), (arr_7 [i_0] [i_2] [i_8])))));
                var_30 = (max(var_30, ((((~var_6) / ((max(-5, 0))))))));
                arr_32 [i_0] [i_0] [i_0] [i_8 + 3] = (max(((((max((arr_18 [4]), (arr_23 [i_0])))) ? (((var_12 > (arr_0 [i_0])))) : 18446744073709551609)), 150));
            }
            var_31 = ((((((arr_24 [i_0] [0] [0] [i_0]) ? (arr_18 [0]) : var_12)) >= 63)));
        }
        var_32 = (min(var_32, (arr_1 [i_0])));
    }
    var_33 = var_0;
    var_34 = var_9;
    #pragma endscop
}
