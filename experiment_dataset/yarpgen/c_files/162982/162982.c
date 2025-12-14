/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_2] = (3792194638 + 9294400100655153851);
                    var_11 = (min(var_11, (((((~12276742658389872228) ? ((min(10462, (arr_7 [10] [10] [i_0])))) : ((((arr_1 [1]) != 6170001415319679387)))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_12 = (max(var_12, (((((max((arr_13 [i_0] [i_0] [1] [i_0] [i_0]), var_4)) >= var_10))))));
                                var_13 = var_7;
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = (max((var_5 * 12276742658389872220), var_4));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                {
                    var_15 = (min(var_15, (((((((((arr_13 [i_5] [i_5] [i_7] [i_7] [i_7]) * 1853523155))) ? (arr_20 [i_5] [i_5] [i_5]) : (((1 != (arr_13 [7] [i_6] [i_6] [7] [i_5])))))) * ((((arr_4 [1] [1] [i_7]) != (arr_4 [i_5] [i_5] [i_7])))))))));
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            {
                                var_16 = (-5336 != 185);
                                var_17 = ((((((arr_24 [i_9]) <= (arr_7 [i_8 + 1] [i_8 + 1] [i_8 - 1])))) + (((arr_7 [i_8 - 2] [i_8 - 1] [i_8 - 1]) & (arr_7 [i_8 + 1] [i_8 - 2] [i_8 - 1])))));
                            }
                        }
                    }
                    var_18 = (max(var_18, ((1 ? 2134832111 : 162))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 11;i_11 += 1)
                        {
                            {
                                var_19 = (max(var_19, (3198805732 != 1)));
                                var_20 = (min(var_20, 2134832111));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_12 = 0; i_12 < 10;i_12 += 1)
    {
        /* LoopNest 2 */
        for (int i_13 = 1; i_13 < 9;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 10;i_14 += 1)
            {
                {
                    var_21 = (max(var_21, (~15680622420508156445)));
                    /* LoopNest 2 */
                    for (int i_15 = 3; i_15 < 8;i_15 += 1)
                    {
                        for (int i_16 = 1; i_16 < 9;i_16 += 1)
                        {
                            {
                                var_22 = (min(var_22, ((((var_5 ? (min(0, 16091758506645905321)) : ((min(var_8, var_1)))))))));
                                var_23 = (min((((arr_0 [i_12]) ? (min(18446744073709551615, (arr_14 [i_13] [i_13] [i_16] [i_16]))) : (min((arr_10 [i_16] [i_15] [i_14] [0] [i_12]), var_10)))), ((min(-13, (arr_35 [i_15 - 2] [i_13 + 1]))))));
                                arr_46 [i_16] [i_13] [i_12] [i_13 + 1] [i_13] [i_12] = (((min((arr_15 [i_13]), (2160135185 * 30786325577728))) < ((((((min((arr_20 [i_12] [7] [i_16]), (arr_17 [i_16] [i_13]))))) ^ (arr_29 [i_16] [i_16 - 1] [i_16 - 1] [i_16] [10]))))));
                                var_24 = (max(var_24, ((min(3349120995, 2354985567063646295)))));
                                arr_47 [i_12] [i_13] = ((~(129 / -110)));
                            }
                        }
                    }
                    var_25 = ((2160135185 ? 1 : 0));
                    arr_48 [i_13] [i_14] [1] = (min((((((max((arr_0 [i_14]), (arr_3 [i_12] [i_13])))) || (((55060 ? 1 : 57)))))), (max(((-(arr_35 [i_12] [i_12]))), (((arr_15 [i_13]) % -2))))));
                }
            }
        }
        var_26 = ((2160135185 ? 2624461127168198942 : 229376));
    }
    var_27 = (min(var_27, (-32754 == 11648)));
    #pragma endscop
}
