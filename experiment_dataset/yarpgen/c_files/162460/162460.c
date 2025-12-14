/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162460
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= (min((var_9 | var_19), (~var_8)));
    var_21 = (max(var_21, var_14));

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_22 = (51 + var_8);
            var_23 -= ((9223372036854775805 ? 209 : 17));
            var_24 &= ((max(((var_16 ? 50 : var_13), -5760444521516470661))));
        }
        for (int i_2 = 4; i_2 < 10;i_2 += 1)
        {
            var_25 += ((((-((1 ? 238 : 348327975)))) > var_2));
            var_26 = ((+(((5760444521516470661 ^ 5760444521516470661) ? ((((arr_6 [i_2]) == var_19))) : var_5))));
            arr_8 [i_2 + 1] [i_0] [i_0] = (!5760444521516470661);
            var_27 = (((910369394776307506 & -6162083246498148632) ? (-6606 % var_11) : (1 << 1)));
        }
        var_28 -= ((var_11 >= (((arr_0 [i_0]) % (arr_0 [i_0])))));
        arr_9 [i_0] = (((((min(var_18, 9223372036854775805)) >> (var_15 || var_17)))) ? 54269 : ((min(8107, (4294967287 && -8972100012955684069)))));
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
    {
        var_29 = ((((arr_6 [i_3]) ? (arr_11 [i_3]) : 3)));
        var_30 = ((~((min(((((arr_2 [i_3]) && 203))), var_4)))));

        /* vectorizable */
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 10;i_6 += 1)
                {
                    {
                        var_31 = -8121;
                        var_32 = ((var_7 ? ((var_2 & (arr_19 [i_5]))) : (arr_16 [i_4] [i_4] [i_4])));
                    }
                }
            }
            arr_22 [i_3] [i_4] = (((!112) | (((arr_3 [1]) ^ 64))));
            var_33 = (((arr_17 [i_3] [i_3] [i_4]) != 1));
        }
        /* vectorizable */
        for (int i_7 = 1; i_7 < 8;i_7 += 1) /* same iter space */
        {

            for (int i_8 = 4; i_8 < 10;i_8 += 1)
            {
                arr_27 [i_3] [i_3] [i_3] [i_3] = ((!((((arr_24 [i_3] [i_3] [i_3]) & (arr_7 [i_3]))))));

                for (int i_9 = 2; i_9 < 9;i_9 += 1)
                {
                    var_34 = var_6;
                    var_35 = (((arr_2 [i_9 - 2]) >> (-8107 + 8126)));
                    var_36 = ((~(((-31442 + 2147483647) >> (-8091 + 8093)))));
                    arr_31 [i_3] [i_7] [i_7] [i_9] [i_9] = (((arr_17 [i_7 + 4] [i_7 + 3] [i_9 - 2]) == (arr_17 [i_7 - 1] [i_8] [i_9 - 1])));
                }
                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    var_37 = var_1;
                    var_38 = (207 % -8081);
                }
            }
            for (int i_11 = 0; i_11 < 12;i_11 += 1)
            {
                var_39 = var_2;
                var_40 -= (1616423042 & -50);
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 12;i_12 += 1)
                {
                    for (int i_13 = 2; i_13 < 8;i_13 += 1)
                    {
                        {
                            var_41 = ((~(((arr_41 [i_3] [i_3] [i_3]) ? var_1 : 112))));
                            arr_43 [i_3] [i_3] [i_3] [i_3] [i_3] = 194;
                            arr_44 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] = ((var_7 ? (arr_4 [i_7 + 4] [i_12]) : var_12));
                        }
                    }
                }
            }
            arr_45 [i_7 + 2] = (((arr_2 [i_3]) ? (arr_4 [i_7] [1]) : 8616444476035289721));
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 12;i_15 += 1)
                {
                    {
                        var_42 &= (arr_38 [i_7 - 1] [i_7 + 4]);
                        var_43 = (min(var_43, 2790911655));
                    }
                }
            }
            arr_50 [i_3] [i_7] = (-1616423043 % 2768271097);
        }
        for (int i_16 = 1; i_16 < 8;i_16 += 1) /* same iter space */
        {
            var_44 |= (-127 - 1);
            var_45 &= (((((~(arr_16 [i_3] [i_16 + 4] [i_3])))) ? (arr_21 [i_3] [i_3] [i_3] [i_16]) : ((18446744073709551609 & (arr_46 [i_16 + 2] [i_16 + 3] [i_16])))));
            var_46 = (((min(65517, var_8)) / (~var_16)));
        }
        for (int i_17 = 1; i_17 < 8;i_17 += 1) /* same iter space */
        {
            var_47 = -1616423043;
            arr_59 [i_17] = ((+((((((7696945738341647401 ? (arr_0 [i_3]) : (arr_21 [i_3] [i_17] [i_17 + 3] [i_3])))) || (arr_5 [i_17 + 1]))))));
            var_48 &= 15037;
        }
    }
    var_49 = ((55 ? 65011712 : 1616423040));
    #pragma endscop
}
