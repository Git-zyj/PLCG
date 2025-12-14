/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101437
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_20 = ((((!(~var_7))) ? var_10 : (max((arr_1 [i_0]), ((((arr_5 [i_0] [i_0]) ? (arr_2 [9] [9]) : (arr_2 [15] [i_1]))))))));
                    arr_10 [i_0] [i_1] [i_0] [i_2] = (min(1, 268435455));
                }
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            {
                                var_21 = (((max(15858062512949247987, 181)) | ((max((arr_8 [i_3]), 821697973067873351)))));
                                arr_18 [i_0] = (arr_9 [18] [i_1] [18] [i_0]);
                                arr_19 [7] [7] [12] [7] [i_0] = ((((var_18 ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : ((var_1 ? 1 : var_18)))) | (arr_11 [17] [i_3] [i_0])));
                            }
                        }
                    }
                    arr_20 [i_0] [17] [i_0] = (((((!var_4) ? 3107957964338285899 : (((var_11 ? (arr_2 [i_0] [i_0]) : var_6))))) << (((((arr_4 [i_0]) ? (arr_12 [i_0] [i_1] [7]) : (arr_4 [i_0]))) - 60))));
                }
                var_22 = ((((((arr_15 [i_0]) ? (arr_15 [i_0]) : (((((arr_15 [i_0]) + 2147483647)) << (((((arr_9 [i_1] [i_0] [6] [i_0]) + 2610366506132396223)) - 26))))))) + (arr_7 [1] [i_0])));
                var_23 ^= ((~((((((var_6 - (arr_11 [i_0] [i_0] [i_1]))) + 9223372036854775807)) << (((((((arr_5 [1] [1]) ? -821697973067873351 : 63)) + 821697973067873394)) - 43))))));
            }
        }
    }
    var_24 *= (((min(var_17, (!var_1)))) ? (max((~var_10), (!0))) : var_9);
    var_25 += var_19;
    var_26 = (((var_3 + var_9) ? var_1 : ((var_4 + (575897802350002176 || 5890)))));
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                {
                    arr_27 [i_8] [8] [i_8] = ((-5902 + 2147483647) << (14 - 14));
                    arr_28 [i_8] [i_7] [i_8] [i_8] = 1;
                    arr_29 [i_6] [i_8] [i_8] = (((!-1) << ((((max((max(97, var_11)), -97))) - 76))));
                }
            }
        }
    }
    #pragma endscop
}
