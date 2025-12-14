/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_14 -= 57758;
                    var_15 &= 7758;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3] [i_4] = 27468;
                                arr_16 [i_0] [i_1 + 1] [i_1 - 1] [i_2] [i_1 + 1] [i_3] [i_1 + 1] = ((-(!2351155256)));
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] = ((!(!57763)));
                                var_16 = (max(var_16, (+-27468)));
                                arr_18 [i_0] [i_1] [i_1] = 27454;
                            }
                        }
                    }
                    arr_19 [i_2] [i_2] [i_2] = 57759;
                }
            }
        }
    }
    var_17 = var_1;

    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_24 [i_5] [i_5] = 391017595;

        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            arr_27 [i_5] [i_6] [i_6] = 35569;
            arr_28 [i_5] [i_6] [i_5] = -48571;

            for (int i_7 = 2; i_7 < 10;i_7 += 1) /* same iter space */
            {
                var_18 = 241;

                for (int i_8 = 1; i_8 < 12;i_8 += 1) /* same iter space */
                {

                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        arr_35 [i_5] [i_6] [i_5] [i_7] [i_8] [i_7] = (~1957253818);
                        var_19 = (max(var_19, 57763));
                    }
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        arr_38 [i_7] [i_7] = 200964251;
                        var_20 = (!4195);
                        arr_39 [i_7] = 61358;
                    }
                    arr_40 [i_7] = 1957253818;
                    var_21 = -12819855481220372947;
                }
                for (int i_11 = 1; i_11 < 12;i_11 += 1) /* same iter space */
                {
                    arr_44 [i_5] [i_7] [i_5] [i_5] = 9153469620358813891;
                    var_22 = (min(var_22, -274877906943));
                    var_23 ^= (-9223372036854775807 - 1);
                }
            }
            for (int i_12 = 2; i_12 < 10;i_12 += 1) /* same iter space */
            {
                var_24 ^= (!-127);
                arr_48 [i_5] [i_5] [i_5] = (-2147483647 - 1);
            }
            for (int i_13 = 0; i_13 < 13;i_13 += 1)
            {
                var_25 = 251;
                var_26 = (~-8691095074094275426);
            }
            for (int i_14 = 2; i_14 < 11;i_14 += 1)
            {
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 13;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 13;i_16 += 1)
                    {
                        {
                            arr_59 [i_5] [i_6] [i_14] [i_5] [i_5] [i_16] = -0;
                            var_27 = (max(var_27, 8691095074094275426));
                        }
                    }
                }

                for (int i_17 = 1; i_17 < 12;i_17 += 1)
                {
                    arr_62 [i_6] = (!7772);
                    arr_63 [i_17] [i_5] [i_6] [i_6] [i_5] = (!846464005);
                    var_28 ^= (~-3602);
                    var_29 = (min(var_29, 1));
                }
                for (int i_18 = 3; i_18 < 10;i_18 += 1)
                {
                    arr_66 [i_5] [i_6] [i_14 - 2] [i_18] = (~70);
                    arr_67 [i_5] [i_14] = -14;
                    arr_68 [i_18] [i_14 - 2] [i_5] [i_5] = 9153469620358813882;
                }
            }
        }
        for (int i_19 = 1; i_19 < 12;i_19 += 1)
        {
            var_30 = (max(var_30, (!4198)));
            var_31 = (!4094003039);
        }
        for (int i_20 = 0; i_20 < 13;i_20 += 1)
        {
            var_32 = (!31924);
            arr_75 [i_5] [i_20] = 1;
            var_33 = -3602;
        }
    }
    for (int i_21 = 0; i_21 < 23;i_21 += 1)
    {
        /* LoopNest 2 */
        for (int i_22 = 1; i_22 < 22;i_22 += 1)
        {
            for (int i_23 = 0; i_23 < 23;i_23 += 1)
            {
                {

                    for (int i_24 = 0; i_24 < 23;i_24 += 1)
                    {
                        var_34 = (max(var_34, 5626888592489178662));

                        for (int i_25 = 0; i_25 < 23;i_25 += 1)
                        {
                            var_35 = 56662;
                            arr_90 [i_21] [i_22] [i_23] [i_22] [i_24] [i_22] [i_25] = (--3467375729);
                        }
                        for (int i_26 = 0; i_26 < 23;i_26 += 1)
                        {
                            arr_93 [i_21] [i_21] [i_23] [i_21] [i_26] [i_21] |= ((!(((~(!57764))))));
                            arr_94 [i_21] [i_21] [i_23] [i_24] [i_26] = (!7772);
                            arr_95 [i_21] [i_21] [i_22 + 1] [i_23] [i_24] [i_26] = (!-1);
                            var_36 = (!12819855481220372971);
                        }
                    }
                    /* vectorizable */
                    for (int i_27 = 0; i_27 < 23;i_27 += 1)
                    {
                        var_37 |= (-2147483647 - 1);
                        arr_100 [i_21] [i_21] [i_23] [i_27] [i_27] = ((-(-127 - 1)));
                        arr_101 [i_27] = -4178;
                        var_38 = 2147483635;
                    }
                    arr_102 [i_21] [i_22] = (!(~-2147483635));
                }
            }
        }
        var_39 += 992;
        arr_103 [i_21] = (--121);
        arr_104 [i_21] [i_21] = 59438;
    }
    var_40 = var_10;
    #pragma endscop
}
