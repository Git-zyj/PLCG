/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_16 = ((max((arr_0 [i_1] [i_0 + 1]), var_13)) / var_1);
                    arr_11 [i_0] = ((((((max((arr_2 [i_0] [i_2]), var_8)) & ((((arr_2 [i_0] [i_1]) ? (arr_0 [i_2] [i_2]) : var_12)))))) ? (max((((var_0 ? (arr_6 [i_2] [i_2] [i_2]) : (-2147483647 - 1)))), var_12)) : ((((!(arr_6 [i_0 - 1] [i_1] [i_1])))))));

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        var_17 = (-9223372036854775807 - 1);
                        var_18 = var_13;
                        var_19 = ((arr_5 [i_0 - 2] [i_3 + 1] [i_2]) ? (arr_3 [i_1] [i_2] [i_2]) : ((2147483637 ? 23635 : (arr_0 [i_3] [i_1]))));
                        var_20 = 41911;
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
                    {
                        arr_16 [i_0] [i_1] [i_1] [i_2] [i_4] = (~-58);
                        var_21 = ((58 ? (-2147483647 - 1) : (-2147483647 - 1)));
                        arr_17 [i_4] [i_4] [i_2] [i_4] [i_1] = (-2147483647 - 1);
                        var_22 = -1380050050;
                        var_23 += ((!(arr_6 [i_0] [i_0] [i_0 - 2])));
                    }
                    for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                    {
                        var_24 = (min((((max((-2147483647 - 1), 138)))), (max((arr_6 [i_0] [i_0 - 2] [i_0]), (~23635)))));
                        arr_22 [i_5] [i_2] [i_1] [i_0 - 3] = (max(0, 41905));

                        for (int i_6 = 1; i_6 < 22;i_6 += 1)
                        {
                            arr_26 [i_0 - 1] [i_1] [i_2] [i_6] [i_5] = ((((max((arr_6 [i_0] [i_0] [i_0]), var_14))) ? (arr_3 [i_0] [i_0 - 3] [i_0]) : (((-(arr_12 [i_0] [i_0] [i_0] [i_0 - 3] [i_0 - 1]))))));
                            var_25 = ((2548741296 ? 1746226000 : 2222942047294856904));
                        }
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            var_26 += (min((!0), ((var_7 << (var_13 + 4654588455305621525)))));
                            var_27 = ((((((max(127, var_6))))) ? ((((((arr_10 [i_0] [i_1] [i_2]) ? var_0 : 2548741290))) ? var_3 : ((min(0, 0))))) : var_4));
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            arr_32 [i_8] [i_5] [i_2] [i_0] [i_0] = var_0;
                            var_28 = 1967163818;
                            var_29 &= (arr_24 [i_0] [i_2] [i_2] [i_5] [i_8]);
                            var_30 += (!-92);
                            var_31 = 177;
                        }
                        var_32 = ((-((~(min(var_10, var_4))))));
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 23;i_10 += 1)
                        {
                            {
                                var_33 = (arr_18 [i_0 - 3] [i_0 - 1] [i_0] [i_0 - 1]);
                                var_34 = var_2;
                            }
                        }
                    }
                }
                for (int i_11 = 0; i_11 < 23;i_11 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 23;i_12 += 1)
                    {
                        for (int i_13 = 3; i_13 < 21;i_13 += 1)
                        {
                            {
                                var_35 = (((!(arr_21 [i_0 - 2] [i_0 + 1]))));
                                arr_46 [i_0 - 3] [i_13] [i_11] [i_12] [i_13] = (arr_34 [i_0] [i_0] [i_0 - 1] [i_0 - 1]);
                                var_36 += (max(((max(((var_3 ? (arr_8 [i_1]) : 0)), 255))), ((var_8 ? ((755550406 ? (arr_28 [i_0 - 3] [i_1] [i_11] [i_12] [i_13]) : var_12)) : ((((arr_30 [i_0] [i_1] [i_0] [i_12] [i_13 + 2] [i_13 - 1] [i_1]) ? (arr_18 [i_0 - 2] [i_1] [i_11] [i_12]) : var_12)))))));
                            }
                        }
                    }
                    var_37 = (max(((max((-2147483647 - 1), ((max(208, -39)))))), (max((((-2147483647 - 1) ? -1896 : 1163453178)), -0))));
                    var_38 = 17;
                }
                var_39 = ((((max(-26, 1768404755))) ? ((((((var_12 ? 31 : 0))) ? var_12 : 58))) : (max(-4128622916414057063, var_6))));
                var_40 = (max((((-2147483647 - 1) ? 2932525203 : 208)), (min(var_9, var_10))));
                var_41 = ((((((arr_0 [i_0 - 2] [i_1]) ? (arr_0 [i_1] [i_1]) : var_12))) ? ((var_6 ? (((arr_24 [i_0] [i_0 - 3] [i_0] [i_0 - 3] [i_1]) ? var_13 : var_0)) : (!2147483647))) : var_2));

                /* vectorizable */
                for (int i_14 = 1; i_14 < 20;i_14 += 1)
                {
                    var_42 = (arr_9 [i_14] [i_1] [i_0] [i_0 - 1]);
                    var_43 &= 4294967295;
                }
            }
        }
    }
    #pragma endscop
}
