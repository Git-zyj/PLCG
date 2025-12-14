/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142080
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -var_7;
    var_18 = ((max(32761, 32761)));
    var_19 = var_13;

    for (int i_0 = 3; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_20 = var_15;
        var_21 = (~0);
        var_22 = (max(1, -9223372036854775805));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 19;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = 4124413930183088566;
        arr_6 [i_1] = (((((arr_2 [i_1]) ? var_4 : var_0))) || (((18446744073709551611 ? 0 : 18092105574638578830))));
        var_23 = (min(var_23, ((((arr_3 [i_1 + 4]) & (arr_3 [i_1 + 4]))))));
        var_24 = (arr_4 [i_1]);
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 19;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_25 = 1;
            arr_11 [i_2] = (arr_0 [i_2 + 3] [i_2]);
            var_26 = ((var_11 || (arr_10 [i_2 - 1])));
        }
        for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
        {
            arr_14 [i_2] [i_2] [i_2] = (-(var_8 % var_4));

            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                var_27 = -1;
                arr_18 [i_2] [i_2] = (arr_9 [i_2] [i_2] [i_2 + 2]);
            }
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {

                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    arr_23 [i_2] [i_2] [i_2] = (arr_19 [i_4] [i_4] [i_6] [i_7]);
                    arr_24 [i_2] [i_4] [i_6] [i_7] = (var_5 == 0);
                    var_28 = 0;
                }
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    arr_28 [i_8] = ((666917701408381531 ? 17 : 61793));
                    var_29 = (((arr_20 [i_2] [i_2 + 1] [i_2] [i_2]) ? -109 : (arr_8 [i_6] [i_4])));
                }
                var_30 = var_2;
                arr_29 [i_2] = var_13;
            }
            arr_30 [i_2] |= (arr_3 [i_2 + 4]);
            var_31 = ((var_15 == (arr_4 [i_2])));
        }
        for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
        {
            var_32 = var_0;
            var_33 *= (arr_31 [i_2 + 3]);

            for (int i_10 = 4; i_10 < 21;i_10 += 1)
            {
                var_34 = (arr_1 [i_10]);
                arr_35 [i_2] [i_2] [i_10] = var_10;
                var_35 ^= (arr_34 [i_2 + 4] [i_10 - 2] [i_10 - 2] [i_10]);

                for (int i_11 = 0; i_11 < 23;i_11 += 1)
                {
                    arr_38 [i_2] [i_9] [i_10] [i_10] = -238;
                    var_36 = ((1 && (var_11 == var_11)));
                    var_37 = var_6;
                }
                for (int i_12 = 0; i_12 < 23;i_12 += 1) /* same iter space */
                {
                    var_38 = (((arr_37 [i_9] [i_10] [i_10] [i_10] [i_10] [i_10 - 3]) ^ (arr_39 [i_2] [i_2])));
                    var_39 ^= ((238 ? (arr_4 [i_2]) : var_0));
                    arr_41 [i_10] [i_9] [i_10] = -232;
                    arr_42 [i_2] [i_10] [i_2] [i_2] [i_2] = (((1 >> 10) ? (arr_4 [i_10 - 4]) : (!var_1)));
                }
                for (int i_13 = 0; i_13 < 23;i_13 += 1) /* same iter space */
                {
                    var_40 |= 1;

                    for (int i_14 = 1; i_14 < 21;i_14 += 1)
                    {
                        var_41 = arr_7 [i_2];
                        arr_47 [i_10] [i_10] [i_13] [i_14] = ((0 ? (arr_17 [i_13] [i_13] [i_10 - 1] [i_10]) : var_3));
                    }
                    for (int i_15 = 0; i_15 < 23;i_15 += 1)
                    {
                        arr_51 [i_10] [i_15] [i_15] [i_15] = ((var_13 - (((arr_1 [i_2]) ? var_14 : (arr_27 [i_15] [i_13] [i_10] [i_2])))));
                        arr_52 [i_2] [i_9] [i_10] [i_13] [i_15] [i_9] |= 3743;
                    }
                    var_42 = ((var_11 & (arr_33 [i_10] [i_10] [i_10] [i_10 - 2])));
                    arr_53 [i_13] [i_10] [i_10] [i_2] = (((arr_45 [i_10]) ? 0 : var_3));
                }
            }
            for (int i_16 = 4; i_16 < 22;i_16 += 1)
            {
                var_43 = var_7;
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 23;i_17 += 1)
                {
                    for (int i_18 = 1; i_18 < 22;i_18 += 1)
                    {
                        {
                            var_44 = (arr_13 [i_2] [i_16 - 1]);
                            var_45 += ((18092105574638578830 ? 0 : 1));
                        }
                    }
                }
                arr_63 [i_2] [i_2] [i_16] [i_16] = ((arr_0 [i_2] [i_9]) ? (arr_61 [i_2] [i_2] [i_2] [i_9] [i_16] [i_16]) : (((-9223372036854775807 - 1) + (arr_8 [i_9] [i_16]))));
            }
        }
        arr_64 [i_2] = -32;
        var_46 &= (arr_8 [i_2 - 1] [i_2 - 1]);
        var_47 = ((0 != ((((arr_8 [i_2] [i_2]) ? (-32767 - 1) : var_8)))));
        var_48 = (max(var_48, (-32767 - 1)));
    }
    #pragma endscop
}
