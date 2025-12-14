/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (((((~(arr_0 [i_1] [i_1])))) ? ((max((arr_0 [i_0] [i_1]), (arr_0 [i_0] [i_1])))) : (((arr_0 [i_1] [i_1]) - (arr_0 [i_0] [i_1])))));
                var_20 = (arr_0 [i_0] [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 11;i_4 += 1)
                            {
                                arr_14 [10] [10] [i_1] [1] [2] [i_3] [i_1] = (arr_12 [i_1] [i_1] [i_1] [i_3] [3]);
                                arr_15 [i_1] [1] [i_1] [i_1] = -577695735;
                                var_21 += ((arr_13 [i_3] [i_3] [i_2] [i_3] [i_3]) < (((((arr_11 [i_4] [i_3] [i_2] [i_4]) && 4345373593725906340)))));
                            }
                            for (int i_5 = 1; i_5 < 9;i_5 += 1)
                            {
                                var_22 = (min(((min((arr_13 [i_1] [i_0] [i_0] [i_2] [i_5 + 1]), 27291))), ((-var_19 ? (arr_10 [i_0] [i_1] [i_2] [i_3]) : (!var_12)))));
                                arr_19 [8] [0] [i_1] [i_1] [i_3] [i_5 + 2] = (arr_4 [i_1] [i_1] [i_5 + 2]);
                            }
                            var_23 = ((55312 > (12092162448229034237 && 12092162448229034237)));
                            var_24 ^= (arr_13 [i_3] [i_1] [i_2] [4] [4]);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 1; i_6 < 15;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 17;i_8 += 1)
            {
                {

                    for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
                    {
                        var_25 = (i_6 % 2 == 0) ? ((((((((((~(arr_32 [i_6] [i_6] [4] [i_9]))) + 2147483647)) >> (!var_4)))) <= (min((((!(arr_26 [i_6 + 2] [i_7] [i_8] [i_6 + 2])))), (min((arr_22 [i_8]), (arr_25 [i_7] [i_6] [i_9])))))))) : ((((((((((((~(arr_32 [i_6] [i_6] [4] [i_9]))) - 2147483647)) + 2147483647)) >> (!var_4)))) <= (min((((!(arr_26 [i_6 + 2] [i_7] [i_8] [i_6 + 2])))), (min((arr_22 [i_8]), (arr_25 [i_7] [i_6] [i_9]))))))));
                        var_26 = ((var_14 < (((55312 >> (6354581625480517379 - 6354581625480517371))))));
                        arr_33 [i_6] [2] [i_6] = max(2058886332400356925, (min((min(var_9, var_5)), (((2080040512562595157 || (arr_32 [i_6] [i_6] [i_8] [i_9])))))));
                    }
                    for (int i_10 = 0; i_10 < 19;i_10 += 1) /* same iter space */
                    {
                        var_27 = (arr_25 [i_7] [i_6] [i_6]);

                        for (int i_11 = 0; i_11 < 19;i_11 += 1)
                        {
                            arr_39 [i_6] [i_7] [i_7] [i_10] [i_11] = arr_29 [i_11];
                            var_28 = min((9667462893209040600 < 3477540380), (min(16366703561146956458, 255)));
                        }
                    }
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 19;i_12 += 1)
                    {
                        arr_42 [i_6] [i_6] [i_6] [i_6] = ((~(arr_28 [i_6 + 4] [i_6] [i_8 + 1] [i_12])));
                        var_29 &= (arr_26 [i_6] [i_6] [i_6] [i_12]);
                        arr_43 [i_6] = (((arr_34 [i_6 + 4] [i_6 + 2] [5] [i_6 + 4]) | (arr_34 [i_6 + 2] [i_6 + 3] [i_6] [i_6 + 2])));
                        var_30 = (((arr_38 [i_6] [i_8 + 1] [i_8] [i_8 - 1] [12] [i_6]) > (~16366703561146956459)));
                        var_31 = (-(arr_31 [14] [i_6 + 1] [1] [i_8 + 1]));
                    }
                    var_32 ^= (arr_21 [i_6] [1]);
                }
            }
        }
    }
    var_33 = var_10;
    #pragma endscop
}
