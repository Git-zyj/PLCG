/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((((max(var_4, var_12))) != ((min(46017, var_12)))))) << (7972476302749471314 - 7972476302749471292)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_17 &= (((((-(arr_5 [i_0] [i_1] [i_2])))) ? ((((((arr_1 [i_2]) ? 19518 : (arr_4 [i_2 + 4])))) ? (((var_11 && (arr_8 [i_0] [i_0] [i_2])))) : (min(var_9, var_1)))) : (arr_0 [i_1])));

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_18 = ((var_1 ? ((var_7 % (arr_8 [i_1 - 1] [i_2] [i_2 + 2]))) : (((var_2 >= (arr_8 [i_1 - 1] [i_2] [i_2 + 2]))))));
                        var_19 = (max((arr_2 [i_1]), var_9));
                        var_20 = ((((-68 + 2147483647) >> (122 - 117))));

                        for (int i_4 = 4; i_4 < 14;i_4 += 1)
                        {
                            var_21 *= (((((min((arr_3 [i_3]), (arr_12 [i_0] [i_4] [i_2] [i_2] [i_0] [i_0]))) ? var_12 : (arr_8 [i_0] [i_0] [i_2 + 3])))) > ((var_13 ? -116 : (var_3 && var_10))));
                            var_22 = (((min((arr_9 [i_2]), ((((arr_4 [i_3]) ? (arr_10 [i_0] [i_1 - 1] [i_2] [i_3] [i_4] [i_0]) : -1589134429))))) & (((((arr_2 [i_0]) != (arr_2 [i_3])))))));
                            var_23 = (((var_8 * (~4294967295))) >> (var_4 - 80));
                            var_24 = (((((46034 ? 1040187392 : -12))) ? (arr_3 [i_1 - 1]) : (arr_3 [i_1 + 1])));
                        }
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        var_25 = var_13;
                        arr_16 [i_0] [i_0] [i_0] [i_2] [i_0] = (arr_12 [i_0] [i_1] [i_2 + 4] [i_1] [i_2 + 4] [i_2]);
                    }
                    var_26 ^= (arr_4 [i_2]);
                }
            }
        }
    }
    var_27 = (max(46034, var_7));
    var_28 = ((-((min(-12, -20852)))));

    for (int i_6 = 2; i_6 < 14;i_6 += 1)
    {
        arr_19 [i_6] [i_6] &= (arr_2 [i_6]);
        var_29 = ((((min((arr_2 [i_6 + 2]), (arr_2 [i_6 - 1])))) ? var_10 : 46017));
        arr_20 [i_6 - 2] = ((1589134439 ? (arr_18 [i_6 + 1]) : 3072));
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        var_30 = (((arr_7 [i_7]) ? (min((arr_9 [2]), var_2)) : ((~(arr_9 [14])))));
        arr_23 [i_7] = var_5;
    }
    for (int i_8 = 2; i_8 < 10;i_8 += 1)
    {

        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            arr_30 [i_8] [i_8] [i_8] = ((((max(var_6, 46017))) ? (((min(236, 12)))) : (9223372036854775807 ^ 1)));
            arr_31 [i_9] [i_9] = (((((-40 == 1) * (arr_15 [i_9] [i_9])))) ? ((((((var_6 ? var_15 : (arr_17 [6] [i_8]))) <= (~var_7))))) : (min((arr_3 [i_8 - 1]), ((var_3 ? var_15 : var_8)))));

            for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
            {
                var_31 = (((~(arr_28 [i_8 + 1]))));
                arr_34 [i_10] [i_9] [i_9] [i_10] = (min((max(20, 2604774939284469053)), 48));
            }
            /* vectorizable */
            for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
            {

                for (int i_12 = 2; i_12 < 8;i_12 += 1)
                {
                    arr_41 [i_11] [i_11] = (arr_21 [i_12]);
                    var_32 = ((var_14 ? var_1 : 52847));
                }
                var_33 = (max(var_33, (((-(arr_36 [i_8 - 2] [i_8 + 1] [i_8 + 1]))))));
            }
        }
        for (int i_13 = 1; i_13 < 7;i_13 += 1)
        {

            for (int i_14 = 1; i_14 < 1;i_14 += 1)
            {
                arr_48 [6] [6] &= 65535;
                var_34 = (max((arr_7 [14]), 12688));
                var_35 = ((((var_11 << ((((1589134429 ? var_13 : (arr_17 [i_8] [i_8]))) - 59645)))) | ((+((4620 << (((arr_10 [i_8] [i_13 + 1] [3] [i_8] [i_8] [i_13 + 1]) + 20967))))))));
            }

            /* vectorizable */
            for (int i_15 = 0; i_15 < 11;i_15 += 1) /* same iter space */
            {
                var_36 -= ((!(arr_13 [i_13 + 2] [i_13 + 2] [i_13] [i_13 - 1] [i_13 + 2])));
                arr_52 [i_13] = arr_4 [i_8];
            }
            for (int i_16 = 0; i_16 < 11;i_16 += 1) /* same iter space */
            {
                var_37 += (min(((min((arr_4 [i_8 - 1]), var_6))), (arr_50 [6])));
                arr_56 [i_13] = (max((arr_53 [i_8] [i_13] [i_16]), (max(var_15, (arr_14 [i_8 - 1] [i_13] [i_13 + 4])))));
            }
            var_38 = (max(var_38, (((!((min((arr_55 [2] [i_8 + 1] [i_13 - 1]), var_1))))))));
            arr_57 [i_13] = (arr_45 [i_8 + 1] [i_13 + 2]);
        }
        /* LoopNest 3 */
        for (int i_17 = 4; i_17 < 9;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 11;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 11;i_19 += 1)
                {
                    {
                        arr_66 [i_17] = var_8;
                        arr_67 [i_8] [i_17] = ((((min(var_13, var_6))) << (!var_2)));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_20 = 2; i_20 < 9;i_20 += 1)
        {
            for (int i_21 = 1; i_21 < 8;i_21 += 1)
            {
                for (int i_22 = 0; i_22 < 1;i_22 += 1)
                {
                    {
                        var_39 = ((min(var_2, (arr_63 [i_8 - 1] [i_8 + 1]))));
                        arr_78 [i_21] = var_9;
                        var_40 |= (((70 & 4122016191) ? (((((arr_77 [i_8] [i_20] [i_21] [8] [i_20]) == var_7)) ? (max((-32767 - 1), var_11)) : (arr_17 [i_8 + 1] [i_20 + 1]))) : (((max((max(var_3, (arr_53 [i_22] [i_21] [i_8 - 2]))), var_1))))));
                        var_41 = var_15;
                        arr_79 [i_8] [i_21] [i_21] [i_22] = ((((max((arr_71 [i_21]), (arr_32 [i_8 - 2])))) > ((((236 % 256919073) >= ((((65535 >= (arr_40 [i_8 - 1] [i_8 - 1] [i_8] [i_8] [i_8] [i_8]))))))))));
                    }
                }
            }
        }
    }
    for (int i_23 = 0; i_23 < 16;i_23 += 1)
    {
        var_42 = ((((((arr_6 [i_23] [i_23]) || var_15))) * (((!(arr_17 [i_23] [i_23]))))));
        var_43 *= (min((!var_7), var_3));
        arr_82 [i_23] = (max(var_8, -1));
    }
    #pragma endscop
}
