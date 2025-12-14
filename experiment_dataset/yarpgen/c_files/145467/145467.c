/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_10 = var_4;

            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                var_11 *= ((!(((4293918720 ? (arr_0 [i_0]) : 4269)))));
                arr_10 [i_0] [i_1] [i_2] = (arr_6 [i_2 - 1] [i_2 + 2] [i_2 - 1]);
                var_12 = ((~80622090) ? (arr_8 [i_2 - 1] [i_2 + 2] [i_2 - 1]) : (var_9 | var_2));
            }
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    arr_16 [i_0] [i_1] [i_3] [i_4] = -158529733877841645;
                    arr_17 [i_1] = ((218 ? (arr_4 [i_4] [i_1] [i_0]) : (arr_4 [i_0] [i_1] [i_3])));
                    arr_18 [i_0] [i_4] = ((var_5 ? 2753134007 : 27218));
                    var_13 = (var_8 && -4566465113645377552);
                }
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 9;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        {
                            var_14 = (((((!(arr_1 [i_5 - 3] [i_3])))) != ((-822894428 - (arr_11 [i_0] [i_3] [i_6])))));
                            var_15 = (max(var_15, (arr_6 [i_1] [i_3] [i_6])));
                            var_16 ^= (((arr_5 [i_5 - 2] [i_5 - 1]) == (arr_5 [i_5 - 1] [i_5 - 2])));
                            arr_24 [i_3] [i_1] [i_1] [i_5 - 3] [i_6] = ((-(arr_23 [i_6] [i_5 - 2] [i_5 - 3] [i_5 - 3] [i_5 - 3])));
                        }
                    }
                }
                var_17 = (1127003508 * 32742);
                arr_25 [i_0] [i_1] [i_3] = (((-27219 + 2147483647) << (27218 - 27218)));
            }
            var_18 = (max(var_18, (((-27247 && (arr_21 [i_0] [i_1]))))));
        }
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            arr_29 [i_0] &= 263700585;

            for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
            {
                var_19 += 2408852319;
                var_20 = (min(var_20, (((-((0 ? var_4 : 27216)))))));
                var_21 &= 27238;
            }
            for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
            {

                for (int i_10 = 0; i_10 < 10;i_10 += 1)
                {
                    arr_38 [i_0] [i_7] [i_9] [i_10] = ((arr_11 [i_0] [i_7] [i_9]) ? var_0 : 127);
                    arr_39 [i_0] [i_0] &= (((arr_21 [i_0] [i_7]) ? (arr_4 [i_7] [i_9] [i_10]) : ((((arr_35 [i_0] [i_7] [i_10]) ? (arr_33 [i_0] [i_9] [i_10]) : (arr_23 [i_0] [i_7] [i_9] [i_10] [i_7]))))));
                    var_22 -= (27222 ? var_0 : (arr_6 [i_0] [i_0] [i_0]));
                }
                for (int i_11 = 0; i_11 < 10;i_11 += 1)
                {
                    var_23 = (((3802429976172672583 == (arr_34 [i_0]))));
                    var_24 = ((-27223 ? ((((arr_28 [i_11] [i_9] [i_0]) * var_0))) : (arr_26 [i_0])));
                    arr_43 [i_0] [i_11] [i_9] [i_11] = ((arr_9 [i_0] [i_9]) ? (-22996 == var_3) : ((-27219 ? 858563438 : 29407)));
                    var_25 = ((-(arr_12 [i_0])));
                    var_26 = (((arr_13 [i_9] [i_9] [i_9]) ? 21299 : (arr_13 [i_0] [i_0] [i_0])));
                }
                for (int i_12 = 0; i_12 < 10;i_12 += 1)
                {
                    var_27 = (arr_14 [i_7] [i_9]);
                    arr_46 [i_0] = (!(arr_23 [i_12] [i_9] [i_9] [i_7] [i_0]));
                    arr_47 [i_12] [i_12] [i_12] [i_12] = (~-27230);
                    arr_48 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (31826 % (arr_15 [i_12] [i_7] [i_7] [i_12]));
                }
                for (int i_13 = 0; i_13 < 10;i_13 += 1)
                {
                    var_28 = (min(var_28, (arr_49 [i_13] [i_13] [i_9] [i_9] [i_7] [i_0])));
                    arr_53 [i_0] [i_0] [i_0] = (~var_9);
                    var_29 += -1228314702385952134;
                    arr_54 [i_0] [i_7] [i_9] [i_13] = (((arr_5 [i_9] [i_0]) ? -var_4 : ((((arr_44 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) - var_6)))));
                }

                for (int i_14 = 0; i_14 < 10;i_14 += 1)
                {
                    var_30 = (arr_11 [i_7] [i_7] [i_9]);
                    var_31 *= ((~(27244 < 3176808475)));
                }
                for (int i_15 = 0; i_15 < 10;i_15 += 1)
                {
                    var_32 = (max(var_32, 858563438));
                    var_33 += ((((var_3 || (arr_36 [i_0]))) ? (((arr_61 [i_0] [i_7] [i_9] [i_15] [i_15] [i_0]) ? var_8 : var_2)) : var_4));
                }
            }

            for (int i_16 = 0; i_16 < 10;i_16 += 1)
            {
                var_34 = 33698;
                var_35 = 1073479680;
                var_36 &= -22996;
                arr_64 [i_0] [i_7] [i_16] = (arr_3 [i_0]);
            }
            var_37 -= (arr_11 [i_0] [i_0] [i_0]);
        }
        var_38 = ((-((var_7 ? 770298594 : (arr_41 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
        var_39 = (max(var_39, (arr_34 [i_0])));
        var_40 = (((arr_27 [i_0] [i_0] [i_0]) != ((((arr_12 [i_0]) != var_9)))));
    }
    var_41 = var_3;
    var_42 = var_2;
    #pragma endscop
}
