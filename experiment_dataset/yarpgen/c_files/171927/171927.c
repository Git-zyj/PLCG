/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((~((var_12 % ((130023424 ? var_1 : var_6))))));
    var_19 = -130023402;
    var_20 = (min((-2147483647 - 1), 2426434868));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
                {
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 130023424;
                    arr_12 [i_3] [i_2] [i_0] [i_0] = (((arr_9 [i_2] [i_0]) ? 101 : (arr_9 [i_0] [i_0])));
                }
                for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
                {
                    var_21 *= (10956023324720749974 % (arr_0 [i_4] [i_0]));
                    var_22 = -342574522;
                }
                arr_16 [i_0] [i_0] [i_0] [i_0] = (~var_11);
            }
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                var_23 = (arr_18 [i_0] [i_5]);
                var_24 = (min(var_24, (((!(((-(arr_3 [i_5])))))))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        {
                            arr_25 [i_0] [i_1] [i_1] [i_5] [i_6] [i_7] = 67108863;
                            arr_26 [i_0] [i_0] [i_0] [i_0] [i_5] [i_0] [i_0] = 168;
                            arr_27 [i_7] [i_6] [i_1] [i_5] [i_1] [i_0] = -44;
                        }
                    }
                }
                var_25 = var_10;
            }
            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                var_26 = 1868532436;
                var_27 = (min(var_27, ((((arr_19 [i_8] [i_1]) | (arr_7 [i_8] [i_0]))))));
                arr_30 [i_8] [i_1] [i_1] [i_0] = ((1868532410 ? 19624 : 2266437210));
                var_28 = (max(var_28, ((((1 - 247) ? (arr_14 [i_8] [i_8] [i_1] [i_1] [i_0] [i_0]) : ((-(arr_14 [i_8] [i_8] [i_0] [i_8] [i_1] [i_0]))))))));
            }
            arr_31 [2] [0] = 8963917672395324144;
            var_29 = (19 < 1868532428);
        }
        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            var_30 = ((14 * (!11)));
            arr_36 [i_0] [i_0] [i_9] = (15 || 1868532433);
            var_31 = (5165154169023099281 % -2426434868);
        }
        arr_37 [8] = ((var_15 ? (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_13 [6] [i_0] [i_0] [i_0] [i_0] [i_0])));
    }
    for (int i_10 = 0; i_10 < 12;i_10 += 1)
    {
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 12;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 12;i_12 += 1)
            {
                {
                    arr_47 [i_10] [i_11] [i_12] = (-9223372036854775807 - 1);
                    var_32 = ((((arr_45 [i_10] [i_11] [i_12]) != (arr_42 [i_10] [i_10]))));
                    arr_48 [i_10] = (arr_44 [i_12] [i_12] [i_12] [i_12]);
                }
            }
        }
        var_33 = (max(var_33, 80));

        for (int i_13 = 0; i_13 < 12;i_13 += 1)
        {
            arr_53 [i_10] [i_10] = ((!(((8057539282439322550 ? (arr_39 [i_13]) : (min((arr_42 [i_10] [i_13]), (arr_43 [i_10] [i_10]))))))));
            var_34 -= ((var_6 ? (1 + 247) : (arr_43 [i_10] [i_10])));
        }
        for (int i_14 = 0; i_14 < 12;i_14 += 1)
        {
            var_35 *= (arr_44 [i_10] [i_10] [i_14] [i_14]);
            var_36 = (min(var_36, (((1868532405 ? ((-(!var_6))) : ((max(9, (arr_38 [i_10])))))))));
        }
        arr_56 [i_10] = (min((((arr_43 [i_10] [i_10]) | 102)), (max((arr_43 [i_10] [7]), (arr_43 [i_10] [i_10])))));
    }
    var_37 = (min(var_37, ((((min(2258828954142468318, var_10)))))));
    #pragma endscop
}
