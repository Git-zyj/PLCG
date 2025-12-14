/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((!6875835561284467277) ? (min(var_16, 11570908512425084338)) : (((var_17 - ((min(var_13, var_10))))))));
    var_19 = (min(-113, -var_17));
    var_20 = (max(var_20, var_5));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            var_21 -= (!var_5);
            var_22 *= (((arr_4 [i_1 - 1]) + (arr_6 [i_1] [i_1 - 1] [i_0])));
        }
        var_23 = ((4294967295 ? ((-(max(var_12, -1)))) : var_2));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {

        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {

            for (int i_4 = 1; i_4 < 19;i_4 += 1)
            {
                var_24 = var_7;
                arr_17 [i_3] [i_3] [i_3] [i_2] = ((4294967286 ? 3780129698833443636 : ((((arr_8 [i_3] [i_4]) ? var_9 : (arr_15 [i_3] [i_3] [i_3] [i_3]))))));
                var_25 = (arr_8 [i_2] [i_2]);
                var_26 = ((var_1 && (arr_15 [i_3] [i_3] [i_3 + 3] [i_3])));
                var_27 = (max(var_27, 16212249959463149221));
            }
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                arr_22 [i_2] [i_2] [i_2] |= var_11;
                arr_23 [i_3] [i_5] = (arr_11 [i_2]);
            }
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                var_28 -= (255 ? (arr_15 [i_2] [i_3] [i_2] [i_2]) : var_6);
                var_29 = (max(var_29, (((1 & (~-56))))));
            }
            var_30 = (min(var_30, (!18446744073709551615)));

            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                var_31 = var_3;
                var_32 = ((2102784866 ? 0 : 2458507588546118267));
                var_33 += (arr_24 [i_2] [i_2]);
            }
            for (int i_8 = 1; i_8 < 16;i_8 += 1)
            {
                arr_31 [i_2] [i_8] = (var_10 - var_14);
                var_34 = (arr_18 [i_2] [i_2] [i_2] [16]);
                arr_32 [i_3] [i_2] [i_8] [i_2] = (arr_29 [i_2] [i_8] [i_8]);
                arr_33 [i_8] [i_3] [i_3] [i_8] = ((0 ? 55 : var_13));
            }
        }
        for (int i_9 = 2; i_9 < 18;i_9 += 1) /* same iter space */
        {
            var_35 = (~4635041401838885105);
            var_36 = ((0 ? 82 : 55));
        }
        for (int i_10 = 2; i_10 < 18;i_10 += 1) /* same iter space */
        {
            var_37 *= ((arr_21 [i_10 - 1] [i_10 + 2] [i_10 + 1] [i_10 - 2]) == (arr_19 [i_10 + 1] [i_10] [i_10 - 1] [i_10 + 2]));
            arr_39 [i_2] [i_10] = 4294967295;
        }
        for (int i_11 = 2; i_11 < 18;i_11 += 1) /* same iter space */
        {
            var_38 = var_7;
            var_39 = var_5;
        }
        arr_42 [i_2] = (((var_9 ? (arr_24 [i_2] [i_2]) : -8413039561347676346)));
    }
    #pragma endscop
}
