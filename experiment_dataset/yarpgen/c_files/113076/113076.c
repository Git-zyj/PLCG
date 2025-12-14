/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113076
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_12 *= var_9;
                arr_4 [i_1] [i_1] [i_1] = (min((~255), ((((-7742659256997071719 ^ 9223372036854775807) < (arr_0 [9] [9]))))));
                arr_5 [i_0] [i_1] [i_1 - 1] = max((min((max(var_10, 0)), ((max(var_6, (arr_1 [i_0])))))), ((max(var_0, 240))));

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    var_13 = (min((max((max(1, 4074125852472028283)), -1)), (~46)));
                    arr_8 [16] [5] [i_2] [i_1] = (var_10 + 17);
                    arr_9 [i_1] [i_1] = 238;
                }
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            {
                                var_14 = ((((((arr_13 [i_1] [i_1] [i_3] [i_1 + 2] [i_1]) ? (arr_13 [i_1] [i_1] [1] [i_1 - 1] [1]) : 249))) ? (((max(0, var_1)))) : (max((arr_13 [i_1] [i_1] [i_1] [i_1 + 2] [i_4]), (arr_13 [i_1] [i_1] [i_1] [i_1 - 1] [i_1])))));
                                var_15 = min((max((arr_12 [i_0] [i_1 + 2] [i_3] [i_4]), (min((arr_2 [i_0] [i_0] [i_3]), var_10)))), (((65533 << ((((0 ? var_0 : 54)) - 53))))));
                            }
                        }
                    }

                    for (int i_6 = 3; i_6 < 16;i_6 += 1) /* same iter space */
                    {
                        arr_19 [i_0] [i_0] [i_0] [i_3] [i_1] = var_1;
                        var_16 = max(6, 48);
                        var_17 = (max((((arr_3 [i_1 + 2] [i_1 + 2] [i_6 + 3]) ? (arr_3 [i_1 + 2] [i_3] [i_6 + 3]) : (arr_3 [i_1 + 2] [11] [i_6 + 3]))), 188));
                        var_18 ^= (min((max((arr_14 [i_1 - 1] [i_6 - 2] [i_6] [i_1 - 1] [i_6] [i_6]), (arr_13 [i_0] [i_1 - 1] [i_6 - 3] [i_0] [i_6]))), (((min(var_10, (arr_16 [i_0]))) | (arr_10 [i_0] [i_0] [i_1 - 1])))));
                    }
                    /* vectorizable */
                    for (int i_7 = 3; i_7 < 16;i_7 += 1) /* same iter space */
                    {
                        arr_23 [1] [i_0] [i_1] [i_0] = 19;
                        arr_24 [i_0] [i_1] [i_0] [i_1] [i_1] = ((((((arr_12 [i_0] [i_1] [i_0] [i_7 - 3]) ? var_3 : 1528127188))) ? ((var_9 ? (arr_22 [10] [i_3] [i_3]) : (arr_11 [8] [i_0] [i_0] [i_7]))) : (arr_12 [i_1 + 1] [i_1 + 2] [i_7 + 3] [i_7 - 2])));
                        arr_25 [i_1] [i_1] [i_3] [i_7] = (((arr_12 [i_7 + 1] [i_1 - 1] [i_1 + 2] [13]) ? var_5 : 2147483647));
                    }
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        arr_30 [11] [i_0] [11] [i_1] = ((((max((min((arr_11 [i_8] [i_8] [i_3] [i_8]), var_0)), 29))) > (max((((arr_7 [i_0] [i_0] [i_0] [i_0]) >> (var_10 - 3886086497948212685))), 227))));
                        var_19 = arr_28 [i_1];
                        arr_31 [i_0] [i_1] [i_1] = ((((max((((~(arr_26 [i_0] [i_1 + 1] [i_3] [i_0])))), (arr_16 [i_1 + 1])))) ? (~74) : ((((9223372036854775807 ? var_3 : var_3)) + var_3))));
                        arr_32 [i_1] [i_3] [i_0] [i_1] = (--3);
                        arr_33 [i_1] [7] [i_1] = var_10;
                    }
                    arr_34 [i_0] [i_0] [i_0] |= ((((max((max(10, 255)), 95))) ? (arr_14 [18] [18] [i_3] [i_1 + 2] [10] [i_1 + 2]) : ((~(arr_18 [i_1 + 2] [i_3] [i_1 - 1])))));
                }
                var_20 = (min(((-(min(100, 4193219771)))), -var_8));
            }
        }
    }
    #pragma endscop
}
