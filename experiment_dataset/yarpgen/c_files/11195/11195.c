/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_18 ^= (min((((arr_12 [i_0] [i_0] [i_0] [i_4] [i_0] [i_0]) ? (min((arr_0 [i_1] [i_3]), var_5)) : ((-24 ? 18446744073709551588 : 65515)))), (~var_13)));
                                var_19 = ((~((~(max((arr_8 [i_0] [i_1] [i_1] [i_4]), var_7))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_20 = (min((max((min((arr_7 [i_1] [8]), var_5)), 224)), (arr_11 [3] [i_1] [i_2] [i_0] [i_6])));
                                arr_17 [i_0] [i_2] [i_0] [i_0] = ((max((((var_9 ? 2147483635 : 1)), (max(9, var_12))))));
                                var_21 = (((~((-(arr_3 [i_0] [i_0] [i_0]))))));
                                arr_18 [i_0] [i_2] [i_6] = (max(((var_2 ? -1 : var_13)), (((min(var_17, (arr_3 [i_0] [i_0] [i_0])))))));
                            }
                        }
                    }
                    var_22 = (((((max((arr_1 [i_0] [i_1]), var_17))) ? (~18) : ((var_7 ? 34 : -1)))));
                }
            }
        }
    }
    var_23 = (-(((~22) ? (min(65535, 7)) : (((var_10 ? var_16 : var_3))))));
    /* LoopNest 3 */
    for (int i_7 = 4; i_7 < 13;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 1;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 4; i_10 < 13;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 14;i_11 += 1)
                        {
                            {
                                arr_33 [i_7 + 1] [i_7] [0] [i_7] [i_7 + 1] = ((((((var_11 ? var_15 : (arr_20 [i_7]))))) ? ((~((-1 ? 3 : var_13)))) : (((~((var_4 ? (arr_7 [i_7] [i_7]) : var_2)))))));
                                arr_34 [i_11] [i_8] [12] [i_8] |= 1;
                                var_24 = (min(var_24, ((((((((arr_5 [i_7 + 1] [i_7 + 1] [i_9]) ? 7 : (arr_20 [i_8]))))) ? (arr_16 [i_7] [i_8] [i_9] [i_10] [i_11]) : -18446744073709551615)))));
                            }
                        }
                    }
                    arr_35 [i_7] = 8935141660703064064;
                    var_25 = ((max(5, -122)));
                }
            }
        }
    }
    var_26 = ((~((((max(var_7, var_4))) ? (!var_11) : ((min(1, 32736)))))));
    var_27 = (((~(min(var_11, var_0)))));
    #pragma endscop
}
