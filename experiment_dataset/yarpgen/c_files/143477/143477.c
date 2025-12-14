/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_16 = (max(var_16, (((-(arr_0 [i_1 + 3] [i_1 + 2]))))));
                var_17 = 857806919770731251;
            }
        }
    }

    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        var_18 = ((~(arr_5 [i_2 - 1])));
        var_19 = (((max((arr_5 [i_2 - 1]), (arr_4 [i_2 - 1]))) >> (((arr_5 [3]) - 6433271260491926741))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                {
                    var_20 += 5728550635315431119;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            {
                                arr_19 [15] [15] [15] [i_3] [i_3] = ((~(arr_15 [i_4 - 2] [i_3])));
                                arr_20 [i_3] [i_3] [i_3] [i_5] [i_5] [i_6] [i_7] = (((arr_15 [i_3] [i_3]) - (arr_15 [i_3] [i_3])));
                                var_21 = (((arr_11 [i_3] [i_4 - 2]) ? (arr_11 [i_3] [i_4 - 1]) : -66));
                            }
                        }
                    }
                }
            }
        }
        var_22 *= ((~(arr_12 [i_3] [i_3] [i_3] [i_3])));

        for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
        {
            var_23 = (arr_16 [i_3] [i_3] [i_3] [i_3]);
            var_24 = (-(arr_8 [i_8]));
        }
        for (int i_9 = 0; i_9 < 20;i_9 += 1) /* same iter space */
        {

            for (int i_10 = 1; i_10 < 18;i_10 += 1)
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 20;i_11 += 1)
                {
                    for (int i_12 = 3; i_12 < 19;i_12 += 1)
                    {
                        {
                            var_25 = (((2 ? (arr_30 [i_3] [4] [i_3] [i_3] [i_3]) : -4052032661470163573)));
                            var_26 = (max(var_26, (((40 ? (arr_18 [i_12 - 1] [i_9] [i_10 + 2]) : 79)))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 20;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 20;i_14 += 1)
                    {
                        {
                            var_27 = (((((-924377245501402970 ? (arr_10 [i_3] [i_9]) : (arr_32 [i_10 + 2] [i_3] [i_10] [i_13])))) ? 255 : (1 % var_10)));
                            var_28 -= ((~((~(arr_6 [i_3] [i_9])))));
                            var_29 = (max(var_29, ((-(((arr_28 [i_3] [i_3] [i_14] [i_3] [i_3]) ? 120 : 567026242080990886))))));
                            var_30 = ((76 ? ((76 ? 8 : -567026242080990887)) : (arr_16 [i_3] [i_3] [i_3] [i_3])));
                            var_31 -= (((arr_31 [i_10 + 1] [i_10 + 2] [i_10] [10] [i_10 + 1]) ? (!-60) : (arr_21 [i_10 + 1])));
                        }
                    }
                }
                var_32 = ((-(arr_36 [i_10 + 1] [i_10] [i_10 + 2])));
            }
            for (int i_15 = 0; i_15 < 20;i_15 += 1)
            {
                /* LoopNest 2 */
                for (int i_16 = 2; i_16 < 19;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 1;i_17 += 1)
                    {
                        {
                            var_33 = (((arr_28 [i_16 - 2] [i_16] [i_3] [i_16] [i_16 + 1]) - (((arr_21 [i_17]) ? (arr_36 [i_17] [i_16 + 1] [i_15]) : (arr_41 [i_3] [i_3] [i_3] [5])))));
                            var_34 = (arr_23 [i_16 + 1] [i_16 + 1] [i_3]);
                            var_35 = ((((-(arr_8 [i_3]))) >= -7771482294298624697));
                        }
                    }
                }
                var_36 = (((arr_34 [i_3] [i_9] [i_15] [i_15]) ? (arr_34 [2] [2] [i_9] [i_15]) : 2143377700875766332));
                var_37 += (((arr_33 [12] [i_9] [i_15] [i_9]) ? (arr_22 [i_3]) : -4247318945266843860));
            }
            var_38 = (((arr_39 [i_9] [i_3] [i_3] [i_3] [i_3]) <= (arr_39 [i_3] [i_3] [i_3] [i_9] [4])));
            var_39 = ((-(arr_44 [i_3] [i_3] [i_3] [1] [i_9] [i_9])));
        }
        for (int i_18 = 1; i_18 < 1;i_18 += 1)
        {
            var_40 = (min(var_40, (~1)));
            /* LoopNest 2 */
            for (int i_19 = 1; i_19 < 18;i_19 += 1)
            {
                for (int i_20 = 2; i_20 < 16;i_20 += 1)
                {
                    {
                        arr_53 [i_20] [i_18 - 1] |= ((4247318945266843860 <= (arr_36 [i_18 - 1] [i_18 - 1] [i_18 - 1])));
                        arr_54 [i_3] [i_3] [i_3] = 308045542790724701;
                        var_41 = arr_35 [i_20 + 1] [i_20] [i_3] [i_20 + 4] [i_18 - 1];
                    }
                }
            }
        }
        var_42 = (arr_51 [i_3]);
    }
    var_43 = var_13;
    #pragma endscop
}
