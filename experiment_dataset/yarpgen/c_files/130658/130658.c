/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-((((max(4183263867274872788, 188252333))) ? (-218428300100511930 / 12194080648892791077) : var_4))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] |= var_12;

        for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] = 188252313;
            var_18 = (((max(4106714969, var_8))) ? (((var_4 >= (arr_4 [i_0] [i_0])))) : 1);
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
        {
            var_19 = -20540;

            for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
            {
                var_20 = (var_1 ^ (var_14 | var_9));
                arr_11 [i_2] [i_2] [i_3] = (var_16 <= -25815);
            }
            for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
            {
                var_21 = ((var_11 % (arr_7 [i_4] [i_2] [i_0])));
                var_22 = (max(var_22, 218));
                var_23 = ((25815 ? (arr_14 [i_2]) : var_16));
            }
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                var_24 = var_1;

                for (int i_6 = 2; i_6 < 7;i_6 += 1)
                {

                    for (int i_7 = 1; i_7 < 9;i_7 += 1)
                    {
                        arr_23 [i_7 + 1] [i_2] [i_5] [i_2] [i_0] = ((4106714962 << (5758261103043598190 - 5758261103043598164)));
                        arr_24 [i_2] [i_6] [i_6] [i_6] [i_7] [i_7] [i_6] = 188252335;
                        arr_25 [i_2] = (-5383945959974671662 % 4);
                    }
                    var_25 = (min(var_25, -9124190219639510019));
                    arr_26 [i_2] = (!-6076);
                }
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    var_26 = -25815;
                    var_27 ^= (4106714975 << 21);
                    arr_29 [i_2] [i_2] [i_5] [i_5] [i_8] = var_6;
                }
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    var_28 = (((arr_0 [i_0] [i_9]) || var_8));
                    arr_34 [i_2] [i_2] [i_2] = ((-var_6 && (var_8 - -5155)));
                    var_29 = arr_20 [i_5] [i_5] [i_5] [i_9] [i_5] [i_5];
                }
                for (int i_10 = 1; i_10 < 8;i_10 += 1)
                {
                    arr_39 [i_0] [i_2] [i_2] [i_2] = (78 >= var_6);
                    var_30 = -3239651352;
                    var_31 = var_15;
                }
            }
            var_32 = ((!(arr_17 [i_2] [i_2] [i_0] [i_0])));
        }
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 10;i_11 += 1) /* same iter space */
    {
        var_33 = 3393;
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 10;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 10;i_13 += 1)
            {
                {
                    var_34 = ((arr_16 [i_11] [i_13] [i_13] [i_13]) ? (arr_16 [i_11] [i_13] [i_12] [i_13]) : (arr_16 [i_11] [i_12] [i_13] [i_13]));
                    arr_49 [i_11] [i_12] [i_13] [i_13] = ((-(arr_43 [i_13] [i_12] [i_11])));
                }
            }
        }
    }
    for (int i_14 = 0; i_14 < 10;i_14 += 1) /* same iter space */
    {
        arr_52 [i_14] = (!1);
        arr_53 [i_14] = (max(var_10, var_13));
    }
    for (int i_15 = 0; i_15 < 18;i_15 += 1)
    {
        var_35 = (1 & 4);
        arr_56 [i_15] [i_15] = (~-7246855062116328182);
        /* LoopNest 2 */
        for (int i_16 = 1; i_16 < 15;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 18;i_17 += 1)
            {
                {
                    var_36 = -6805;

                    /* vectorizable */
                    for (int i_18 = 0; i_18 < 18;i_18 += 1)
                    {
                        var_37 = var_4;
                        arr_66 [i_15] = ((var_0 / (arr_65 [i_15] [i_16 - 1] [i_16 + 2] [i_17] [i_18] [i_15])));
                    }
                    arr_67 [i_15] [i_17] = ((-(1 <= -12991)));
                }
            }
        }
        var_38 = ((7186750351119826581 ? (((78 ? 3285726901 : -6805))) : 63));
    }
    #pragma endscop
}
