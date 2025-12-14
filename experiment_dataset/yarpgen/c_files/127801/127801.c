/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
                {
                    arr_9 [i_0] [i_0] [i_0] [i_0 - 3] = (((~4492520813311648723) ? (arr_6 [4] [4]) : (arr_7 [i_0 + 1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_20 = ((((((arr_6 [i_0 - 2] [i_0 - 3]) ? (arr_6 [i_0 - 1] [i_0 - 1]) : (arr_6 [i_0 - 1] [i_0 - 3])))) ? ((-(arr_6 [i_0 - 2] [i_0 - 2]))) : (((arr_6 [i_0 - 1] [i_0 + 3]) ? (arr_6 [i_0 + 3] [i_0 + 1]) : var_11))));
                                var_21 = ((~26744) ? (((((((arr_7 [i_3]) > 4341))) | (~32767)))) : (max((arr_6 [i_1] [i_4]), (4261100710 & 65524))));
                                var_22 = 65530;
                            }
                        }
                    }
                    arr_15 [i_0 - 1] [i_0] [i_0] [i_0] = 84;
                }
                for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
                {
                    var_23 = ((((!(arr_8 [i_0] [i_1] [i_5]))) && ((max((arr_2 [i_0]), (arr_0 [i_0] [i_0 + 1]))))));
                    arr_19 [i_0 - 2] [i_0] [i_5] = 2079678748;
                    arr_20 [i_0] = var_8;
                }
                arr_21 [i_0] [i_1] [i_1] = (((arr_11 [i_0 - 1] [i_1] [i_1] [i_1] [i_0 + 4] [i_0 - 1]) ? (((arr_11 [i_1] [9] [12] [i_1] [i_0 - 2] [i_0 - 2]) ? var_1 : (arr_11 [i_0 + 3] [i_0 - 1] [i_0] [i_0 + 3] [i_0 - 1] [i_0 - 1]))) : ((((arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] [i_0 + 1]) - (arr_11 [i_1] [i_1] [i_1] [i_0 + 1] [i_1] [i_0 + 1]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        for (int i_7 = 3; i_7 < 16;i_7 += 1)
        {
            {
                var_24 = ((arr_3 [i_6] [i_6] [i_6]) / (((arr_1 [i_6]) ? (arr_18 [i_6]) : (max((arr_0 [i_6] [i_7]), (arr_16 [i_6]))))));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 19;i_8 += 1)
                {
                    for (int i_9 = 3; i_9 < 17;i_9 += 1)
                    {
                        {
                            arr_30 [i_6] [i_7] [i_6] = ((var_13 ? ((((max(1, (arr_4 [i_6]))) < ((((!(arr_8 [i_6] [i_7 - 1] [i_6])))))))) : (arr_3 [20] [i_7 + 2] [i_7 + 3])));

                            for (int i_10 = 0; i_10 < 19;i_10 += 1)
                            {
                                var_25 = 9608;
                                arr_34 [i_10] [i_6] [i_8] [i_6] [i_6] = ((((((var_8 * 1) / (arr_3 [i_8] [i_8] [i_8])))) ? -5813 : (arr_0 [i_8] [i_8])));
                            }
                            var_26 = (((((max(113, 102)) / (9223372036854775807 || var_4)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
