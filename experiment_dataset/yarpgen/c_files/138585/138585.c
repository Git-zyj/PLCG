/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_8;
    var_18 -= var_12;
    var_19 = (max(var_19, (!var_1)));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, ((((((13014161183159712756 - (arr_8 [i_0] [i_1] [i_2] [i_2 - 3])))) ? (arr_8 [i_2 - 3] [i_1] [i_2] [i_2 - 2]) : (min(536870912, (arr_8 [i_1] [i_2] [i_0] [i_2 - 1]))))))));
                    var_21 = (arr_4 [i_1]);
                    var_22 -= ((((min(((((arr_0 [i_2]) | var_16))), (max(2785931842, (arr_2 [i_1] [i_1])))))) ? ((((!(arr_5 [i_0] [i_1] [i_2]))))) : (var_14 != 32)));
                }
            }
        }
        var_23 -= (arr_0 [i_0]);
    }
    for (int i_3 = 4; i_3 < 13;i_3 += 1)
    {
        arr_11 [i_3] = (((arr_9 [i_3 - 2]) % (arr_10 [i_3 - 1] [i_3])));

        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            var_24 = (arr_12 [i_3 + 3] [i_3] [i_4]);
            arr_14 [i_4] = (arr_10 [i_3 - 1] [i_4 - 1]);
        }
        /* vectorizable */
        for (int i_5 = 2; i_5 < 15;i_5 += 1)
        {
            var_25 |= (((arr_13 [i_3 + 1] [i_5 - 2]) <= -33));
            arr_18 [i_3] [i_5] = var_10;
            arr_19 [i_5] [i_5] = -14;

            for (int i_6 = 2; i_6 < 14;i_6 += 1)
            {
                var_26 = ((((13 ? 9 : (arr_13 [i_3] [i_5 - 1]))) | ((((arr_17 [i_3 + 3] [i_5 + 1] [i_5]) ^ var_1)))));
                var_27 &= var_12;
                arr_22 [i_3] [i_3] [i_5] = ((var_3 ? (((arr_16 [i_3]) | var_11)) : 16));
                var_28 = (((arr_15 [i_6 + 1] [i_6 + 2] [i_6 + 1]) - var_6));
            }
            for (int i_7 = 1; i_7 < 14;i_7 += 1)
            {

                for (int i_8 = 1; i_8 < 13;i_8 += 1) /* same iter space */
                {
                    var_29 = (9014300151586891560 - var_0);
                    arr_28 [i_3 - 2] [i_5] [i_3] [i_8 + 3] [i_3 + 1] = (((arr_17 [i_3] [i_5 - 1] [i_5]) != 14));
                }
                for (int i_9 = 1; i_9 < 13;i_9 += 1) /* same iter space */
                {

                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        var_30 = (min(var_30, (arr_33 [i_3 - 2] [i_10] [i_7])));
                        var_31 = ((var_8 > (arr_33 [i_3] [i_5] [i_3 - 1])));
                        var_32 = (arr_31 [i_3] [i_3 - 2] [i_3] [i_3] [i_3] [i_3]);
                    }
                    arr_34 [i_5] [i_5] = ((-43 ? 1 : var_10));
                }
                for (int i_11 = 1; i_11 < 13;i_11 += 1) /* same iter space */
                {

                    for (int i_12 = 0; i_12 < 16;i_12 += 1)
                    {
                        arr_41 [i_5] [i_5] = arr_29 [i_5] [i_5];
                        var_33 = ((-1 ^ ((-(arr_27 [i_12] [i_5])))));
                        var_34 ^= (arr_23 [i_3 - 4] [i_3 - 4]);
                    }
                    arr_42 [i_3 - 3] [i_3] [i_3] [i_3] [i_3] [i_3] &= (arr_30 [i_7] [i_11] [i_11 + 3] [i_11 + 2]);
                    var_35 = (arr_16 [i_3 + 3]);
                    var_36 = (((((15 - (arr_21 [i_5 + 1] [i_5])))) || var_10));

                    for (int i_13 = 1; i_13 < 13;i_13 += 1)
                    {
                        arr_45 [i_3] [i_5] [i_3] [i_11 + 2] [i_11] [i_5] |= (arr_33 [i_3] [i_3] [i_7 - 1]);
                        arr_46 [i_3] [i_5 - 1] [i_7 + 2] [i_11 - 1] [i_5] = (((((var_5 ? 17624 : (arr_44 [i_5] [i_5])))) ? (arr_44 [i_5] [i_13 - 1]) : (arr_35 [i_5] [i_3 - 2] [i_7 - 1])));
                        var_37 &= (((arr_31 [i_3] [i_5] [i_7] [i_5] [i_13] [i_13 - 1]) ? 0 : 175));
                    }
                }
                arr_47 [i_3 + 2] [i_3 + 2] [i_5] = (arr_29 [i_5] [i_5 - 1]);
                var_38 = (arr_25 [i_7 - 1] [i_7 + 1] [i_3 - 4] [i_7 - 1] [i_5]);
                var_39 = ((!(arr_21 [i_7] [i_5])));
                var_40 = ((-(arr_17 [i_5] [i_5] [i_5])));
            }
            for (int i_14 = 1; i_14 < 1;i_14 += 1)
            {
                var_41 = (arr_24 [i_5]);
                arr_51 [i_3] [i_3] [i_14] [i_14 - 1] |= (((arr_27 [i_5] [i_5 + 1]) ? var_9 : (arr_27 [i_5] [i_5 + 1])));
            }
        }
        /* vectorizable */
        for (int i_15 = 4; i_15 < 15;i_15 += 1)
        {
            var_42 = (((!-48) && (arr_15 [i_3 + 3] [i_15 + 1] [i_15 - 3])));
            var_43 = (((arr_26 [i_3 - 4] [i_15] [i_3 - 3] [i_3]) % ((((arr_49 [i_3 - 3] [i_3 + 1] [i_3 + 2] [i_3 - 4]) ^ 14)))));
        }
        var_44 = ((((46704 ? (arr_48 [i_3] [i_3] [i_3]) : (max(85, 4294967295))))) ? (((min(2047, (arr_20 [i_3] [i_3 - 1]))) * (arr_35 [i_3] [i_3] [i_3 + 2]))) : ((((var_15 / (arr_15 [i_3] [i_3 - 1] [i_3]))) * ((var_1 ? (arr_30 [i_3] [i_3] [i_3] [i_3]) : var_16)))));
    }
    var_45 += ((var_13 ? var_10 : ((15964809375929953498 ? ((max(var_6, var_10))) : ((var_3 ? -23682 : 10))))));
    #pragma endscop
}
