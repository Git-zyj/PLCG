/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_16 = ((var_12 ? (((((arr_3 [i_1 + 3]) && (((arr_0 [i_0]) || var_6)))))) : (arr_1 [i_1 + 3] [i_0])));

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_17 = (((((var_6 ? var_11 : 9223372036854775807))) ? (arr_10 [i_0] [i_0] [i_0] [i_3] [i_2]) : 9223372036854775807));
                        arr_12 [i_0] = (arr_9 [i_0] [i_1 + 2] [i_2] [i_3]);
                    }
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        var_18 = (min(var_18, (((((!(arr_8 [i_1 + 3] [i_1] [i_0]))) ? (((~(arr_14 [i_0] [i_2] [i_1 + 1])))) : (arr_8 [i_1 + 1] [i_1 + 1] [i_4]))))));
                        var_19 = var_0;
                        var_20 = (min(var_20, ((min((arr_5 [i_2] [i_2]), (((9223372036854775807 ? 36702 : 15079))))))));
                        arr_15 [i_0] [i_0] [i_2] [i_0] [i_0] = ((((((arr_5 [i_1 + 1] [i_0]) ? (arr_5 [i_4] [i_0]) : 0))) ? (((arr_5 [i_0] [i_0]) ? (arr_5 [i_0] [i_0]) : (arr_5 [i_0] [i_0]))) : (((arr_5 [i_0] [i_0]) ? (arr_5 [i_2] [i_0]) : (arr_5 [i_0] [i_0])))));
                        arr_16 [17] [i_0] [i_4] [17] [i_2] = -9223372036854775807;
                    }
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        arr_20 [i_0] [i_0] [i_0] = (max((arr_7 [i_0] [i_1] [i_1 + 3]), (((arr_7 [i_0] [i_0] [i_1 + 2]) ? var_9 : var_6))));
                        var_21 = var_11;
                    }
                    var_22 = var_2;
                }
                for (int i_6 = 2; i_6 < 19;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        var_23 = (arr_5 [i_0] [i_0]);
                        var_24 *= (arr_25 [i_7] [i_6] [i_6] [i_1 + 3]);
                        var_25 = var_10;
                    }
                    var_26 = (max(var_26, (((~(min((arr_24 [4] [18] [4]), (arr_21 [0] [i_6 + 2] [i_1 + 3] [0]))))))));
                }

                for (int i_8 = 2; i_8 < 18;i_8 += 1)
                {
                    arr_30 [i_0] [i_0] = ((((min((((arr_28 [i_0] [i_0]) ? (arr_23 [i_0] [i_0] [i_0] [i_0]) : 0)), (!20411)))) ? (min((arr_14 [i_1 - 1] [i_0] [i_8 + 1]), var_7)) : ((((!(arr_3 [i_0])))))));
                    var_27 = (max(var_27, (arr_28 [i_8] [i_8])));
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    var_28 += ((arr_10 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1 - 1] [i_1 + 1]) ? (arr_17 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1 + 1]) : var_2);
                    var_29 = (max(var_29, (((arr_2 [i_1 + 3] [i_1 + 3]) ? (arr_27 [i_0] [i_0] [i_1 + 3]) : (arr_0 [i_1 + 3])))));
                    var_30 = (min(var_30, var_7));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            {
                                var_31 -= (arr_8 [i_1 + 3] [i_1 + 1] [i_1 + 3]);
                                var_32 -= (((((var_6 ? (arr_23 [i_0] [i_1] [i_9] [i_9]) : var_5))) ? (((4294967290 ? 6 : (arr_17 [i_0] [i_1] [i_9] [i_1])))) : (var_3 / -1)));
                                var_33 = (((arr_32 [i_1 - 1] [i_1]) ? (arr_32 [i_1 - 1] [i_1]) : (arr_32 [i_1 - 1] [i_1 - 1])));
                            }
                        }
                    }

                    for (int i_12 = 2; i_12 < 20;i_12 += 1)
                    {
                        var_34 = (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]);
                        var_35 *= (arr_25 [i_12] [i_1 + 3] [i_1 + 3] [i_12 - 2]);
                        var_36 = -var_2;
                    }
                }
                for (int i_13 = 3; i_13 < 20;i_13 += 1)
                {
                    arr_43 [i_0] [i_0] [i_0] = (arr_3 [i_0]);
                    var_37 = 15741;
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 21;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 21;i_15 += 1)
                        {
                            {
                                var_38 = (max(((((arr_39 [i_15] [i_14] [i_0] [i_0]) ? (!var_11) : var_11))), (arr_8 [i_0] [i_0] [i_0])));
                                var_39 = (((((arr_32 [i_0] [i_1 - 1]) ? (arr_18 [i_15] [i_0] [i_0] [i_0]) : (arr_21 [i_0] [i_13 - 3] [i_1 - 1] [i_0]))) >> (((arr_2 [i_14] [i_1 - 1]) + 8346175081618903012))));
                                var_40 = ((-(arr_22 [i_0] [i_1])));
                                var_41 = (max(var_41, ((((-(arr_19 [i_15] [i_15] [i_13] [i_15] [12])))))));
                                var_42 *= (arr_39 [i_0] [i_1] [i_1] [i_0]);
                            }
                        }
                    }
                }
                var_43 = (var_9 - 12317850745385063524);
            }
        }
    }
    var_44 = var_9;
    var_45 = (~var_15);
    var_46 *= var_12;
    #pragma endscop
}
