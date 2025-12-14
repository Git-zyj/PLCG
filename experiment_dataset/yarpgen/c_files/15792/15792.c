/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((arr_0 [i_0]) != 3108117791));
        var_10 |= (((((((max(var_6, var_0))) ? var_3 : var_3))) ? (!539735953) : var_3));
        arr_3 [i_0] = ((168 % (((arr_0 [i_0]) ? (arr_0 [i_0]) : var_9))));

        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            arr_6 [i_1] [i_0] = 57;
            var_11 = (min(var_11, ((((((~((max(0, 127)))))) ? (((~1272968305) ? (min((arr_1 [6]), var_9)) : (!1272968291))) : (min(11090194918210288375, -539735971)))))));
        }
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_12 -= (min(var_3, (((~7) - (194 && var_7)))));
        arr_9 [i_2] = (max(((var_5 ? ((0 ? var_5 : -115)) : (((-(arr_0 [i_2])))))), var_4));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            arr_14 [i_3] [i_3] = 0;

            for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
            {
                var_13 |= var_2;
                var_14 = (min(var_14, ((((arr_1 [i_4]) ? var_3 : (arr_1 [i_5]))))));
            }
            for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
            {
                var_15 = var_2;
                arr_20 [i_6] [i_3] [i_6] = var_3;
                arr_21 [i_3] [i_3] = -0;
                var_16 = -176;
            }
            for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
            {
                arr_25 [i_3] [i_4] = ((var_1 <= (var_1 - 0)));
                arr_26 [i_7] [i_3] [10] = -var_6;
                var_17 = (min(var_17, (((var_5 ? 539735954 : var_6)))));
                var_18 = (min(var_18, (((arr_11 [i_7]) ? (arr_22 [i_7] [i_4] [i_7] [i_7]) : (arr_5 [i_3] [i_4])))));
                arr_27 [i_3] [i_3] [i_7] = -var_7;
            }
        }

        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            var_19 = (min(var_19, var_8));
            var_20 = ((-(!255)));
        }
        for (int i_9 = 4; i_9 < 10;i_9 += 1)
        {
            var_21 = ((539735964 ? (arr_29 [i_9 - 4] [i_9 - 4]) : 7356549155499263259));
            var_22 = ((~(arr_13 [i_9 - 2])));
        }
        for (int i_10 = 0; i_10 < 11;i_10 += 1)
        {
            arr_34 [i_3] [i_3] = (var_1 ^ var_6);
            var_23 *= -var_1;
            var_24 -= ((~(arr_23 [i_3] [i_3])));
        }

        for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
        {
            var_25 += (((((-2147483647 - 1) % var_7))) ? var_9 : 255);
            var_26 = (min(var_26, 11090194918210288375));
            var_27 = ((-(~var_8)));
            arr_37 [i_3] [i_3] = (176 ? -12 : var_2);
            arr_38 [i_3] [i_11] [i_3] = ((var_7 ? var_7 : (~var_9)));
        }
        for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
        {
            var_28 = (max(var_28, var_4));
            var_29 = -124;
        }
        for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
        {
            arr_45 [i_3] = ((120 ? (arr_8 [i_3]) : 119));
            var_30 = ((-(arr_12 [i_3] [i_13] [i_3])));
            arr_46 [i_3] = (1 == var_7);
        }
        arr_47 [i_3] = var_3;
        arr_48 [i_3] = (~2570950063);
    }
    var_31 = (max(var_31, var_9));

    /* vectorizable */
    for (int i_14 = 1; i_14 < 15;i_14 += 1) /* same iter space */
    {
        var_32 = var_4;
        arr_52 [i_14] = (7356549155499263242 % var_2);
        var_33 = (max(var_33, (~var_7)));
    }
    for (int i_15 = 1; i_15 < 15;i_15 += 1) /* same iter space */
    {
        var_34 = (max(var_34, ((((176 >= var_4) ? (((((arr_51 [i_15] [i_15 - 1]) >= var_6)))) : (max((~var_2), (min((arr_54 [i_15]), -33)))))))));
        var_35 = 116;
    }
    for (int i_16 = 1; i_16 < 15;i_16 += 1) /* same iter space */
    {
        arr_57 [12] = ((var_8 ? 7356549155499263252 : (((min(var_1, var_9))))));
        var_36 = (max(((32 ? 2 : var_6)), ((0 ^ (arr_53 [i_16 + 1] [i_16 - 1])))));
        arr_58 [i_16 + 1] = (((~3021998967) ? (arr_55 [i_16 + 1]) : (min(119, -7))));
    }

    for (int i_17 = 0; i_17 < 22;i_17 += 1)
    {
        var_37 += ((~((-7356549155499263249 ? var_9 : (max(3021998973, -25))))));
        var_38 |= (max(((-((3021998990 ? -8913 : 48)))), (arr_60 [i_17])));
    }
    for (int i_18 = 4; i_18 < 21;i_18 += 1)
    {
        arr_64 [i_18] = (min((((127 && (arr_63 [i_18 - 1])))), var_6));
        arr_65 [i_18 + 1] = ((!(((1 ? var_0 : 48)))));
        arr_66 [i_18 + 1] = ((-(~24)));
    }
    for (int i_19 = 0; i_19 < 11;i_19 += 1)
    {
        arr_69 [i_19] = (max((((var_8 % (arr_49 [i_19])))), (max(18446744073709551607, var_5))));

        /* vectorizable */
        for (int i_20 = 0; i_20 < 11;i_20 += 1)
        {
            arr_72 [i_19] [i_19] [i_19] = (((!60) ? (arr_28 [i_19] [i_20] [i_20]) : var_1));
            var_39 = (((255 + 31) ? ((var_0 ? (arr_43 [i_19] [i_20]) : 126)) : ((var_5 ? -32747 : var_4))));
            var_40 = -1;
            arr_73 [i_19] = ((~(arr_33 [i_19] [i_19] [i_19])));
            arr_74 [i_20] [i_19] = var_8;
        }
        for (int i_21 = 0; i_21 < 11;i_21 += 1)
        {
            var_41 = (max(var_41, ((max(2113457290, 48)))));
            var_42 = ((-(max(var_2, 6))));
            arr_79 [i_19] [i_21] = ((((~(arr_12 [i_21] [i_21] [i_21]))) & ((max(var_9, (min((arr_29 [1] [i_19]), var_4)))))));
            var_43 &= 4294967283;
        }
        arr_80 [i_19] [i_19] = ((max(var_0, 127)));
    }
    var_44 = (min(var_44, -28));
    #pragma endscop
}
