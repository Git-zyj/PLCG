/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_7;

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = min((((min(-87, var_4)))), (arr_2 [i_0]));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_14 -= ((var_1 <= (arr_1 [i_0] [i_1])));
            var_15 = (((arr_5 [i_0] [i_1]) <= (!1)));
            var_16 = ((((((arr_6 [i_0]) ^ 1))) || 1087180323));
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            var_17 = (((arr_9 [i_2 + 1] [i_0] [i_0]) ? (((122 < (arr_8 [i_2])))) : ((125 ? var_10 : var_7))));

            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
                {
                    arr_15 [i_3] [i_2] [i_2] = (((arr_13 [i_2]) % var_0));
                    var_18 = (((((arr_14 [i_2 - 1] [i_2] [i_2] [1] [i_3]) + 2147483647)) >> (((arr_14 [i_2 + 1] [22] [i_4] [22] [i_3]) + 60))));
                }
                for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                {
                    var_19 = (((arr_12 [i_2] [12] [i_2 + 1]) ? (arr_12 [i_2] [i_5] [i_2 - 1]) : (arr_12 [i_2] [i_2] [i_2 - 1])));

                    for (int i_6 = 1; i_6 < 21;i_6 += 1)
                    {
                        var_20 = (max(var_20, (78 & var_9)));
                        var_21 = (((var_2 < 1) % ((-125 ? var_5 : (arr_0 [i_3])))));
                        var_22 = (max(var_22, (111 ^ 1)));
                        var_23 = ((-(arr_18 [i_0] [i_0] [i_2] [3] [i_5] [i_6 - 1])));
                    }
                }
                var_24 = var_0;
            }
            for (int i_7 = 3; i_7 < 21;i_7 += 1)
            {

                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    var_25 = ((0 != (((((arr_17 [i_0] [i_7] [19] [i_0] [i_0]) < (arr_23 [i_0] [i_2])))))));
                    var_26 = (((arr_10 [i_2] [i_2]) ? (arr_11 [i_7 - 1] [6] [i_2 - 1] [i_2 + 1]) : (arr_21 [i_7] [i_7] [i_0] [i_0])));
                }
                var_27 = -20;
                var_28 *= ((var_1 ? var_5 : (arr_14 [i_2] [i_2] [i_2] [12] [i_2])));
                arr_26 [2] [i_2 - 1] &= ((1 >> (((((arr_0 [i_7]) ? var_12 : 229)) + 24))));
            }
            var_29 = (((((arr_11 [i_0] [i_2] [i_2 + 2] [8]) + 2147483647)) >> (((arr_11 [i_0] [i_2] [i_2 + 2] [i_2]) + 42))));
        }
        var_30 = (max((-127 - 1), -650060987187201882));
        arr_27 [i_0] = ((((((max(3382227860, (arr_9 [i_0] [i_0] [i_0])))) ? var_7 : ((min((arr_19 [i_0] [i_0] [2] [2] [i_0] [i_0]), var_0))))) < ((max(var_5, var_2)))));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
    {
        var_31 = (var_6 <= var_12);
        /* LoopNest 3 */
        for (int i_10 = 1; i_10 < 20;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 1;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 23;i_12 += 1)
                {
                    {
                        var_32 = (-94 || var_11);
                        var_33 = (min(var_33, ((((arr_12 [4] [i_10 + 1] [i_10 + 3]) ? (arr_12 [18] [i_10] [i_9]) : (arr_12 [6] [i_9] [i_11 - 1]))))));
                        var_34 -= 64;

                        for (int i_13 = 0; i_13 < 23;i_13 += 1)
                        {
                            arr_40 [i_9] [i_11] [i_11] [i_10 - 1] [i_13] [i_13] [i_10] = (((arr_12 [i_11] [i_11 - 1] [i_10 - 1]) != (arr_12 [i_11] [i_11 - 1] [i_10 - 1])));
                            var_35 = (max(var_35, (((var_1 ? ((var_3 | (arr_14 [i_9] [i_12] [i_12] [i_9] [11]))) : var_8)))));
                        }
                    }
                }
            }
        }
        var_36 = (((arr_22 [i_9] [6]) != var_0));
    }
    for (int i_14 = 0; i_14 < 23;i_14 += 1) /* same iter space */
    {
        var_37 = (((arr_41 [i_14] [i_14]) >> ((((127 ? -1258139414 : 1)) + 1258139443))));

        for (int i_15 = 0; i_15 < 23;i_15 += 1)
        {
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 23;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 23;i_17 += 1)
                {
                    {

                        for (int i_18 = 3; i_18 < 21;i_18 += 1)
                        {
                            arr_53 [i_16] [i_18] = (arr_51 [i_14] [i_15] [i_16] [21] [i_17] [11]);
                            var_38 += var_5;
                            arr_54 [i_14] [i_16] [i_16] [i_17] [i_17] [i_18] = (((arr_45 [i_18 + 2]) && (arr_45 [i_18 - 3])));
                            var_39 = (min(var_39, ((min((arr_39 [i_17] [1] [i_17] [14] [i_18 + 1] [i_18 - 3] [i_18 - 3]), var_1)))));
                            var_40 = (((arr_2 [i_14]) ? (arr_21 [i_14] [i_16] [10] [i_18]) : ((min((min((arr_6 [i_14]), (arr_45 [i_14]))), var_10)))));
                        }
                        for (int i_19 = 2; i_19 < 21;i_19 += 1)
                        {
                            var_41 += (((var_2 && 1985466319) >= var_8));
                            var_42 *= (((((var_8 ? 27 : 4201454589))) || (arr_7 [i_19 + 1] [i_19 + 2])));
                            var_43 = (((max(((max(17, var_10))), -var_6)) != ((~(var_7 >> var_1)))));
                        }
                        for (int i_20 = 0; i_20 < 23;i_20 += 1)
                        {
                            var_44 = (max(var_44, var_2));
                            var_45 = (arr_25 [i_14] [i_15] [i_17] [9]);
                            var_46 = (((((-18 ? 116 : 0))) ? (((arr_6 [i_20]) | 92864336)) : var_6));
                        }
                        var_47 |= (arr_1 [i_14] [i_14]);
                        var_48 = ((255 >> (4117185482 - 4117185478)));
                    }
                }
            }
            var_49 = -var_2;
            var_50 = ((111 ? 0 : 1007484027));
            var_51 = ((((max(((((arr_12 [12] [i_14] [12]) < (arr_12 [20] [i_15] [i_15])))), var_8))) ? (arr_43 [i_14]) : (arr_6 [i_14])));
            var_52 += (((((arr_19 [i_14] [i_15] [12] [i_15] [i_14] [i_14]) ? ((var_12 ? (arr_14 [i_14] [12] [i_14] [i_15] [i_15]) : (arr_32 [i_14] [i_15] [i_15]))) : var_4)) + (arr_36 [0] [i_14] [0] [i_15] [6] [6])));
        }
        var_53 = 0;
    }
    var_54 = var_11;
    var_55 = (max(var_55, ((min(((var_4 ? var_3 : var_9)), var_3)))));
    #pragma endscop
}
