/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_4 [i_0] = (+(((arr_3 [i_0]) ? var_4 : 1)));
        arr_5 [i_0] [i_0] = ((var_2 >= ((var_18 ? (arr_2 [i_0] [i_0]) : var_9))));
        arr_6 [i_0] [i_0] = var_13;
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_20 = (max(var_20, ((((((var_8 ? ((var_4 ? 111 : (arr_0 [i_1]))) : ((var_12 ? (arr_8 [i_1]) : var_19))))) ? (~var_9) : ((((var_2 || var_15) ? (1 || var_6) : (arr_1 [i_1])))))))));
        arr_9 [i_1] = ((var_5 == (arr_2 [i_1] [i_1])));
        var_21 = (min(var_21, (arr_2 [i_1] [i_1])));

        for (int i_2 = 2; i_2 < 19;i_2 += 1)
        {
            var_22 -= (((((arr_12 [i_2 - 1] [i_2]) ? (arr_12 [i_2 - 2] [i_2]) : (arr_12 [i_2 - 2] [i_2]))) != ((297946171 << (var_17 - 52458079)))));
            var_23 += (((~(arr_8 [i_2 - 1]))));
            var_24 = (min(((-((-(arr_10 [i_1]))))), var_11));
            arr_14 [i_1] [i_2] = (((((-(((arr_0 [i_1]) ? var_9 : (arr_10 [i_2])))))) ? (arr_10 [i_1]) : ((+(((arr_11 [13]) / 1606958587))))));
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                arr_21 [i_1] [i_3] [i_4] |= (min((arr_15 [i_4] [i_1]), var_11));

                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_25 = (min(var_25, ((((144 & 120) ? (((((arr_13 [i_1]) && 0)))) : (min(1, (arr_22 [i_1] [2] [i_4]))))))));
                    var_26 = var_8;
                    var_27 = (min(var_27, 0));
                    var_28 ^= ((-((~(arr_7 [i_3] [i_1])))));
                }
                arr_25 [i_1] [i_3] [8] [i_4] |= (((((((var_3 ? var_4 : (arr_22 [i_4] [i_3] [i_1])))) ? (102 ^ var_16) : -var_13)) ^ 144));
            }
            for (int i_6 = 2; i_6 < 19;i_6 += 1)
            {
                var_29 *= (arr_27 [10] [i_3]);
                var_30 ^= (arr_13 [i_6]);
            }
            arr_28 [i_1] [i_3] = (arr_16 [i_1]);
        }
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                var_31 = (~var_0);
                var_32 = (((arr_31 [i_7] [i_1]) || (var_16 && 2147483647)));
                var_33 -= ((((((var_18 || 1606958577) ? ((-(arr_7 [i_1] [i_8]))) : var_18))) ? 116 : (((4294967285 ? 65535 : 1)))));
                arr_33 [i_1] [i_7] [i_8] [i_8] = (((((var_14 ? var_10 : 17870283321406128128)) != var_6)));
            }
            for (int i_9 = 0; i_9 < 20;i_9 += 1)
            {
                var_34 = (min(var_34, ((min(27000, (arr_26 [i_1] [8] [i_9] [i_9]))))));
                arr_36 [i_1] &= (1 >= 4036);
                arr_37 [i_1] [i_7] = (max(var_11, (((var_15 && (((var_18 ? var_5 : var_9))))))));

                for (int i_10 = 3; i_10 < 17;i_10 += 1) /* same iter space */
                {
                    var_35 *= -1;
                    var_36 ^= var_6;
                }
                for (int i_11 = 3; i_11 < 17;i_11 += 1) /* same iter space */
                {
                    arr_42 [i_1] [i_7] [i_9] [i_11] = 1848459099;
                    arr_43 [i_1] [i_7] [i_9] [i_11] = (((((((((arr_38 [i_11] [i_1] [i_9] [i_9] [i_1] [i_1]) ? var_0 : (arr_24 [i_9] [i_1] [i_7] [i_7] [i_7] [i_11])))) && (arr_13 [6])))) | ((-(arr_13 [i_11 + 2])))));
                }
                for (int i_12 = 3; i_12 < 17;i_12 += 1) /* same iter space */
                {
                    var_37 = var_6;
                    arr_47 [i_1] [i_7] [i_12] [i_12] [i_9] [i_12] = (((var_12 && var_12) ? ((var_7 ? var_0 : var_8)) : (((((arr_19 [i_12 + 3]) && (arr_19 [i_12 + 3])))))));
                    arr_48 [i_12] [i_12] [i_7] [i_12] [i_1] = (var_7 && var_8);
                }
                for (int i_13 = 0; i_13 < 20;i_13 += 1)
                {
                    var_38 |= ((-(arr_45 [i_1] [i_1])));
                    var_39 -= (min(((!(!-31285))), ((!(var_8 || var_11)))));
                }
            }
            for (int i_14 = 0; i_14 < 20;i_14 += 1)
            {
                var_40 = ((~((+(((arr_18 [i_1] [i_1]) ^ var_14))))));
                arr_55 [i_1] [i_1] [i_14] = ((-(arr_50 [i_14] [i_7] [i_7] [i_7] [i_1])));
            }
            for (int i_15 = 0; i_15 < 20;i_15 += 1)
            {
                var_41 = ((139 ? ((var_4 / (arr_0 [i_1]))) : (((arr_30 [i_15]) ? (((arr_3 [i_1]) * (arr_56 [i_1] [i_7] [i_15]))) : var_12))));
                arr_58 [i_1] [i_7] [i_15] = (~(arr_19 [i_1]));
                arr_59 [i_1] [i_7] [i_15] = (min(((-1 ^ (-32767 - 1))), -172617638));
                arr_60 [i_15] [i_7] = (arr_54 [i_15] [i_1] [1]);
            }
            arr_61 [i_1] [i_1] [i_1] = max(((((arr_44 [i_1] [i_7]) || (arr_15 [i_1] [i_7])))), (arr_45 [i_1] [i_7]));
            var_42 -= (((((1 << (min(0, var_8))))) ? (((-(arr_52 [i_1] [i_7])))) : ((0 ? 1848459099 : 439166727))));
            arr_62 [i_7] [i_1] [i_1] = min(1, var_19);
            var_43 ^= (((7 && var_1) || (arr_20 [i_1] [i_7])));
        }
        var_44 = (max(var_44, ((min((~var_13), ((((((arr_18 [i_1] [i_1]) ? (arr_0 [i_1]) : (arr_49 [i_1] [i_1] [i_1] [i_1] [i_1])))) ? ((var_0 ? var_8 : 11827781168460515302)) : (arr_44 [i_1] [i_1]))))))));
    }
    var_45 *= (((min(3497829371, var_14))) ? ((var_3 & (var_17 ^ var_3))) : ((((min(var_13, var_1))) ? 0 : 8191)));
    #pragma endscop
}
