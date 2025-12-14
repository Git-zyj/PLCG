/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157116
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    var_12 = (((-(arr_5 [i_0 - 1] [i_0] [i_2 + 1]))));
                    arr_7 [1] [i_1] [i_2] |= var_5;
                }
            }
        }
        var_13 = ((!((!(((7000691429553935219 ? (arr_0 [i_0] [i_0]) : var_9)))))));

        for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
        {
            var_14 = (max((arr_2 [i_0 - 1] [i_0 + 1]), ((((var_6 || -4447131096908755509) != ((((arr_4 [i_0] [i_0] [9]) || 17261132292817701477))))))));

            /* vectorizable */
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                var_15 = -30998;
                var_16 -= ((!(arr_2 [i_4] [i_3])));
                arr_13 [i_0] [i_3] [i_3] [i_4] = 0;
                var_17 -= (((arr_6 [i_0 + 3] [i_0 - 1]) <= var_2));
            }
            arr_14 [i_0] [i_0] = ((+(((arr_11 [i_0] [i_0 + 1] [i_0 + 1] [i_0]) + var_8))));
        }
        for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
        {
            arr_18 [i_0] = 33215;
            arr_19 [i_0] [i_0] [i_0] = var_5;
            var_18 *= (-30998 || 1);
            var_19 ^= (min(1, 1892749822477311478));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    {

                        for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
                        {
                            var_20 = ((18446744073709551601 ? 7000691429553935231 : 0));
                            var_21 += ((((((arr_20 [i_0 + 3] [i_8] [18]) & (arr_6 [i_0] [i_0 + 2])))) ? (((arr_6 [i_0] [i_0 + 2]) ? (arr_20 [i_0] [i_8] [i_0]) : var_6)) : ((7000691429553935240 ? (arr_20 [i_0] [i_8] [i_0]) : var_11))));
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
                        {
                            var_22 = (min(var_22, ((~(arr_9 [i_0 + 2] [i_7])))));
                            var_23 += (((((var_9 ? var_4 : var_8))) ? ((var_8 ? (arr_9 [i_0] [i_9]) : var_6)) : 4294967290));
                        }
                        var_24 = ((~((~(arr_23 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 + 1])))));
                        var_25 = ((((((arr_2 [i_5] [i_7]) | -7000691429553935253))) * (((arr_11 [i_0] [i_0] [i_0 + 3] [i_6]) * (arr_23 [i_0] [i_0] [i_0 + 3] [i_7] [i_7])))));
                    }
                }
            }
        }
        for (int i_10 = 0; i_10 < 23;i_10 += 1)
        {
            var_26 = (arr_11 [i_0] [i_0] [i_0] [i_0]);

            for (int i_11 = 4; i_11 < 19;i_11 += 1)
            {
                var_27 = var_6;
                var_28 *= var_10;
                arr_37 [i_0] [i_0] [i_0] [i_0] = (arr_10 [20] [i_10] [13] [i_0]);
                var_29 = (max((arr_35 [i_11 - 1] [i_11 - 1] [i_11]), (((arr_29 [i_11 - 2] [i_11 - 4] [3]) ? var_1 : (arr_35 [i_11 - 1] [i_11 + 2] [i_11])))));
            }

            for (int i_12 = 0; i_12 < 23;i_12 += 1)
            {
                var_30 = (max(var_30, ((max(((min(var_2, (arr_9 [i_0 + 1] [i_10])))), (((min(1, 1)) ? -18446744073709551606 : (arr_36 [i_0] [i_10] [i_12]))))))));

                for (int i_13 = 0; i_13 < 23;i_13 += 1)
                {
                    var_31 &= (~7000691429553935250);

                    /* vectorizable */
                    for (int i_14 = 0; i_14 < 23;i_14 += 1)
                    {
                        arr_45 [i_14] [8] [22] [i_13] [i_14] |= (var_6 * (arr_8 [i_14]));
                        var_32 |= (arr_44 [i_14] [i_0] [i_12] [i_10] [i_0]);
                    }
                    for (int i_15 = 2; i_15 < 21;i_15 += 1)
                    {
                        var_33 = ((!((!(arr_31 [i_15 - 1] [i_0 + 1])))));
                        var_34 += (min(26, 7000691429553935240));
                    }
                    arr_48 [i_0] [13] [i_10] [i_0] = ((((-(arr_31 [i_0 + 1] [i_12]))) / ((-(arr_31 [i_0 - 1] [i_0 + 2])))));
                }
                /* vectorizable */
                for (int i_16 = 0; i_16 < 23;i_16 += 1) /* same iter space */
                {
                    var_35 = (~var_3);
                    arr_52 [i_0] [i_0] [i_0] [i_0] [16] [i_16] = ((~(-32039 < var_8)));
                }
                /* vectorizable */
                for (int i_17 = 0; i_17 < 23;i_17 += 1) /* same iter space */
                {
                    var_36 = (min(var_36, (arr_17 [i_17])));
                    var_37 = (((var_8 && 4294967295) && (arr_28 [i_17] [i_0] [i_0] [i_0 + 3])));
                    var_38 = (-((0 ? var_6 : (arr_34 [i_0] [i_0]))));
                }
            }

            for (int i_18 = 0; i_18 < 23;i_18 += 1)
            {
                arr_58 [i_0] = (max(((((((18446744073709551601 ? -7000691429553935253 : (arr_9 [i_0] [i_0])))) ? var_10 : (arr_17 [i_0 + 2])))), (min((max(9223372036854775802, 1892749822477311478)), 3265026267))));
                var_39 = (min((min((arr_30 [i_0 - 1] [i_0 + 2] [i_0 + 3] [i_0 + 1] [i_0] [i_0 + 2]), (min(var_7, var_4)))), (~var_8)));
                var_40 |= (max(13, -40));
            }
        }
    }
    var_41 = 1461556067;
    /* LoopNest 3 */
    for (int i_19 = 0; i_19 < 14;i_19 += 1)
    {
        for (int i_20 = 2; i_20 < 11;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 1;i_21 += 1)
            {
                {
                    var_42 *= ((~((1 ^ (arr_16 [i_20 + 3] [i_21] [i_19])))));
                    var_43 = ((!(arr_6 [i_20] [i_20 - 1])));
                    arr_65 [i_21] [i_21] [i_20] = ((~(((((min(var_9, var_9))) != (arr_54 [i_19] [i_20 - 2] [i_20 - 2] [i_21] [i_21]))))));
                }
            }
        }
    }
    var_44 = ((!(((~(min(-7000691429553935253, var_9)))))));
    var_45 = (min(var_45, var_10));
    #pragma endscop
}
