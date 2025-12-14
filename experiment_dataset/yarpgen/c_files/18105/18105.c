/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    var_12 = (((var_0 ^ 0) ? ((((min(var_5, 123))) ? (max(4294967294, 18446744073709551599)) : (!var_0))) : ((((min(17, 39))) ? (max(17, var_7)) : var_8))));
    var_13 = -4294967294;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            var_14 &= (((((arr_0 [17]) + (!18446744073709551598)))) ? -37 : (((var_1 || var_3) + 0)));
            var_15 = (min(var_15, ((((max((max(18446744073709551599, var_0)), 18446744073709551578)) >> (((((arr_4 [i_0] [i_0]) * (arr_4 [i_0] [i_0]))) - 689)))))));
            var_16 = ((-(((arr_3 [6] [i_1]) - (arr_1 [i_1 + 2])))));

            for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
            {
                var_17 = (max(18446744073709551587, -var_4));
                var_18 = (min(var_18, (((var_0 == ((((((max(0, -123))) > (~32767))))))))));
            }
            for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
            {
                var_19 = ((!((var_3 || (arr_3 [i_1 - 1] [i_1])))));

                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    var_20 = -123;
                    var_21 = (((((arr_6 [i_1] [i_0] [i_1] [i_1]) ? (arr_5 [i_1 - 1] [i_1 + 2]) : (arr_6 [i_1] [i_1] [i_0] [i_1]))) ^ (min((arr_5 [i_1 + 2] [i_1 + 2]), (arr_6 [i_1] [i_1 - 1] [i_0] [i_1])))));
                }
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    var_22 = (((((-65535 == (max(9223372036854775807, (arr_14 [i_0] [i_1 - 1] [i_1 - 1] [i_5])))))) != (arr_12 [i_0] [i_1] [i_1 - 1] [i_1] [i_1])));
                    var_23 = (min((min((((3 ? 4294967291 : var_3))), var_7)), (((var_7 & ((var_8 ? (arr_11 [i_1] [i_1] [i_3] [i_3] [i_1] [i_3]) : (arr_0 [i_1]))))))));
                    var_24 = (max((max((arr_1 [i_1 - 1]), var_1)), ((max(99, var_1)))));
                }
            }
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                var_25 = ((-((var_1 ? 123 : (arr_11 [i_1] [i_1 + 1] [i_1 + 1] [i_6] [i_1 + 1] [i_6])))));
                var_26 = (max(var_26, ((min((((((((arr_0 [i_0]) - -4))) >= 1834241203))), var_7)))));
                var_27 |= (min((max(((((arr_15 [i_0] [i_6] [i_6] [i_6]) > var_6))), (arr_6 [i_6] [i_6] [i_6] [i_6]))), 9223372036854775807));
                var_28 = (arr_6 [i_1] [i_6] [i_1 + 2] [i_1]);
            }
            var_29 = (((arr_5 [i_0] [i_1 + 2]) ? (~var_6) : 1834241203));
        }
        var_30 = (((~(max(var_8, (-127 - 1))))));
        var_31 = (max(((((arr_5 [i_0] [i_0]) != (arr_5 [i_0] [8])))), ((var_3 ? (arr_5 [i_0] [i_0]) : var_7))));
        var_32 = (min((max((arr_18 [i_0] [i_0] [i_0] [i_0]), 0)), ((max((((arr_0 [i_0]) ? var_1 : 123)), (((var_9 <= (arr_16 [i_0] [i_0] [17] [i_0])))))))));
        var_33 = (((!var_6) || (!var_2)));
    }
    for (int i_7 = 3; i_7 < 20;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 4; i_8 < 20;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                {
                    var_34 = min(((min((arr_23 [i_7] [i_8 - 4] [i_9] [i_9]), (arr_23 [i_7 + 1] [i_7 + 2] [i_7 - 1] [i_7 + 1])))), 2147483647);

                    for (int i_10 = 1; i_10 < 22;i_10 += 1)
                    {

                        /* vectorizable */
                        for (int i_11 = 2; i_11 < 21;i_11 += 1) /* same iter space */
                        {
                            var_35 = (((0 > 0) * (arr_21 [i_7])));
                            var_36 |= (((-124 ? var_2 : -131072)));
                            var_37 = ((var_5 == ((-(arr_20 [i_7])))));
                            var_38 = (((arr_24 [i_7 + 1] [i_7 + 1] [i_7] [i_7]) ? (arr_24 [i_7] [i_7 + 2] [i_7] [11]) : (arr_24 [15] [i_7 - 2] [i_7 - 3] [10])));
                        }
                        /* vectorizable */
                        for (int i_12 = 2; i_12 < 21;i_12 += 1) /* same iter space */
                        {
                            var_39 = 65535;
                            var_40 = 28;
                            var_41 = (((((var_5 ? (arr_30 [i_7] [i_7] [i_7] [i_10] [i_12] [i_12 - 2]) : var_5))) ? (arr_25 [i_8 - 3] [i_7] [i_12 - 1]) : 123));
                            var_42 = (((arr_31 [i_7 - 3] [0] [0] [i_7] [i_12]) ? (arr_31 [i_12] [i_7] [i_7] [i_7] [i_7]) : ((166 ? 18446744073709551563 : var_8))));
                        }
                        var_43 = var_7;
                    }
                    for (int i_13 = 0; i_13 < 23;i_13 += 1)
                    {
                        var_44 = (min((arr_27 [i_7]), var_6));

                        for (int i_14 = 0; i_14 < 23;i_14 += 1)
                        {
                            var_45 = 123;
                            var_46 = (max(((min(((-(arr_28 [i_7]))), ((~(arr_33 [i_7] [i_8] [i_9] [0] [i_13] [i_14])))))), (arr_26 [1] [i_8] [i_7])));
                            var_47 = (max((max(39, (arr_37 [i_7] [i_7 + 1] [i_7 - 2] [i_7] [i_7 + 1] [i_7 + 2] [i_7]))), ((max((((arr_21 [i_7]) ? var_5 : -1)), 1834241203)))));
                        }
                        for (int i_15 = 3; i_15 < 21;i_15 += 1)
                        {
                            var_48 = (arr_28 [i_7 + 1]);
                            var_49 = (-(((((arr_35 [i_7] [i_7] [i_7] [20]) + var_0)) - (min(-1423574477, 0)))));
                        }
                    }
                }
            }
        }
        var_50 = (max(((max((arr_35 [9] [9] [i_7] [i_7 + 2]), (arr_30 [i_7] [i_7 + 3] [i_7 + 3] [i_7] [i_7 + 3] [i_7])))), -1846844261));
    }
    for (int i_16 = 0; i_16 < 21;i_16 += 1)
    {
        var_51 = -1423574477;
        var_52 = (min(var_52, (((((arr_20 [16]) ? var_0 : 252)) ^ ((~(arr_20 [1])))))));
    }
    #pragma endscop
}
