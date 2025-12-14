/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132699
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += ((((min(var_3, -7761))) && 3480283581));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        arr_12 [i_0] [i_1] [1] [i_1] [i_3] = (arr_7 [i_0]);
                        var_12 = ((var_9 ? (arr_8 [i_2 + 1] [i_2 + 2] [18] [i_2 + 2]) : (arr_9 [i_2 + 1])));
                    }
                    for (int i_4 = 1; i_4 < 19;i_4 += 1)
                    {
                        arr_17 [i_0] [i_1] [i_1] [i_4 + 1] [i_4 - 1] [i_4 + 1] = var_1;

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                        {
                            var_13 = (var_6 ? 403263323 : (arr_10 [i_0] [i_1] [i_2 + 3] [i_4 - 1]));
                            var_14 = (((arr_1 [i_2] [i_2 + 4]) || (arr_19 [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_4] [i_4 - 1])));
                            var_15 = (arr_15 [i_4 - 1] [i_0] [i_2 + 4] [13] [i_0]);
                            var_16 = (((-1517598647 + var_2) ? -1 : ((31 ? (arr_5 [i_0] [i_1]) : -66))));
                        }
                        for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                        {
                            var_17 = (max(var_17, ((((arr_14 [i_2 + 4] [8] [i_2 + 2] [i_2] [i_2 + 3] [i_4 - 1]) ? (((~(arr_14 [i_2 - 1] [i_2] [i_2 - 1] [i_2] [i_2 + 3] [i_4 - 1])))) : (arr_21 [i_2 + 1] [i_2] [i_2 + 1] [i_2] [i_2 - 1] [i_4 - 1] [i_2 + 1]))))));
                            var_18 = (arr_15 [i_0] [0] [1] [i_2 + 2] [i_2 - 1]);
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            arr_24 [i_0] [i_0] [i_0] [2] |= (!var_8);
                            var_19 = (max(var_19, (((arr_10 [i_4 - 1] [i_4 - 1] [i_1] [i_0]) ? (((((arr_13 [i_0] [8] [8] [i_4] [i_7] [i_0]) ? 467344754 : var_9)) + (((min(0, var_0)))))) : var_6))));
                        }
                        arr_25 [i_0] [i_1] [i_2] [i_4] [i_1] [6] = (arr_0 [i_0] [i_1]);
                        var_20 = (max(var_20, (arr_16 [12] [i_1] [19])));
                    }

                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        var_21 = (((min(3084, (var_9 ^ var_4))) ^ ((~((2074986285 ? 20169 : (arr_28 [i_0] [i_1] [i_2])))))));
                        var_22 = (arr_27 [i_0] [i_1] [i_2] [i_8] [i_8] [i_8]);
                    }
                    for (int i_9 = 0; i_9 < 20;i_9 += 1) /* same iter space */
                    {

                        for (int i_10 = 1; i_10 < 18;i_10 += 1) /* same iter space */
                        {
                            var_23 |= 403263310;
                            var_24 = ((((((max((arr_1 [i_0] [i_9]), (arr_14 [i_0] [i_1] [i_2] [i_9] [i_9] [i_2])))) ? (arr_18 [i_0] [6] [i_2] [16] [i_10] [i_10]) : var_1))) ? ((max((arr_22 [i_0] [2] [i_2] [i_9] [i_10] [i_0]), (min(-8462, (arr_8 [i_0] [i_1] [i_2] [i_9])))))) : (arr_33 [i_0] [i_1] [i_2] [i_9] [i_10 + 1]));
                        }
                        for (int i_11 = 1; i_11 < 18;i_11 += 1) /* same iter space */
                        {
                            var_25 = -var_5;
                            arr_37 [i_1] [i_1] [13] [i_1] [1] [1] = (min(((~((var_0 ^ (arr_22 [i_0] [i_1] [i_2 + 1] [i_9] [i_11] [i_2 + 1]))))), (((arr_0 [i_0] [i_1]) ? (2880045687 <= var_10) : 45495))));
                        }
                        var_26 ^= ((!52245) ? ((max(65535, var_3))) : (((arr_29 [i_0] [i_1]) ? ((~(arr_7 [i_0]))) : (arr_14 [i_0] [1] [i_0] [1] [i_2] [i_9]))));
                        arr_38 [i_1] = (max(((~(!var_9))), (((arr_19 [i_0] [i_1] [i_0] [i_9] [i_9]) * var_2))));
                    }
                    for (int i_12 = 0; i_12 < 20;i_12 += 1) /* same iter space */
                    {
                        var_27 = (min(var_27, ((((((((var_4 >= var_5) != (3409004249 == 63511))))) + -5306754047790274534)))));
                        var_28 = (min((((arr_23 [15] [i_2] [i_1] [15]) * ((((arr_20 [i_0] [i_1]) ? (arr_34 [i_0] [i_0] [i_2] [i_12] [i_1] [i_0]) : var_8))))), (((((-(arr_5 [i_0] [i_0])))) ? 1 : (var_2 - 1438374099)))));
                        arr_41 [i_0] [i_1] [i_1] [i_1] = ((1682148083 / (((arr_21 [i_2 - 1] [i_2 + 2] [i_2] [i_2] [i_2 + 1] [i_2] [i_2 + 4]) ? var_6 : (arr_21 [i_2 + 1] [i_2 + 2] [i_2 + 3] [i_2 + 2] [i_2] [i_2 + 4] [i_2 + 4])))));
                    }
                    for (int i_13 = 0; i_13 < 20;i_13 += 1) /* same iter space */
                    {
                        var_29 &= (max(-1, (~var_6)));

                        for (int i_14 = 4; i_14 < 19;i_14 += 1)
                        {
                            var_30 = var_3;
                            var_31 = (min(var_31, (arr_30 [i_0])));
                        }
                    }
                }
                var_32 = var_6;
                arr_48 [i_1] [2] [i_0] |= ((max((min(var_4, var_10)), var_0)));
                arr_49 [i_0] [i_1] [i_1] = ((!((((((2478634359 ? (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : var_2))) ? (~403263325) : 25045)))));
            }
        }
    }
    var_33 = var_6;
    #pragma endscop
}
