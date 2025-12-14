/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110866
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 1;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_20 = (arr_4 [i_0] [i_0]);
                    var_21 = ((-(~149)));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_2] [i_2] [i_3] [i_3 - 3] [10] [i_4] |= ((((max(8388576, 259))) ? ((-((min(259, -16487))))) : ((var_17 ? (((arr_0 [5]) ? (arr_1 [i_0]) : (arr_6 [i_4] [i_2] [i_0] [i_0]))) : 259))));
                                var_22 |= (((((min(1, -253)))) * ((max((arr_0 [i_0 + 1]), 23651)))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            {
                arr_24 [i_5] [i_5] [i_5] |= ((((arr_5 [5] [3] [i_6]) ? (((arr_23 [i_5] [i_6]) % (arr_7 [i_5] [i_5] [i_5]))) : ((max((arr_4 [i_5] [i_5]), var_1))))));
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 7;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_23 = ((33678295 ? -2894 : 120));
                                var_24 = (((~1) ? -548834900 : ((-(arr_15 [6] [i_8 + 3] [1])))));
                                arr_32 [i_9] [i_6] [i_7] [i_8] [i_9] = (min((1 << 0), (min(2985024346, (arr_10 [i_8] [i_8] [i_8] [i_8] [i_8 - 3])))));
                            }
                        }
                    }
                }
                arr_33 [i_6] = (((min(((var_9 ^ (arr_12 [i_5] [i_5] [i_6] [i_6] [i_6]))), (arr_31 [i_5] [i_6]))) & ((~((var_13 ? (arr_3 [i_5]) : var_4))))));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 10;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 10;i_11 += 1)
                    {
                        {
                            var_25 = var_4;

                            for (int i_12 = 0; i_12 < 10;i_12 += 1)
                            {
                                arr_41 [i_11] [i_11] [1] [5] [1] [1] = ((14031 + var_8) < ((((max(-1, 2883))) >> (((arr_27 [i_12] [i_10] [i_11] [i_10] [1] [i_5]) - 41263)))));
                                var_26 = (min(var_26, ((((((arr_5 [i_11] [i_10] [i_6]) ? -5610320237589802696 : var_14)) & (arr_5 [i_5] [i_6] [i_10]))))));
                                var_27 = max(-320, 32204);
                                var_28 = (max((min((arr_21 [i_5] [9] [i_12]), (arr_37 [i_12] [i_11] [i_10] [1] [i_6] [i_5]))), ((max((arr_2 [i_11]), (arr_2 [i_11]))))));
                            }
                            for (int i_13 = 2; i_13 < 8;i_13 += 1)
                            {
                                arr_46 [i_5] = (max(((-((max(52561, 252))))), ((var_1 ? ((min((arr_27 [6] [3] [i_10] [i_11] [1] [i_13]), (arr_11 [i_5])))) : (arr_34 [i_11] [i_10] [1] [i_5])))));
                                arr_47 [i_5] [i_6] [i_10] [9] [i_13] = max(((((!131) && (2894 && -108)))), 174578624);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
