/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_18 = ((~(1 ^ var_3)));
        var_19 = (min(var_19, (((-(min(((((arr_1 [i_0]) - var_15))), (max((arr_2 [i_0]), var_13)))))))));
    }
    for (int i_1 = 3; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_20 ^= (16 > 1);
        var_21 ^= (min(var_10, (((var_4 == (max(var_14, 1)))))));
        var_22 += (!var_17);
        var_23 ^= ((~(((32301 * 1) * (((arr_3 [i_1 - 2] [i_1]) * 0))))));
    }
    for (int i_2 = 3; i_2 < 16;i_2 += 1) /* same iter space */
    {
        arr_9 [8] &= (((min((max((arr_4 [18]), var_4)), ((min(2734375709, var_15))))) ^ (((min(0, 21))))));
        var_24 ^= ((+((min((arr_4 [16]), 1)))));
        var_25 = (max(var_25, (((-(((!((((((arr_5 [4] [i_2]) + 2147483647)) << (var_4 - 1805695340604974537))))))))))));
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        var_26 = (max(var_26, (((((max((arr_7 [i_3]), 232))) ? ((223 ? (arr_7 [i_3]) : var_12)) : ((-(arr_7 [i_3]))))))));

        for (int i_4 = 2; i_4 < 17;i_4 += 1)
        {
            var_27 = (min(var_27, (((((((max(2757876175, var_4))) ? ((max(var_5, 223))) : var_7)) == ((195 ? 1 : 10747)))))));
            var_28 = (max(var_28, -var_7));
            var_29 ^= (!254);

            for (int i_5 = 3; i_5 < 16;i_5 += 1)
            {
                var_30 = (max(var_30, ((((min(var_12, (arr_16 [i_3] [i_4 - 1]))))))));

                /* vectorizable */
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    var_31 = (max(var_31, ((((1959953053 - 23) * (!16890659201803719587))))));
                    var_32 -= ((var_6 ? (arr_3 [i_4 - 2] [i_5 - 1]) : (arr_17 [i_4 - 2] [i_5])));
                }
                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    var_33 ^= ((max((~1), (var_6 >> 23))));
                    var_34 ^= var_13;
                    var_35 = (max(var_35, (arr_16 [i_3] [i_5])));
                    var_36 ^= var_7;
                }
                var_37 += ((var_15 | (~var_7)));
            }
            for (int i_8 = 1; i_8 < 15;i_8 += 1)
            {
                var_38 += var_15;
                var_39 -= (min((((arr_4 [i_3]) & (var_8 & 232))), ((-var_2 ? ((max(var_6, 1))) : -17432))));
                var_40 -= (min((((((((arr_24 [i_3] [i_3] [i_3] [i_3]) ? (arr_14 [i_4] [i_8]) : var_5))) ? (var_8 ^ var_4) : (~var_8)))), (min((var_17 | var_3), (((arr_14 [i_4 - 1] [i_3]) & var_17))))));
                var_41 = (min(var_41, ((((~var_17) & (~-1))))));
            }
            for (int i_9 = 4; i_9 < 17;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 18;i_10 += 1)
                {
                    for (int i_11 = 2; i_11 < 15;i_11 += 1)
                    {
                        {
                            arr_34 [i_3] [i_4] [i_4 - 2] [i_4] [i_3] &= var_5;
                            var_42 *= (max((!var_9), (arr_6 [i_3])));
                            var_43 = (max(var_43, ((min(((max((arr_32 [i_3] [i_4 + 1] [i_4 - 2]), var_12))), ((var_8 << (0 & var_4))))))));
                        }
                    }
                }

                for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
                {
                    var_44 &= ((((min(var_0, (arr_28 [i_4 - 2] [i_9 - 3] [12] [i_9 - 4])))) ? (-223 & var_3) : ((min(var_13, (var_14 & var_8))))));
                    var_45 = (max(var_45, ((max((((max(var_11, 8722238412148727858)) & (var_0 / 1))), (((!((min(var_2, var_10)))))))))));
                    var_46 *= ((((((arr_24 [i_4 - 1] [i_9 - 3] [i_9] [i_12]) ^ (arr_24 [i_4 + 1] [i_9 + 1] [i_9] [i_3])))) ? ((((arr_13 [i_4 - 1] [i_9 - 4]) ? var_13 : var_14))) : var_3));
                    var_47 = (max(var_47, (min(var_10, -110))));
                }
                for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
                {
                    var_48 += (min(96, 1));
                    arr_40 [i_3] [i_4] [i_4] [i_4 - 1] &= var_9;
                    var_49 += (max(((var_17 ^ (arr_22 [i_9 + 1]))), ((21 ? var_13 : var_4))));
                    var_50 += (max(var_2, (~var_13)));
                }
                for (int i_14 = 1; i_14 < 17;i_14 += 1)
                {

                    for (int i_15 = 0; i_15 < 18;i_15 += 1) /* same iter space */
                    {
                        var_51 |= ((((min((min(235, 147)), var_2))) ? var_8 : (((arr_17 [i_9 - 2] [i_14 - 1]) & (arr_29 [i_9 - 3] [i_9 - 2] [i_9 - 4])))));
                        var_52 += (min((((~33) ? (((min(var_6, var_10)))) : ((var_5 ? (arr_13 [i_3] [i_3]) : var_16)))), (min(9571153104290281510, 15))));
                        var_53 |= ((10747 == (arr_33 [i_4 - 1] [i_9 - 4] [i_14 + 1] [16] [i_14])));
                    }
                    for (int i_16 = 0; i_16 < 18;i_16 += 1) /* same iter space */
                    {
                        var_54 += (min(((~(1 | 24))), (max(var_11, var_1))));
                        var_55 = (max(var_55, (((((171 << (((max(38012, var_13)) - 3966453458)))) % (((-((min(247, -15074)))))))))));
                    }
                    for (int i_17 = 0; i_17 < 18;i_17 += 1)
                    {
                        var_56 += ((((max(254, var_11))) <= ((min((((arr_24 [i_3] [i_3] [i_3] [i_3]) / var_6)), 252)))));
                        var_57 ^= ((((-(!197231589))) < (min(-32, (arr_19 [i_4 - 1] [i_4 - 2] [i_4 - 2] [i_4 + 1])))));
                    }
                    var_58 ^= (min(197231589, 10));
                    var_59 -= ((var_8 ? ((((249 << (250 - 236))))) : ((-((min(var_11, var_12)))))));
                }
                for (int i_18 = 1; i_18 < 15;i_18 += 1)
                {
                    arr_56 [i_3] [i_4] [4] |= (max(var_0, var_12));
                    var_60 *= (min((arr_5 [i_3] [i_18 + 1]), (((~(arr_5 [i_3] [i_18 + 3]))))));
                }
            }
        }
        /* vectorizable */
        for (int i_19 = 3; i_19 < 16;i_19 += 1)
        {
            var_61 = (max(var_61, -7));
            var_62 *= (((var_12 & var_5) <= (!var_5)));
            var_63 *= (((var_8 & var_1) ? var_6 : var_14));
            var_64 = (max(var_64, var_6));

            for (int i_20 = 1; i_20 < 16;i_20 += 1)
            {
                /* LoopNest 2 */
                for (int i_21 = 0; i_21 < 18;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 18;i_22 += 1)
                    {
                        {
                            var_65 ^= (1 & 123);
                            var_66 = (max(var_66, ((((((-(arr_59 [i_3] [i_3] [0])))) ? (arr_23 [i_3] [i_3] [6] [5] [i_3] [i_3]) : var_4)))));
                            var_67 ^= (!var_13);
                            arr_67 [i_3] [i_3] [i_20] [i_20] [16] |= (-var_11 & var_15);
                        }
                    }
                }
                var_68 = (min(var_68, ((((((var_15 ? (arr_65 [i_3] [i_3] [i_19] [i_19] [i_19] [i_20]) : var_2))) / (arr_38 [1] [i_3] [i_19 + 2] [i_19] [i_20 + 2]))))));
            }
            for (int i_23 = 0; i_23 < 18;i_23 += 1)
            {
                arr_71 [i_23] [i_23] [i_23] &= 3;
                var_69 = (min(var_69, (((255 >> (252 - 242))))));
                var_70 = (max(var_70, (arr_22 [i_3])));
            }
        }
        var_71 = (max(var_71, (min(var_9, (max(var_7, (arr_51 [i_3] [i_3] [7] [i_3] [i_3])))))));
    }
    var_72 += ((var_3 / var_4) < (((min(56965, var_6)))));
    #pragma endscop
}
