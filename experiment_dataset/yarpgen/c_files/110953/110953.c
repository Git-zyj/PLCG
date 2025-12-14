/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        var_15 = 0;
        var_16 = 16128;
        var_17 = var_10;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        arr_6 [i_1] &= 255;
        arr_7 [i_1] [i_1] = (arr_2 [i_1 + 1]);
        var_18 = (min(var_18, var_5));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        arr_11 [i_2] [i_2] = arr_0 [i_2];
        var_19 = (max(var_19, (!var_12)));

        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            var_20 = var_3;
            var_21 = (max(var_21, ((max((arr_8 [i_2]), (arr_13 [i_3] [i_2]))))));
            var_22 = var_0;
            var_23 += (max((arr_9 [i_3]), -127));
        }
        for (int i_4 = 2; i_4 < 15;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
            {
                var_24 = 0;
                arr_18 [i_2] [i_5] [i_5] = var_13;
            }
            for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
            {

                for (int i_7 = 4; i_7 < 16;i_7 += 1)
                {
                    arr_25 [i_7] [i_6] [i_4] [i_2] = var_1;
                    var_25 = (min(var_25, (((((((var_1 > var_6) ? var_8 : (arr_14 [i_7] [i_7] [i_7])))) ? 9223372036854775781 : ((max(-16130, 8257536))))))));
                    var_26 = (max(var_26, -var_12));
                }
                /* vectorizable */
                for (int i_8 = 2; i_8 < 16;i_8 += 1)
                {
                    var_27 = (max(var_27, (arr_13 [i_4] [i_4])));
                    var_28 = (min(var_28, (~-var_5)));
                }
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    var_29 = (arr_9 [i_2]);
                    arr_31 [i_9] = -19;
                }
                var_30 = 25165824;
            }
            for (int i_10 = 0; i_10 < 19;i_10 += 1)
            {
                var_31 = (min(var_31, var_2));
                arr_34 [i_2] [i_4 + 1] [i_10] [i_10] = (((~((max(var_0, -16129))))));

                for (int i_11 = 2; i_11 < 17;i_11 += 1)
                {
                    arr_39 [i_10] [i_4 - 2] [i_10] [i_11] [i_4] = var_13;
                    var_32 = ((!((min(8257536, (arr_20 [0] [i_4 - 1] [i_4 - 1] [i_11 - 1]))))));
                }
            }
            var_33 = var_12;
            var_34 &= 1;
            var_35 = ((((max((((arr_38 [i_4] [4] [4] [i_2] [i_4]) & var_3)), (var_8 ^ var_3)))) ? ((~((~(arr_8 [i_2]))))) : ((((1152921504606844928 ? var_10 : 0))))));
        }
        /* vectorizable */
        for (int i_12 = 2; i_12 < 18;i_12 += 1)
        {
            var_36 = (min(var_36, var_0));
            arr_43 [i_12] [i_2] [i_2] = 32762;
            var_37 -= ((18446744073709551615 ? (arr_9 [i_12]) : var_2));
        }
        for (int i_13 = 0; i_13 < 19;i_13 += 1)
        {
            arr_46 [i_13] [i_13] = ((-((1073741824 ? 0 : 15))));
            var_38 = ((-(min(var_13, (((arr_24 [i_2] [i_2]) ? 255 : -25165824))))));
        }
        var_39 = 25165811;
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 23;i_14 += 1)
    {
        var_40 = var_8;
        var_41 = (~(arr_48 [i_14] [i_14]));
    }
    var_42 = (((max(19, var_13))));
    var_43 = var_3;
    var_44 = 255;
    #pragma endscop
}
