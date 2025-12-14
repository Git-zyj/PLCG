/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179153
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_11 = (arr_3 [i_0] [i_0] [i_0]);

                /* vectorizable */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    arr_7 [5] [i_0] = ((2302853936 ? (2931392874025073817 / 4294967276) : (arr_0 [i_1] [i_1])));
                    var_12 |= -var_1;
                    var_13 *= (~53);
                }
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    arr_11 [i_0] [i_0] = ((39999 < (max(-2964525962352688154, (min(var_3, 549722259456))))));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 20;i_5 += 1)
                        {
                            {
                                var_14 = (~20);
                                var_15 = var_1;
                                var_16 = min(((1706321722 ? 6748562674510383175 : 3)), (!-7556));
                            }
                        }
                    }
                    var_17 = min(0, (min((arr_10 [i_1] [i_3] [i_3] [i_1]), (~var_6))));
                    var_18 = ((~(((((((!(arr_6 [i_0] [3] [i_1] [4]))))) < -var_7)))));

                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        var_19 = ((16947 ? (arr_12 [i_0] [i_0] [0] [i_3] [i_0]) : (((((4185757527730768446 ? 1998706955 : var_8))) ? -1818982286809508102 : (arr_4 [i_0] [i_1] [i_6])))));
                        var_20 = ((((min(118, (arr_8 [i_0] [i_3] [i_6])))) ? (((30986 && 1503916655) ? 12 : 13187115760235545236)) : (arr_13 [i_0] [i_1] [i_3] [i_1])));

                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            var_21 = ((max(511, 11360494560287458895)));
                            arr_23 [13] [i_1] [i_3] [i_7] [14] [i_7] [i_3] = var_0;
                            var_22 = (37391 && 4222163084);
                            var_23 = (((min(-43, -25686))));
                            var_24 = (max(var_24, (((((((!var_0) ? (((var_10 ? -4838569912902101660 : var_5))) : (arr_6 [i_6] [i_6] [i_3] [i_6])))) || var_0)))));
                        }
                        var_25 = 4294967283;
                    }
                }
                arr_24 [i_0] [i_1] [i_1] = var_2;
                var_26 = ((((min((!-200229405), (max(var_3, var_5))))) ? (((max(1984, 20029)))) : -4887816835343767756));
            }
        }
    }

    for (int i_8 = 1; i_8 < 11;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 14;i_10 += 1)
            {
                {
                    var_27 = ((~((0 ? (min(var_7, (arr_19 [i_8] [i_9] [i_9] [i_9]))) : (((max(-20099, var_1))))))));
                    var_28 ^= (arr_8 [i_8] [5] [i_8]);
                    /* LoopNest 2 */
                    for (int i_11 = 2; i_11 < 12;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 14;i_12 += 1)
                        {
                            {
                                var_29 = (max(var_29, ((((arr_34 [i_8] [i_8] [i_8] [i_8] [i_11] [i_8]) >= ((((0 || (arr_1 [i_8 + 1]))))))))));
                                var_30 = var_0;
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 14;i_13 += 1)
        {
            for (int i_14 = 1; i_14 < 13;i_14 += 1)
            {
                {
                    var_31 ^= (4163473654 ^ (((var_5 >= 126) ? var_7 : ((((23646 >= (arr_25 [i_13]))))))));
                    var_32 = (((((var_5 ? ((0 ? (arr_9 [i_8] [i_8] [i_8]) : var_9)) : (arr_29 [i_13] [i_13] [i_14] [i_14])))) ? (((arr_37 [i_8 + 2]) ? -7444084990272056232 : var_2)) : (max((arr_12 [i_8 + 1] [i_8 + 1] [i_14 + 1] [i_14 + 1] [9]), (min(71629103907238240, (arr_20 [i_8] [i_8] [i_14] [i_14] [i_14] [i_14] [1])))))));
                }
            }
        }
    }
    #pragma endscop
}
