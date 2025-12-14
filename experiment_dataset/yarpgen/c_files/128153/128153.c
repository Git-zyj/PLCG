/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128153
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((var_8 ? var_9 : ((var_11 >> (var_0 - 15826291042182758514)))))) ? ((max(((16702700120713901139 ? -351947333 : 3435736441)), var_2))) : var_15));

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_18 = -var_10;
        var_19 = (min(var_19, ((max(((17592186044415 ? (arr_0 [i_0]) : (arr_0 [i_0]))), (arr_0 [i_0]))))));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 17;i_3 += 1)
                {
                    {
                        var_20 = var_7;
                        var_21 = (min((arr_3 [i_2 - 2] [i_2 - 1]), var_9));
                    }
                }
            }
            var_22 *= (min(var_9, ((((arr_7 [i_1] [i_0]) && (arr_5 [i_0] [i_1]))))));
            var_23 = (max(41934, 16702700120713901140));

            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    var_24 = (arr_10 [i_1]);
                    var_25 = ((arr_6 [i_1]) == ((((!(arr_6 [i_1]))))));
                }
                var_26 = var_16;
                var_27 = ((-((-5937 ? 0 : -449660799))));

                for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
                {
                    var_28 = (min(var_28, 0));
                    var_29 = ((!((((var_9 | 1) ? (arr_10 [i_1]) : (((arr_10 [i_1]) ? var_14 : (arr_2 [i_0]))))))));

                    for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
                    {
                        var_30 = (min(-938000415, -8));
                        var_31 = (-(-337437561 <= 18446744073709551607));
                        var_32 = (var_0 ? (arr_21 [i_6] [i_1] [i_6] [i_6] [i_1]) : ((max(var_13, var_5))));
                        var_33 = 33712;
                        var_34 = (max(var_34, ((min(var_3, var_12)))));
                    }
                    for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
                    {
                        var_35 = (arr_6 [i_1]);
                        var_36 &= (max(var_1, -351947343));
                        var_37 = ((!((min(9223372036854775807, 6363581513382627700)))));
                        var_38 = (max((((var_7 | (var_13 == 29358)))), 7861770931207432809));
                    }
                    for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
                    {
                        var_39 = ((((((((max(23601, var_6))) ? var_6 : (arr_27 [i_0] [i_1] [i_4] [i_1] [i_9] [i_1] [i_9]))) + 2147483647)) << (var_14 - 23513)));
                        var_40 = 187;
                        var_41 = (max((((arr_23 [i_0] [8] [8] [i_0] [17] [i_0] [i_0]) - (arr_17 [i_0] [i_0] [i_4] [i_1] [i_9] [i_9]))), ((min((((arr_25 [i_9] [i_6] [12] [12]) ? var_4 : -7861770931207432834)), 23613)))));
                        var_42 += (arr_21 [i_0] [i_0] [i_0] [18] [18]);
                    }
                    for (int i_10 = 0; i_10 < 19;i_10 += 1) /* same iter space */
                    {
                        var_43 = (min(var_43, (arr_13 [i_1] [i_0])));
                        var_44 &= 9223372036854775787;
                    }
                }
                for (int i_11 = 0; i_11 < 19;i_11 += 1) /* same iter space */
                {
                    var_45 ^= ((((((!((min(var_7, var_12))))))) * (min((min(-2293051912667767413, -1718391956173958682)), var_1))));
                    var_46 = -8;
                }
                /* vectorizable */
                for (int i_12 = 0; i_12 < 19;i_12 += 1) /* same iter space */
                {
                    var_47 += var_6;
                    var_48 = (min(var_48, ((((arr_26 [i_0] [i_1] [i_12]) / (arr_26 [i_12] [2] [i_0]))))));
                    var_49 = (~0);
                }
                /* vectorizable */
                for (int i_13 = 0; i_13 < 19;i_13 += 1) /* same iter space */
                {
                    var_50 |= var_13;
                    var_51 = (((0 ? (arr_25 [i_0] [i_1] [i_4] [16]) : (arr_14 [i_0] [i_1] [i_1] [i_1]))));
                    var_52 -= (--9223372036854775798);
                    var_53 = (~var_9);
                }
            }
        }
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 19;i_14 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 19;i_15 += 1)
        {
            for (int i_16 = 1; i_16 < 17;i_16 += 1)
            {
                {
                    var_54 = var_9;
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 19;i_17 += 1)
                    {
                        for (int i_18 = 1; i_18 < 15;i_18 += 1)
                        {
                            {
                                var_55 = 4196271881;
                                var_56 |= var_15;
                                var_57 ^= var_2;
                            }
                        }
                    }
                }
            }
        }
        var_58 = (min(var_58, (arr_12 [i_14] [i_14] [i_14])));
        var_59 |= ((7861770931207432813 + (arr_7 [i_14] [i_14])));
    }
    for (int i_19 = 0; i_19 < 19;i_19 += 1) /* same iter space */
    {
        var_60 = ((101 && ((!(2047 > 4095)))));
        var_61 = (((arr_42 [i_19] [i_19]) * (max(((max(var_13, (arr_12 [i_19] [i_19] [i_19])))), (max(6199, (arr_18 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19])))))));
        var_62 ^= (max((max(61, (4196271896 << 1))), (((arr_24 [i_19] [i_19] [i_19] [i_19] [16] [i_19] [18]) ? (arr_41 [i_19]) : (arr_24 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19] [i_19])))));
    }
    var_63 = (min(var_63, (((var_0 >> ((((max(var_9, -15932))) - 65002)))))));
    #pragma endscop
}
