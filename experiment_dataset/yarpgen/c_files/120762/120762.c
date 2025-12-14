/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, var_18));

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_20 = (max(var_20, (-18446744073709551615 * var_4)));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_7 [i_1] [i_1] = ((((min(((((arr_4 [i_0] [i_0] [i_0]) % (arr_4 [i_0] [i_0] [i_1])))), (min((arr_6 [i_0]), 1))))) ? (-81582720 / -1995848641) : ((((1 ? (arr_0 [i_1]) : 81582704)) << (((var_2 ^ var_11) + 1236816416482455254))))));
            var_21 -= 1;
        }
        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            arr_11 [i_2] [i_2] = ((-((min((var_10 >= -20), (arr_0 [i_0]))))));
            var_22 = (max(var_22, ((((((!48526) >> (-84 + 102))) - ((~((min(var_6, 0))))))))));
            arr_12 [i_2] [i_2] [i_2] = ((((((min((arr_10 [i_0] [i_2]), 48526))) || var_16))) == ((((var_1 << var_12) >= 63))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
            {
                var_23 = (max(var_23, var_7));
                var_24 += ((((var_13 ? var_1 : var_12))) && (((~(arr_3 [i_4])))));
            }
            for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
            {
                var_25 = (max(var_25, (((-((5090 ? 1 : var_16)))))));
                var_26 -= 2147483647;
            }
            for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
            {
                var_27 -= ((18446744073709551615 ? (arr_17 [i_0 - 2]) : 18446744073709551615));
                var_28 = (max(var_28, 1));
                var_29 = (((((arr_9 [i_0] [i_0 - 3] [i_6]) + 9223372036854775807)) << (((((arr_9 [1] [i_0 - 3] [i_0 - 3]) + 895791233649336453)) - 17))));
            }
            for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
            {
                arr_27 [1] [i_7] [i_7] [i_0] = ((arr_26 [i_0] [i_0 - 2] [i_0 - 1]) || var_7);
                var_30 = (max(var_30, 1));
                arr_28 [i_7] [i_3] [i_7] [i_0] = ((18446744073709551615 * (arr_16 [10] [i_0 + 3] [i_0 + 3])));
            }
            var_31 -= ((~(-9223372036854775807 - 1)));
        }
        for (int i_8 = 1; i_8 < 14;i_8 += 1)
        {
            arr_31 [i_0] [i_8] = (-1342309379556264707 + var_4);
            var_32 = (((arr_15 [i_0 - 1]) ? var_5 : (((arr_24 [4] [4]) ? 18446744073709551604 : var_10))));
        }
        var_33 = (max(var_33, 1));
        arr_32 [i_0] = var_18;
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        var_34 = (max(var_34, (arr_33 [i_9])));
        var_35 = ((~(var_2 >> 1)));
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            for (int i_11 = 3; i_11 < 22;i_11 += 1)
            {
                for (int i_12 = 3; i_12 < 22;i_12 += 1)
                {
                    {
                        arr_43 [20] [i_10] [i_11] [i_12] = (((arr_39 [i_11 - 2] [i_11 - 2] [i_10] [1] [i_10] [i_10]) * -109));
                        var_36 = 1;
                    }
                }
            }
        }
        var_37 = ((1 ? ((1 | (arr_39 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]))) : var_12));
    }
    var_38 = 529437674604689107;
    #pragma endscop
}
