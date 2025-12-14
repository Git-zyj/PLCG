/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [13] [2] = (~4423);
        var_13 = (min(var_13, ((!((min(var_3, (((arr_0 [i_0]) - 5003)))))))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_14 = (-5002 | 81811335);
        var_15 = (min(((((arr_1 [i_1]) > 1))), (246 > 8)));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
    {
        var_16 = (((arr_9 [i_2] [i_2]) + ((((1 || (arr_1 [i_2])))))));
        var_17 = -var_10;
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        var_18 = ((((arr_2 [i_3] [i_3]) >= (arr_4 [i_3]))));
        var_19 = ((20950 * (((!(arr_11 [7]))))));
        var_20 *= ((!((min(var_11, 60)))));
    }
    var_21 = ((-((((min(63, var_0)) > 65533)))));

    /* vectorizable */
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        var_22 = (((4294967290 >> (var_10 - 3085556957193368556))));
        var_23 = (max(var_23, ((~((~(arr_5 [i_4])))))));
    }
    for (int i_5 = 1; i_5 < 20;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {

            for (int i_7 = 3; i_7 < 22;i_7 += 1)
            {
                var_24 ^= (min((arr_4 [i_5 - 1]), 4423));
                var_25 = (max(var_25, ((max((max(2940443267, (((arr_18 [1] [i_7]) * (arr_17 [i_5] [i_6] [i_7 - 1]))))), (((-1 != (min((arr_6 [i_6] [i_6]), var_10))))))))));
            }
            var_26 = (max(244, (min(-3, ((~(arr_20 [i_5] [i_5] [22] [i_6])))))));
        }
        var_27 = (max((min((arr_18 [i_5 - 1] [i_5 + 3]), (max(65535, -32743)))), (max((~0), -4294967286))));
        var_28 = ((~(((!((max(51400, 123))))))));
        var_29 = ((((39354 | (~var_4))) + var_8));
        var_30 ^= (arr_20 [i_5] [i_5] [i_5 + 2] [i_5 + 2]);
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 20;i_8 += 1) /* same iter space */
    {
        var_31 = 3395188255630537476;
        var_32 = (~(arr_6 [i_8] [i_8 - 1]));
        var_33 = ((~(1880516719 > var_10)));
        var_34 = (arr_9 [i_8 + 1] [i_8 - 1]);

        for (int i_9 = 0; i_9 < 23;i_9 += 1)
        {
            var_35 *= ((!(1 + 6622888634424618380)));

            for (int i_10 = 0; i_10 < 23;i_10 += 1)
            {

                for (int i_11 = 0; i_11 < 23;i_11 += 1) /* same iter space */
                {
                    var_36 = ((arr_8 [i_8 - 1] [6]) + 2152830462);
                    var_37 = -var_2;
                    var_38 = -var_12;
                    var_39 = (((arr_8 [i_8 + 2] [i_8 + 2]) == (arr_27 [i_8 + 2] [i_8 + 3] [i_8 + 2])));
                }
                for (int i_12 = 0; i_12 < 23;i_12 += 1) /* same iter space */
                {

                    for (int i_13 = 1; i_13 < 21;i_13 += 1)
                    {
                        var_40 = (max(var_40, var_10));
                        var_41 &= var_3;
                    }
                    for (int i_14 = 0; i_14 < 23;i_14 += 1)
                    {
                        var_42 = var_6;
                        var_43 = (min(var_43, (arr_7 [i_12])));
                        var_44 = (max(var_44, (((0 | 1843404465) ^ (arr_0 [i_10])))));
                        var_45 |= var_9;
                        arr_38 [i_8 + 2] [i_9] [i_10] [i_8 + 2] [i_10] &= (4294967295 > (~-12958));
                    }
                    var_46 = (((arr_34 [i_8] [i_8 + 2] [i_8 - 1] [i_8 + 1] [i_8]) & 124));
                    arr_39 [i_8] [i_9] [i_9] [i_12] = (arr_26 [22] [i_9] [i_12]);
                }
                for (int i_15 = 0; i_15 < 23;i_15 += 1) /* same iter space */
                {
                    var_47 = (max(var_47, ((((arr_26 [1] [i_9] [i_9]) ^ (arr_22 [i_9]))))));
                    var_48 = ((1 ^ (arr_37 [i_8 + 1] [1] [i_8 + 2] [i_8 + 1] [i_8])));
                    var_49 ^= (((arr_35 [i_9] [3] [i_10] [i_8 + 1] [3]) >> ((70 ? 26 : (arr_19 [i_10] [i_9])))));
                }

                for (int i_16 = 3; i_16 < 22;i_16 += 1)
                {
                    var_50 = var_0;
                    var_51 = ((~(arr_22 [i_8 + 1])));

                    for (int i_17 = 0; i_17 < 23;i_17 += 1) /* same iter space */
                    {
                        var_52 = -41622;
                        var_53 = (((~(arr_8 [14] [i_8]))));
                        arr_49 [i_16] [1] [i_16] [i_16] [i_16] [i_16] = ((-(12288 && 254)));
                        var_54 = ((!(var_2 < 3)));
                    }
                    for (int i_18 = 0; i_18 < 23;i_18 += 1) /* same iter space */
                    {
                        var_55 += ((!(~11111481708388030910)));
                        var_56 = ((-(~40)));
                        var_57 = ((!(arr_20 [i_8] [i_9] [i_16] [i_8 - 1])));
                        var_58 = -25671;
                    }
                }
                arr_53 [i_8] [i_8] [i_8] = (49053 != var_6);
                var_59 ^= (arr_32 [i_8] [i_8 + 1] [4]);
            }
            var_60 = var_4;
            var_61 ^= ((~(~var_7)));

            for (int i_19 = 0; i_19 < 23;i_19 += 1) /* same iter space */
            {
                var_62 = (~-1613657225);
                var_63 = (arr_7 [i_8]);
                var_64 = (((arr_30 [i_8] [i_8 - 1] [i_8] [i_8 + 1]) ? (arr_40 [i_8] [6] [i_19] [i_9]) : ((2147483647 ? 158138709 : 8033108481596756209))));
            }
            for (int i_20 = 0; i_20 < 23;i_20 += 1) /* same iter space */
            {

                for (int i_21 = 0; i_21 < 23;i_21 += 1)
                {
                    var_65 = (max(var_65, ((((arr_57 [i_20]) - ((var_10 >> (var_4 + 1701310708))))))));
                    var_66 *= ((((((arr_43 [0] [i_9]) < var_7))) % var_4));
                }
                arr_61 [i_20] [i_20] [0] [i_8] = ((26084 << (var_6 + 116)));
                var_67 ^= (arr_2 [i_20] [i_8]);
            }
            for (int i_22 = 1; i_22 < 1;i_22 += 1)
            {

                for (int i_23 = 0; i_23 < 23;i_23 += 1)
                {
                    var_68 = (arr_2 [i_8] [i_9]);
                    var_69 = (arr_36 [i_8 - 1] [i_8 + 1] [i_9] [i_22 - 1] [i_22 - 1] [i_22]);
                    var_70 = 2142136861;
                    arr_68 [i_8] [i_8] [1] [i_22] [i_23] [i_8] = (((!(arr_40 [i_23] [0] [i_9] [i_23]))));
                    var_71 = ((1597174523 ^ ((~(arr_36 [i_8] [i_9] [i_22 - 1] [i_22] [i_23] [i_23])))));
                }
                var_72 *= ((~((~(arr_51 [18] [i_22 - 1])))));
                var_73 = (!var_9);
            }
        }
    }
    for (int i_24 = 0; i_24 < 13;i_24 += 1)
    {
        var_74 = (max((min((arr_41 [i_24] [i_24] [i_24] [i_24] [i_24] [i_24]), (arr_41 [i_24] [i_24] [i_24] [20] [i_24] [i_24]))), (min((arr_41 [i_24] [i_24] [i_24] [i_24] [14] [i_24]), (arr_41 [i_24] [i_24] [9] [13] [i_24] [6])))));
        var_75 ^= (max(var_1, (var_5 - 2147483392)));
        var_76 ^= ((((~(arr_16 [i_24])))) / (min((arr_44 [i_24] [i_24] [i_24] [i_24]), 4192)));
        var_77 -= ((min((arr_42 [i_24] [i_24] [i_24] [i_24] [i_24]), -774316032)));
    }
    #pragma endscop
}
