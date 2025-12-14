/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_14;
    var_19 = ((((172 ? var_4 : var_9))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
        {
            var_20 = (min(var_20, (arr_5 [20])));
            var_21 = var_15;

            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                var_22 = -var_1;
                var_23 = (min(var_23, ((((((59175 ? -1 : 16769024))) ? (arr_2 [i_2 + 1]) : ((~(arr_5 [i_0]))))))));

                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    var_24 = var_14;

                    for (int i_4 = 4; i_4 < 20;i_4 += 1)
                    {
                        var_25 -= (((!3854856145) ? var_10 : (arr_2 [i_4 + 2])));
                        var_26 = var_13;
                        var_27 *= var_1;
                        var_28 = ((-(arr_14 [i_0] [i_0] [i_0] [i_0] [i_0])));
                    }
                    for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                    {
                        var_29 = 65515;
                        var_30 = ((6611 ? (arr_14 [i_0] [i_1] [i_2] [i_2 - 1] [i_1]) : var_2));
                        var_31 = ((252 ? (var_0 + var_4) : var_16));
                    }
                    for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
                    {
                        var_32 = (((arr_11 [13]) ? ((14971972075005923707 ? var_1 : 6611)) : ((((arr_14 [19] [i_1] [i_2 + 1] [i_3] [i_6]) ^ (arr_6 [i_3]))))));
                        arr_20 [i_6] [i_1] [i_2 - 1] [i_6] [i_6] [i_3] &= var_11;
                        var_33 = ((-(arr_15 [i_2 + 1] [i_6] [i_6] [i_6] [i_6] [i_6])));
                        var_34 = (arr_7 [i_6]);
                        arr_21 [i_6] [i_2] [i_3] [i_3] [i_3] = (((((var_13 ? var_9 : 6626))) ? 6625 : (arr_12 [i_2 - 1] [i_2] [i_2 - 1] [i_2] [i_2 + 1] [i_6])));
                    }
                    var_35 = (((((arr_5 [16]) ? var_4 : (arr_1 [i_1]))) & (!var_11)));
                    var_36 = (((((0 ? 1 : 9223372036854775807))) && 27));
                }
            }
        }
        for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
        {
            arr_25 [i_0] [9] = (arr_22 [i_0]);
            var_37 = ((arr_5 [i_0]) != 1680231448);
            var_38 = (arr_9 [i_7]);
            arr_26 [i_7] [i_7] [i_0] = (arr_2 [i_0]);
        }
        for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
        {
            var_39 = ((var_14 != (((((arr_14 [i_0] [7] [i_0] [7] [6]) || 91))))));

            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                arr_32 [i_0] = ((((var_1 ? var_4 : (arr_14 [i_0] [i_8] [i_8] [i_9] [i_9]))) << (115 - 85)));
                var_40 = (max(var_40, ((((arr_8 [i_0] [i_8] [i_0] [i_0]) / (arr_8 [i_0] [7] [10] [i_9]))))));
            }
            var_41 = (arr_18 [i_0] [i_0] [12]);
            var_42 = (((((arr_7 [i_0]) ? var_4 : -865977380124011192)) >= (arr_8 [i_0] [i_0] [15] [i_8])));
        }
        var_43 -= var_15;
    }
    var_44 = var_15;
    #pragma endscop
}
