/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 2183361701;

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_16 = (((((~(arr_1 [i_0 - 1])))) ? (2183361688 && 9223372036854775807) : (((arr_0 [i_0 + 3] [i_0]) * 0))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_17 = max(((((var_3 || (arr_7 [i_0] [i_0]))) ? (min(var_11, (arr_1 [i_0]))) : 131)), ((max((arr_3 [14]), -var_0))));
                    var_18 ^= ((2183361701 ? (max((-9223372036854775807 - 1), 9223372036854775807)) : (((79 ? 119 : (arr_1 [i_0]))))));
                    var_19 = ((2557851226 & ((544137772 ? 5133037348685494228 : 45))));
                    var_20 = -25;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 14;i_4 += 1)
            {
                {
                    var_21 = (max((!var_10), (~-9223372036854775803)));

                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        var_22 = (max(131, (arr_1 [i_4])));
                        var_23 = (min(var_23, ((((~-18931) ? (arr_10 [i_0]) : (arr_13 [i_4] [i_4]))))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            var_24 = -788994053746090733;
                            var_25 = (((~(arr_8 [i_0 - 1] [i_4] [i_7]))));
                            var_26 = ((var_13 ? (arr_21 [14] [i_3 + 1] [5] [5] [i_7]) : -88));
                        }
                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            var_27 = ((-(arr_10 [i_0])));
                            var_28 = (arr_0 [i_0] [i_0]);
                        }
                        for (int i_9 = 4; i_9 < 14;i_9 += 1)
                        {
                            var_29 = (arr_14 [i_9] [i_4 + 1] [i_3]);
                            var_30 = (((arr_8 [i_4 - 1] [i_6] [i_9 + 1]) ? (arr_8 [i_4 - 2] [6] [i_9 - 4]) : (arr_8 [i_4 - 2] [13] [i_9 - 1])));
                            var_31 = 4294967295;
                        }
                        var_32 = ((0 ? (!79) : (~var_11)));
                    }
                    var_33 = (arr_10 [i_0 + 3]);
                    /* LoopNest 2 */
                    for (int i_10 = 4; i_10 < 13;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 15;i_11 += 1)
                        {
                            {
                                var_34 = (((~(arr_27 [i_3] [i_3] [i_3] [i_3 - 3] [0]))));
                                var_35 = ((~(arr_25 [i_10 + 2] [i_0] [i_3 - 2])));
                                var_36 = 17213;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 15;i_13 += 1)
                        {
                            {
                                var_37 = (max((arr_6 [i_0 + 1] [i_3 - 2]), (((-(arr_6 [i_0 + 1] [i_3 - 2]))))));
                                var_38 = 32767;
                                var_39 = (min(var_39, (((((max(4294967285, (arr_34 [i_0] [i_0 - 1] [i_3 - 1] [i_3 - 3] [i_4 - 2])))) ? (arr_34 [i_0] [i_0 + 3] [i_3 + 1] [i_4 - 1] [i_4 - 2]) : (arr_34 [i_0] [i_0 - 1] [i_3 + 1] [i_4] [i_4 + 1]))))));
                                var_40 = (((((~(-2147483647 - 1)))) ? (!18446744073709551615) : (arr_15 [i_0] [12] [i_0] [i_4 + 1] [i_0] [i_3])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_41 = 119;
    var_42 -= (((var_5 > var_5) == (~var_0)));
    var_43 = 124;
    #pragma endscop
}
