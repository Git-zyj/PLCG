/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((var_2 ? ((var_5 ? 127 : 1)) : (((min(var_0, 18795))))))) ? ((1 ? 13177556558483608609 : 1)) : ((((989081073 ? var_0 : -1))))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 12;i_0 += 1) /* same iter space */
    {
        arr_2 [3] = ((1 ? (arr_0 [i_0 - 2] [i_0 - 2]) : (arr_0 [i_0 + 1] [i_0 - 1])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_18 *= ((var_15 ? (~var_6) : (var_9 < var_13)));
                                arr_13 [i_0] [i_1] [i_1] [2] [i_1] [i_3] [i_4] = 1;
                                var_19 = (max(var_19, (((arr_1 [i_0 + 1]) ^ (arr_10 [i_2 + 1] [i_0 - 1])))));
                            }
                        }
                    }
                    arr_14 [i_0] [i_1] [i_1] = ((var_13 ? ((var_7 ? (arr_7 [i_0 - 2] [i_1] [i_1] [i_0 - 2]) : var_0)) : var_0));
                    var_20 -= ((!(arr_11 [i_2] [i_2] [1] [i_0] [i_0])));
                    arr_15 [i_1] [i_1] = -1;
                }
            }
        }
    }
    for (int i_5 = 2; i_5 < 12;i_5 += 1) /* same iter space */
    {
        var_21 = ((1 ? (max(-var_14, (arr_11 [i_5] [i_5] [i_5] [1] [i_5]))) : (min(-var_4, 1))));
        var_22 = (min(var_22, var_6));
        var_23 = (max(var_23, (-73 & 1)));
    }
    /* vectorizable */
    for (int i_6 = 2; i_6 < 12;i_6 += 1) /* same iter space */
    {
        arr_20 [i_6] [5] = ((~((30897 ? (arr_9 [8] [4] [i_6 - 1] [i_6 - 2] [i_6 - 2]) : var_8))));
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 12;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 11;i_8 += 1)
            {
                {
                    var_24 = ((((var_9 ? var_4 : var_15)) | var_15));
                    var_25 = (max(var_25, ((((arr_1 [i_8 + 1]) - (arr_1 [i_8 + 2]))))));
                    arr_26 [i_6 - 2] [i_7] [i_7] [i_7] = (((((arr_6 [i_7] [i_8 + 2]) ? var_15 : var_6)) ^ (((-1 ? 0 : -1114310977)))));
                    var_26 = (max(var_26, (~-18)));
                    arr_27 [i_6 - 2] [i_6 - 2] [i_7] = (((!(arr_19 [i_6]))));
                }
            }
        }
        var_27 += ((16 - (((arr_24 [i_6 + 1]) ? -732591062336210001 : 9807173561900951593))));
    }
    /* vectorizable */
    for (int i_9 = 2; i_9 < 12;i_9 += 1) /* same iter space */
    {
        var_28 = ((var_9 ? (arr_6 [i_9 - 2] [i_9 - 2]) : (arr_6 [i_9] [i_9 + 1])));
        var_29 = (arr_10 [i_9 + 1] [i_9 - 1]);
    }
    #pragma endscop
}
