/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123282
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= var_7;
    var_18 &= var_6;
    var_19 ^= ((((min(((var_10 ? var_7 : var_2)), (4294967295 != 1)))) ? ((((max(var_4, var_9))))) : var_12));
    var_20 ^= -1;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [12] = var_15;
        var_21 = (min(var_21, var_13));
        var_22 = var_15;
        arr_3 [i_0] [i_0] = min(var_12, (arr_0 [i_0]));
        var_23 = (min(((min(var_12, (arr_0 [i_0])))), ((max(((var_13 ? var_11 : var_15)), (arr_1 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_24 = (max(var_24, 1));
        arr_6 [i_1] [i_1] = var_5;

        /* vectorizable */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_25 = (max(var_25, (arr_1 [i_1] [i_2])));
                var_26 = ((7 < (arr_1 [i_1] [i_1])));

                for (int i_4 = 2; i_4 < 12;i_4 += 1)
                {
                    var_27 = (((arr_9 [i_4 - 1] [i_1] [i_1] [i_4 + 2]) & (arr_13 [i_1] [i_1])));
                    var_28 = (max(var_28, (arr_0 [i_4 + 1])));
                    var_29 = (((arr_5 [1]) << (((((arr_1 [i_1] [i_1]) ? var_3 : var_5)) - 1761184181))));
                }
                for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
                {
                    var_30 = ((((((arr_4 [5]) - -32762))) ? var_2 : var_1));
                    var_31 ^= var_14;
                    var_32 ^= var_10;
                    arr_17 [i_5] [0] [i_1] [i_1] &= (arr_4 [i_2]);
                }
                for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
                {

                    for (int i_7 = 1; i_7 < 12;i_7 += 1)
                    {
                        var_33 = (min(var_33, var_10));
                        var_34 = (min(var_34, (var_10 * 15236163107819488639)));
                        var_35 ^= ((((13 ? 117 : -24176)) >> (arr_16 [i_2] [i_3])));
                    }
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        var_36 = ((var_16 <= ((var_8 ? var_14 : var_7))));
                        var_37 ^= (arr_13 [2] [6]);
                        var_38 = (~var_7);
                        arr_27 [i_1] = (arr_25 [i_2] [i_3] [i_6] [i_8]);
                    }
                    var_39 ^= -4294967295;
                }
            }
            var_40 ^= (33554431 ^ -10393);
            arr_28 [i_1] = var_4;
        }
        for (int i_9 = 2; i_9 < 12;i_9 += 1)
        {
            var_41 = (!19);
            var_42 ^= ((((arr_32 [10]) ^ 253)));
            arr_33 [i_1] [1] [8] = 1;
        }
        for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
        {
            arr_37 [i_1] [i_1] [i_10] = (~var_2);
            var_43 = ((((((var_4 > (min((arr_20 [i_10] [i_10] [i_10] [13]), var_0)))))) < (((max(var_12, 50956)) + (!var_15)))));
            var_44 = (min(var_44, var_5));
        }
        for (int i_11 = 0; i_11 < 14;i_11 += 1) /* same iter space */
        {
            arr_41 [i_1] = (arr_40 [i_1] [i_1]);
            var_45 = ((((((((10392 ? (arr_16 [i_1] [i_11]) : var_13))) ? var_7 : ((min((arr_31 [i_1]), 3)))))) ? (((((arr_13 [i_1] [i_11]) > (arr_31 [i_1]))))) : (min((arr_13 [i_11] [i_1]), (min(var_5, 15940))))));
        }
    }
    /* vectorizable */
    for (int i_12 = 3; i_12 < 18;i_12 += 1)
    {

        for (int i_13 = 1; i_13 < 20;i_13 += 1)
        {
            arr_48 [i_12] = (arr_44 [i_13]);
            /* LoopNest 3 */
            for (int i_14 = 0; i_14 < 21;i_14 += 1)
            {
                for (int i_15 = 3; i_15 < 19;i_15 += 1)
                {
                    for (int i_16 = 4; i_16 < 20;i_16 += 1)
                    {
                        {
                            var_46 = (arr_51 [i_15 - 1] [i_15] [i_15 + 2] [14]);
                            var_47 = (max(var_47, ((((arr_43 [i_16]) ? var_10 : var_10)))));
                            arr_56 [i_14] [i_12] = (arr_50 [i_16] [0] [0]);
                            arr_57 [i_12] = -32762;
                        }
                    }
                }
            }
            var_48 = (max(var_48, 2616039119));
        }
        var_49 ^= ((!(arr_50 [i_12 - 2] [i_12 - 3] [i_12 - 1])));
        arr_58 [i_12] = (arr_52 [i_12 - 1] [i_12]);
        var_50 ^= (~var_12);
    }
    #pragma endscop
}
