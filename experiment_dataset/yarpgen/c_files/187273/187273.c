/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= -28;
    var_18 = var_11;

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_3 [6] = (arr_2 [i_0] [i_0]);

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_19 = var_11;
            arr_7 [i_1] = var_9;
            arr_8 [i_1] = ((-(arr_0 [i_1])));
        }
        var_20 *= (arr_0 [4]);
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
    {
        arr_12 [i_2] = -7;
        var_21 = var_14;
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
    {
        var_22 = (((arr_6 [i_3] [3]) ? (((var_5 ? (((arr_11 [i_3] [i_3]) ? (arr_2 [8] [i_3]) : (arr_2 [i_3] [10]))) : (arr_2 [i_3] [i_3])))) : (min((((!(arr_2 [i_3] [i_3])))), (arr_15 [i_3] [i_3])))));
        arr_16 [i_3] [i_3] = 73;
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 18;i_4 += 1)
    {
        arr_21 [17] [17] = (((arr_19 [i_4]) ? (((arr_18 [i_4]) ? -1526006476 : (arr_19 [i_4]))) : ((var_11 ? (arr_19 [i_4 - 1]) : var_5))));

        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
        {
            arr_24 [i_4] [i_4 + 1] = ((var_9 ? 2137605746 : ((774486999 ? 3787782687 : 2137605746))));

            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                var_23 ^= (((arr_26 [17] [i_5] [8] [i_6]) ? (var_3 == var_4) : var_15));
                arr_27 [15] [15] [14] = 507184620;
                var_24 = (max(var_24, (arr_19 [i_4 - 1])));
            }
            for (int i_7 = 1; i_7 < 18;i_7 += 1)
            {

                for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
                {
                    var_25 = (arr_23 [i_7] [i_8]);
                    var_26 = (!var_11);
                }
                for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
                {
                    arr_35 [i_4] [16] [i_7] [i_9] = var_15;
                    var_27 = ((-((9223372036854775807 ? (-127 - 1) : 31))));
                }
                arr_36 [i_4] [i_7] = ((var_8 ? -9223372036854775807 : (~var_2)));
            }
            for (int i_10 = 0; i_10 < 19;i_10 += 1)
            {
                arr_39 [i_10] [i_4] [i_4] = 11;

                for (int i_11 = 1; i_11 < 18;i_11 += 1)
                {
                    var_28 += 3489436227;
                    var_29 = var_4;
                    var_30 = (arr_26 [i_4 + 1] [i_11 - 1] [15] [i_11 + 1]);
                }
                var_31 = ((var_11 && (arr_28 [i_4] [i_4 + 1] [i_4 - 1])));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 19;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 18;i_13 += 1)
                    {
                        {
                            var_32 = ((((arr_40 [i_4] [4] [i_4 - 1] [i_4 - 1] [i_4 - 1]) ? (arr_31 [i_4] [i_5] [6] [i_10] [i_12] [7]) : var_11)));
                            arr_47 [i_13] [i_5] [i_10] [i_5] [i_4] = (((((5478807127336465664 ? 31 : 4141987494))) ? ((-11 ? 0 : 3319118760)) : var_14));
                        }
                    }
                }
            }
            for (int i_14 = 4; i_14 < 18;i_14 += 1)
            {
                arr_52 [i_4] [14] [i_14 - 4] = (arr_49 [i_5] [i_5] [i_14 - 2]);
                var_33 *= ((!(arr_18 [i_4 + 1])));
            }
            arr_53 [i_4 - 1] [4] [i_5] &= 3319118760;
            var_34 = ((((((arr_50 [i_4] [i_5] [i_5] [i_5]) ? var_8 : (-32767 - 1)))) ? 34835 : var_3));
            var_35 = 170;
        }
        for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
        {
            arr_57 [i_15] = (arr_42 [i_4] [4] [1] [i_4] [i_4] [i_4 - 1]);
            var_36 = (28503 % 6026183527562593046);
            arr_58 [i_15] [i_15] = (arr_29 [i_15] [i_15] [16]);
        }
        arr_59 [i_4 - 1] [i_4] = ((var_8 / (arr_28 [i_4 - 1] [i_4 - 1] [i_4])));
        var_37 = (((arr_38 [14] [i_4 - 1] [i_4 - 1] [i_4 - 1]) ? (arr_31 [i_4 + 1] [i_4 - 1] [2] [i_4] [i_4 + 1] [i_4]) : (arr_51 [i_4 + 1])));
    }
    #pragma endscop
}
