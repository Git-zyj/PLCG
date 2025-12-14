/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_20 = (min(68, (min((!var_16), (((arr_3 [i_0] [i_0] [i_0]) ? var_16 : 1))))));
            var_21 = var_9;
        }
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_22 = (min(var_2, -1));
            var_23 &= ((var_13 != (((((0 ? 187 : 15))) ? var_18 : var_1))));
            arr_9 [i_0] [i_0] = (max((arr_1 [i_0]), ((((arr_1 [i_2]) || (arr_1 [i_2]))))));
            var_24 = ((-(var_10 > var_10)));
        }
        var_25 *= (((12054 == (((var_15 >= (arr_5 [i_0] [6] [6])))))) ? (((112 * (0 <= var_6)))) : ((((arr_8 [i_0]) < 3879951385))));
        var_26 = ((!(arr_6 [i_0] [i_0])));

        for (int i_3 = 3; i_3 < 16;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {

                for (int i_5 = 1; i_5 < 17;i_5 += 1)
                {
                    var_27 *= ((((max((arr_3 [i_3 - 2] [i_3 - 2] [i_5 + 1]), -231503555))) ? (arr_1 [i_0]) : ((((!((min(-6489319736309964336, 14114)))))))));

                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        var_28 |= var_1;
                        var_29 = var_9;
                        var_30 = ((~(max(196900140, 1))));
                    }
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        var_31 = var_19;
                        var_32 = (min((((((max((arr_0 [i_0]), 1))) / 1))), (((max(var_4, var_19)) * (arr_22 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                    }
                    var_33 = (min(var_33, (((~(arr_8 [i_5]))))));
                    var_34 = (((((1 ? (arr_13 [i_5 - 1] [i_3 + 1] [i_3 - 2] [i_3 + 1]) : var_6))) * -var_12));
                    var_35 ^= (min(248, (arr_3 [i_0] [i_0] [i_0])));
                }
                for (int i_8 = 4; i_8 < 15;i_8 += 1)
                {
                    var_36 = var_10;
                    var_37 = ((((((246 < -2120939291) | var_5))) ? ((3 ? 3 : 1)) : ((-17131 ^ (93 | 1030140431)))));

                    /* vectorizable */
                    for (int i_9 = 1; i_9 < 14;i_9 += 1)
                    {
                        arr_29 [i_0] [i_8] |= (((arr_27 [i_0] [i_0] [i_0] [i_0] [i_0]) ^ var_9));
                        var_38 = var_16;
                    }
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        var_39 |= var_7;
                        var_40 = (!(((arr_27 [i_8] [i_8] [i_8 + 2] [i_8 + 2] [i_8 - 1]) != (arr_27 [i_8] [i_8] [i_8 + 2] [i_8] [i_8 - 1]))));
                    }
                }
                for (int i_11 = 0; i_11 < 0;i_11 += 1)
                {
                    var_41 += ((-(max((((arr_4 [i_4] [i_4]) ? (arr_0 [i_0]) : (arr_11 [i_0] [i_0] [i_0]))), (1 & 1)))));
                    var_42 = ((((var_4 <= (min((arr_4 [i_0] [i_0]), (arr_2 [i_11]))))) ? 3 : (((max((((arr_7 [i_3]) || (arr_11 [i_0] [i_0] [i_0]))), var_13))))));
                    arr_36 [i_0] = var_18;
                }

                for (int i_12 = 0; i_12 < 18;i_12 += 1) /* same iter space */
                {

                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 18;i_13 += 1)
                    {
                        var_43 = ((133693440 ? 3980580696596602522 : -2120939304));
                        var_44 = (((arr_10 [i_3 - 2] [i_3 - 2] [i_3 + 1]) || var_10));
                        var_45 = ((arr_31 [i_4]) ? (arr_38 [i_0] [i_0] [i_3 - 1] [i_0] [i_0]) : (arr_15 [i_3 + 2] [i_3 - 1] [i_3 + 2] [i_3 + 2]));
                    }
                    for (int i_14 = 1; i_14 < 16;i_14 += 1)
                    {
                        var_46 = min((min(var_1, (max(-3889071518588926691, 253)))), (min((arr_43 [i_0] [i_0] [i_0] [i_0] [i_0]), (((arr_35 [i_0]) ? 22 : 8026848013262410409)))));
                        var_47 -= ((var_8 % (((arr_13 [i_3 + 2] [i_3 + 2] [i_14 - 1] [i_3 + 2]) ? (arr_26 [i_3] [8] [i_3 + 2] [i_14 + 2]) : (arr_31 [i_3 + 1])))));
                        var_48 = (min(var_48, var_1));
                    }
                    var_49 -= (min(17133, 47));
                    arr_46 [i_0] = (min(((var_15 ? var_17 : (arr_23 [i_0]))), 101));
                }
                for (int i_15 = 0; i_15 < 18;i_15 += 1) /* same iter space */
                {
                    var_50 ^= (max(12354790128335639120, (-127 - 1)));
                    var_51 = (min(var_51, var_15));
                }
                for (int i_16 = 0; i_16 < 18;i_16 += 1) /* same iter space */
                {
                    arr_54 [i_0] [i_0] [i_0] [i_0] = (9214749504610240790 >= 18446744073709551612);
                    var_52 += (~0);
                }
            }
            for (int i_17 = 2; i_17 < 17;i_17 += 1)
            {
                var_53 = (~var_11);
                var_54 = (min(((((arr_39 [i_17 - 1] [i_3 + 1] [i_3 - 2] [i_3 + 1] [i_3 + 1]) * (((!(arr_24 [i_0] [i_0] [i_0] [i_0] [i_0]))))))), ((var_2 ? ((((arr_4 [i_0] [i_0]) ? (arr_42 [i_0]) : var_14))) : var_12))));
                var_55 = (((((~((min((arr_6 [i_3] [i_3]), (arr_43 [i_0] [i_0] [i_0] [i_0] [i_0]))))))) ? (arr_24 [i_0] [i_0] [i_0] [i_0] [i_0]) : ((min(var_5, 21)))));
            }
            var_56 = (((~((64 ? (arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_17 [i_0] [i_0] [i_0] [i_0]))))));
            var_57 = (6 && 4);
            arr_58 [i_0] [i_0] [i_0] = (min((arr_4 [i_0] [i_0]), (((arr_5 [i_0] [i_0] [i_0]) * (max(var_1, var_13))))));
        }
        for (int i_18 = 0; i_18 < 18;i_18 += 1)
        {
            var_58 += min((((17150 ? (arr_16 [i_0] [i_0] [i_0] [i_0]) : var_16))), 32742);
            var_59 = arr_4 [i_18] [i_0];
        }
        var_60 += var_13;
    }
    var_61 = (max(var_61, (min(var_3, var_12))));
    var_62 = ((-112 ? 17115 : 10410529702600322456));

    for (int i_19 = 2; i_19 < 21;i_19 += 1)
    {
        arr_64 [i_19] = ((~(((((arr_62 [i_19]) == (arr_63 [i_19] [i_19]))) ? var_11 : (((var_0 ? (arr_62 [i_19]) : var_13)))))));
        var_63 |= (min(5, 1));
    }
    var_64 = (max(var_18, (((((var_7 ? var_6 : var_3))) ? var_15 : (!var_18)))));
    #pragma endscop
}
