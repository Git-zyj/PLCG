/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_14, -1));

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_2 [6] |= 4063405622593249832;
        var_21 = (min(var_21, ((((((-(arr_1 [i_0] [i_0])))) ? (arr_1 [i_0] [i_0]) : (min(27728, 4063405622593249842)))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (!27728);
                        var_22 += (-37796 ? (!1) : 0);
                    }
                    for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
                    {

                        for (int i_5 = 4; i_5 < 20;i_5 += 1)
                        {
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((((((-2316891404360309335 ? -4063405622593249825 : 10)) % var_2))) ? (min(var_18, 4063405622593249832)) : (((1826255268 ? -2103839666 : 65528)))));
                            arr_16 [i_0] [i_0] [i_0] = var_2;
                            arr_17 [i_0] [i_0] [i_2] = (max(var_11, (27739 ^ 12778639675386196423)));
                            var_23 = var_19;
                            arr_18 [i_0] = ((!(((arr_11 [i_0] [i_1 - 1] [i_0] [i_4] [i_4] [i_5 - 2]) > -4063405622593249825))));
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_24 *= (((min((arr_4 [i_0] [i_4]), var_4)) > (((14724569307658187666 ? var_13 : ((min(var_8, -903058939))))))));
                            var_25 = (max((((!(arr_13 [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1])))), (9223372036854775807 % 11420)));
                        }
                        arr_21 [i_0] [i_2] [i_1 - 1] [i_0] = ((14168582663432349305 ? 12284 : 33629));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
                    {
                        var_26 = ((arr_8 [i_7] [i_1 - 1]) - (arr_12 [i_1 + 1] [i_0] [i_1 + 1]));
                        arr_25 [i_0] [i_1] [i_0] [i_2] [i_0] [i_7] = ((~(((arr_4 [i_1] [i_2]) % -903058939))));
                        arr_26 [i_0] = 4063405622593249825;
                        var_27 = 8176;
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
                    {

                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            arr_31 [i_0] [i_2] [i_0] [i_9] = arr_3 [i_0] [i_1];
                            arr_32 [i_0] = (((arr_11 [i_0] [i_1 + 1] [i_0] [i_1 + 1] [i_1 + 1] [i_1 + 1]) | 0));
                            var_28 = 10012292166695289434;
                            arr_33 [0] [i_1] [i_2] [i_1] [i_9] [i_8] [i_2] |= ((4063405622593249836 & (arr_30 [i_1 + 1] [i_2] [i_1 + 1] [i_1 - 1])));
                        }
                        arr_34 [i_8] [i_0] [i_2] [i_0] [i_0] = -var_19;
                        arr_35 [8] [i_1] [i_0] [8] [i_0] [i_0] = ((1 ? 27751 : -4063405622593249850));
                    }
                    arr_36 [20] [i_0] [9] = ((((-(arr_0 [i_1 + 1] [i_0]))) - 54116));
                    arr_37 [i_0] = 0;
                }
            }
        }
        var_29 = ((~(((((27739 ? var_15 : 1))) ? (arr_3 [i_0] [i_0]) : var_16))));
        arr_38 [i_0] [i_0] = max(1024, ((-(arr_30 [i_0] [i_0] [i_0] [i_0]))));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 22;i_10 += 1) /* same iter space */
    {

        for (int i_11 = 0; i_11 < 22;i_11 += 1)
        {
            var_30 = ((((7952825324430012364 ? (arr_0 [i_11] [i_11]) : 12373065903155950570)) ^ 4063405622593249842));
            var_31 ^= -1;
            var_32 = 4063405622593249825;
        }
        arr_46 [i_10] = 27739;
    }
    #pragma endscop
}
