/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            arr_8 [i_0] [i_0] [i_0] = ((!var_11) * (!2095104));

            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                var_13 = 491520;
                var_14 = (((arr_0 [i_0] [i_1 + 1]) ? (arr_6 [i_0] [i_1 + 1] [i_2 - 1]) : (arr_0 [i_0] [i_1 + 2])));
                arr_11 [i_0] = (((arr_1 [i_1 - 1]) + -28293));
            }
        }
        for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
        {
            var_15 |= (-28279 * 103);
            /* LoopNest 2 */
            for (int i_4 = 2; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 21;i_5 += 1)
                {
                    {
                        var_16 = (min(var_16, -96));
                        var_17 = var_3;
                        arr_21 [i_0] [i_0] [i_0] [i_5] = ((((-105 ? -16 : 32768)) <= ((0 ? 1536 : var_8))));
                    }
                }
            }
            var_18 = (min(var_18, (((51225 ? 1 : 9345)))));
        }
        for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
        {
            arr_26 [i_0] [i_0] = ((((((arr_7 [1]) ? (arr_1 [i_0]) : 1202497280))) ? (arr_22 [i_0] [i_6] [i_6]) : 15502377185085282369));
            var_19 = (max(var_19, 124));

            for (int i_7 = 2; i_7 < 21;i_7 += 1) /* same iter space */
            {
                var_20 &= var_7;
                arr_29 [i_0] [i_7] [i_0] [i_0] = -var_12;
                var_21 ^= (((arr_3 [i_0]) * (arr_3 [i_7])));
            }
            for (int i_8 = 2; i_8 < 21;i_8 += 1) /* same iter space */
            {
                var_22 = (min(var_22, (((~(((((arr_14 [i_0]) + 2147483647)) << (((arr_24 [i_0]) - 237654939630383525)))))))));
                arr_32 [i_0] [i_6] [i_8] = -17184;
                var_23 = (arr_7 [i_8]);
                var_24 = ((((arr_13 [i_6] [i_0] [i_8 + 2]) + 2147483647)) >> (!95));
            }
            for (int i_9 = 2; i_9 < 21;i_9 += 1) /* same iter space */
            {
                arr_35 [i_9] [i_6] [i_6] [i_0] = (arr_13 [i_9 + 1] [i_9] [i_0]);
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    for (int i_11 = 3; i_11 < 22;i_11 += 1)
                    {
                        {
                            var_25 = ((!(arr_9 [i_11 - 1] [i_6] [i_9 + 1] [i_0])));
                            var_26 = (((arr_18 [i_9 + 1] [i_9 - 1] [i_11 - 3]) ? (arr_18 [i_9 + 1] [i_9 - 1] [i_11 - 3]) : var_7));
                        }
                    }
                }
            }
            var_27 = var_9;
        }
        /* LoopNest 2 */
        for (int i_12 = 4; i_12 < 22;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 22;i_13 += 1)
            {
                {
                    arr_46 [i_0] [i_12 - 2] [i_0] = ((var_12 << (((arr_36 [i_13] [9] [i_13 + 1] [i_12]) - 26))));
                    var_28 = (arr_6 [i_0] [i_0] [i_12 - 1]);
                    var_29 &= ((-17184 ? 438977999 : 105));
                }
            }
        }
    }
    var_30 = var_11;
    var_31 = (var_7 > -22413);
    var_32 = var_1;
    var_33 &= ((((((max(-105, 0))) ? var_5 : (max(var_10, var_3)))) | ((((var_5 ? var_7 : var_10)) >> (((2013265920 & var_0) - 1476394976))))));
    #pragma endscop
}
