/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -118;
    var_17 = (max(var_17, (!var_10)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {

                        for (int i_4 = 2; i_4 < 23;i_4 += 1)
                        {
                            var_18 = (max(var_18, var_3));
                            var_19 = (max((var_15 && var_6), (max(var_4, var_1))));
                            var_20 = ((~(((!(arr_2 [i_4 - 1]))))));
                            var_21 = (-((~(arr_13 [i_4 + 1] [i_4 - 2] [i_4 - 1] [i_4 + 2] [i_4 + 1]))));
                            var_22 = (max((((arr_11 [i_4] [i_4] [i_4 - 1] [i_4 - 2] [i_4 + 2] [i_4 - 2] [i_4]) ? ((min(-16101, var_5))) : var_14)), 127));
                        }
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            arr_16 [23] = var_9;
                            var_23 *= ((((max((arr_0 [i_1]), var_8))) ? (max((-127 - 1), 2975230704)) : (arr_0 [i_0])));
                            var_24 = (min(((min(var_6, (arr_14 [i_0] [i_1] [i_2] [i_3] [i_5])))), var_7));
                            var_25 = (((min(var_8, var_0)) <= (((-(-127 - 1))))));
                            var_26 = (max(var_26, ((((((max(var_3, var_7)))) ? (((-127 - 1) ? ((((!(arr_15 [1] [4] [22] [1] [1] [22]))))) : (min(var_7, var_15)))) : ((((var_5 ? var_5 : var_15)))))))));
                        }
                        for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
                        {
                            var_27 -= ((~(((!(((var_12 ? var_12 : var_12))))))));
                            arr_21 [i_0] [i_1] [0] [i_3] [i_6] [i_1] [i_0] = ((-(~var_3)));
                        }
                        for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
                        {
                            var_28 -= -97;
                            arr_24 [i_0] [i_7] [i_0] [i_3] [i_7] = (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]);
                        }
                        var_29 = ((-(arr_13 [i_0] [i_1] [i_2] [i_3] [i_3])));
                        arr_25 [22] = (((((var_11 ? (-127 - 1) : 921018859438160215))) ? -var_6 : ((min((arr_22 [i_3] [i_2] [i_1] [i_0]), (arr_22 [i_0] [i_1] [i_2] [i_3]))))));
                    }
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            var_30 = ((-var_10 ? ((var_9 ? (arr_27 [i_0]) : (-127 - 1))) : ((min(113, (arr_27 [i_0]))))));
                            arr_33 [i_8] [i_1] [1] [i_8] [i_9] = ((((var_4 ? (max(971364584486257148, 127)) : -1)) + (min(var_13, var_1))));
                        }
                        var_31 *= var_3;
                    }
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        var_32 = ((((max(97, (max(var_1, var_9))))) ? var_1 : var_15));
                        var_33 *= ((((((((var_1 ? var_4 : 9151077277648205414))) ? var_6 : var_14))) ? (!76) : ((var_1 ? var_6 : ((1 ? var_1 : var_11))))));

                        for (int i_11 = 0; i_11 < 25;i_11 += 1)
                        {
                            var_34 = ((!((min((arr_36 [i_0] [i_0] [i_0] [i_0] [i_11] [i_10]), var_8)))));
                            arr_38 [i_10] [i_10] = ((((9151077277648205414 ? 9151077277648205440 : 47470))) ? (arr_2 [i_2]) : (~var_15));
                        }
                        var_35 = var_14;
                        var_36 = (max(var_36, (arr_37 [8] [i_2] [8])));
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 23;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            {
                                var_37 = 9151077277648205438;
                                var_38 = ((~(~var_6)));
                            }
                        }
                    }
                    var_39 = (((((max(var_10, (arr_41 [i_0] [i_1] [i_1] [18] [18]))) ? var_9 : var_9))));
                    var_40 = (((((((min(9151077277648205414, var_0))) ? (~var_10) : (~var_2)))) ? var_6 : (max(var_13, var_1))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 22;i_14 += 1)
    {
        for (int i_15 = 1; i_15 < 18;i_15 += 1)
        {
            {
                arr_49 [i_14] = var_13;
                /* LoopNest 2 */
                for (int i_16 = 2; i_16 < 18;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 22;i_17 += 1)
                    {
                        {
                            var_41 = (min(var_41, (((((max(var_11, ((var_14 ? var_6 : var_15))))) ? (((max((arr_52 [i_15 + 4] [i_14]), (arr_52 [i_15 + 3] [i_15]))))) : var_15)))));

                            for (int i_18 = 0; i_18 < 22;i_18 += 1)
                            {
                                arr_56 [i_15] = (!var_1);
                                var_42 -= (min(9151077277648205444, (-127 - 1)));
                            }
                            for (int i_19 = 4; i_19 < 21;i_19 += 1)
                            {
                                var_43 = var_5;
                                var_44 = (max(var_44, (((-(arr_50 [i_15 - 1] [i_15 + 1]))))));
                            }
                            for (int i_20 = 0; i_20 < 22;i_20 += 1)
                            {
                                arr_63 [i_15] [20] [i_15] [i_15] [i_15] [i_15 + 1] = ((((max((arr_52 [i_14] [i_16]), (arr_61 [i_14] [i_15 + 1] [i_14] [i_16 - 2] [i_17] [i_14])))) ? (min((((-1 ? var_2 : var_3))), (min(var_13, var_1)))) : 1));
                                arr_64 [i_14] [i_16 + 1] = (((var_8 ? (arr_52 [i_15 - 1] [i_16 + 2]) : (arr_52 [i_15 + 2] [i_16 + 2]))));
                                arr_65 [i_20] [i_17] [i_16] [i_15] [i_15 + 4] [i_14] = (min((((4145763603541682941 ? var_10 : var_10))), var_14));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
