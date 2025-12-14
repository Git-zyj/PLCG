/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106486
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_4;
    var_17 |= ((((((840 & 1) ^ 1))) ? ((var_13 ? 230 : ((var_10 ? var_3 : var_6)))) : (((-((var_7 ? var_4 : var_1)))))));
    var_18 = -907868575088226428;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_19 += var_11;
            var_20 |= (max(59198, ((var_1 ? (arr_0 [i_0]) : var_12))));
            var_21 *= var_3;
            var_22 = (-907868575088226428 ^ -119);
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_23 = (arr_6 [i_0] [i_2] [i_2]);
            var_24 = (max(var_24, -8408160703823873083));

            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                var_25 = var_0;
                var_26 = (max(var_26, -907868575088226428));
                arr_9 [i_0] [i_0] [i_0] = max(((-(var_1 / var_12))), var_2);
                var_27 = (min(((var_3 ^ ((-125 ? (arr_3 [i_0] [i_2]) : (arr_8 [i_0] [i_2] [i_3]))))), 1));
            }
            /* vectorizable */
            for (int i_4 = 3; i_4 < 10;i_4 += 1)
            {
                arr_13 [i_2] [i_0] = (arr_5 [i_4 + 1]);
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 8;i_6 += 1)
                    {
                        {
                            var_28 = (min(var_28, (arr_8 [i_0] [i_2] [i_5])));
                            var_29 = (((arr_10 [i_0] [i_2] [i_0] [i_6 + 2]) + (arr_10 [i_2] [i_2] [i_0] [i_6 + 3])));
                            var_30 = (min(var_30, (((var_14 | (arr_16 [i_0] [i_2] [i_2] [i_4] [i_5] [i_5] [i_6]))))));
                            var_31 = (max(var_31, (var_11 ^ 148)));
                        }
                    }
                }
                arr_19 [i_0] = (arr_6 [i_4 - 2] [i_4] [i_4 - 1]);
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 8;i_8 += 1)
                    {
                        {
                            var_32 += var_2;
                            var_33 = 1;
                        }
                    }
                }
            }
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {

                for (int i_10 = 3; i_10 < 10;i_10 += 1)
                {
                    arr_33 [i_10] [i_0] [1] = 5343807368916404183;
                    var_34 *= ((((max(var_15, (arr_14 [i_9] [i_10 - 2] [i_10 - 2] [i_10 - 2])))) ? var_6 : (arr_14 [i_0] [i_10 - 1] [i_10 - 1] [i_10 - 2])));
                }
                for (int i_11 = 2; i_11 < 10;i_11 += 1)
                {

                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        arr_39 [i_0] [i_2] [i_0] [i_11] [i_12] = (max(-25333685728938188, (max(57, 4723732974053583549))));
                        arr_40 [i_0] [i_2] [i_9] [i_11 + 1] [i_12] = 0;
                        arr_41 [i_0] [i_0] [i_0] [i_11] [i_0] = -683446860;
                        var_35 *= var_13;
                    }
                    for (int i_13 = 0; i_13 < 11;i_13 += 1)
                    {
                        var_36 = 29972;
                        arr_44 [i_0] [i_2] [i_13] [i_13] |= var_3;
                    }
                    for (int i_14 = 0; i_14 < 11;i_14 += 1)
                    {
                        var_37 = (max(5343807368916404183, ((var_7 * (arr_21 [i_2] [i_11 - 1] [i_0] [i_2])))));
                        arr_47 [i_0] [i_2] [i_14] [i_11] [i_0] = ((~(((arr_15 [i_0] [i_2] [i_9] [i_0] [i_14]) << (145372857 - 145372839)))));
                    }
                    var_38 ^= (max(((~(arr_21 [2] [i_11] [i_11] [i_2]))), var_7));
                    arr_48 [i_0] [i_9] [i_9] [i_11] |= (max((((arr_43 [i_11] [i_11] [i_2] [i_11] [i_0]) + (arr_15 [i_0] [i_2] [i_2] [i_11] [i_2]))), (max((-1373843213 * var_11), (((arr_0 [i_2]) ? 242 : var_1))))));
                }
                var_39 = (arr_25 [i_0] [i_2] [i_9]);
                var_40 = (((4186 ? 14974393422976396064 : 14)));
            }
        }

        for (int i_15 = 3; i_15 < 10;i_15 += 1)
        {
            var_41 = (15553 > 170);
            var_42 = (min(var_42, ((((arr_28 [i_0] [i_0] [i_15]) ? (121 | 33055) : (((15482921403609997536 || (!2018563136007133128)))))))));
            var_43 = var_14;
        }
        /* vectorizable */
        for (int i_16 = 2; i_16 < 10;i_16 += 1)
        {
            arr_53 [i_16] [i_16] |= 19;
            var_44 = var_11;
            arr_54 [i_0] [i_16] [i_0] |= var_14;
        }
        for (int i_17 = 2; i_17 < 10;i_17 += 1)
        {
            arr_58 [i_0] [1] [i_0] = 3051780731;
            /* LoopNest 2 */
            for (int i_18 = 0; i_18 < 11;i_18 += 1)
            {
                for (int i_19 = 1; i_19 < 8;i_19 += 1)
                {
                    {
                        var_45 = 8417642417201878826;
                        arr_65 [1] [6] [i_0] [5] [i_19] [4] = 2963822670099554098;
                    }
                }
            }
        }
    }
    for (int i_20 = 0; i_20 < 23;i_20 += 1)
    {
        var_46 = 11847569121893751145;
        var_47 *= 1;
        var_48 = (max(2963822670099554069, var_3));
        arr_68 [i_20] = ((max(((var_5 ? 0 : -907868575088226428), 1))));
    }
    var_49 *= (((1 == 0) != ((max(11108, 1)))));
    #pragma endscop
}
