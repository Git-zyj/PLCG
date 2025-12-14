/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((min(((max(var_12, 17523))), var_4)), var_4));

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        arr_2 [7] = ((-((min((arr_1 [i_0] [i_0 - 1]), (arr_1 [i_0] [i_0 + 2]))))));
        arr_3 [i_0 + 1] [i_0] = ((((var_13 ? (arr_1 [i_0 + 1] [i_0 + 1]) : (arr_1 [i_0 + 2] [i_0 - 2]))) - ((min((arr_1 [i_0 - 2] [i_0 + 1]), (arr_1 [i_0 - 2] [i_0 + 1]))))));
    }
    var_18 = (((((-((var_15 ? var_7 : var_12))))) ? ((-((var_9 << (var_2 + 14091))))) : -var_4));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        for (int i_2 = 3; i_2 < 16;i_2 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        {
                            var_19 = 245;
                            arr_13 [2] [2] [i_3] [i_4] [i_4] [i_2] = ((var_12 ? (((((((arr_8 [i_4] [i_2] [i_2] [i_4]) | var_5)) + 2147483647)) >> (((((arr_6 [i_1] [1]) ? var_7 : (arr_9 [i_2] [i_3] [i_4]))) - 8583129605123350055)))) : (min(((min((arr_6 [i_1] [i_2]), (arr_9 [i_4] [i_3] [i_1])))), ((var_8 ? var_5 : (arr_10 [i_1] [i_2 - 1] [i_3] [i_4] [i_2])))))));
                            var_20 = (max(var_20, ((max((((arr_6 [i_2 - 2] [i_4]) | var_6)), ((((arr_5 [i_4] [i_1]) ^ (arr_5 [i_1] [i_3])))))))));
                        }
                    }
                }
                arr_14 [i_2] = (min((arr_5 [i_2 + 3] [i_2]), (max((min((arr_8 [i_1] [i_1] [i_1] [1]), (arr_8 [i_1] [i_1] [i_1] [i_1]))), (arr_5 [i_1] [i_2])))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 24;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 22;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 23;i_9 += 1)
                        {
                            {
                                var_21 = (arr_25 [i_5]);
                                arr_27 [i_5] [i_6] [i_5] [i_5] [i_5] = (i_6 % 2 == 0) ? (((((((arr_22 [i_6 + 1] [i_6] [i_9 + 2] [i_9 - 1]) << (((arr_21 [i_5 - 1] [i_6 - 2] [i_7 - 2] [i_6]) - 21604))))) * (((arr_17 [i_5 - 1]) % (min(var_4, var_12))))))) : (((((((arr_22 [i_6 + 1] [i_6] [i_9 + 2] [i_9 - 1]) << (((((arr_21 [i_5 - 1] [i_6 - 2] [i_7 - 2] [i_6]) - 21604)) - 388))))) * (((arr_17 [i_5 - 1]) % (min(var_4, var_12)))))));
                                var_22 = (max((min((arr_19 [i_5 - 1] [i_7 - 2] [i_8 - 1]), (arr_19 [i_5 - 1] [i_7 + 3] [i_8 - 1]))), ((var_0 ? (arr_23 [i_5] [i_6 + 1] [i_8 - 1] [i_8] [i_9] [i_5]) : (arr_19 [i_5 - 1] [i_7 - 1] [i_8 - 1])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 24;i_11 += 1)
                        {
                            {
                                arr_33 [i_6] [i_6] = (arr_17 [i_11 - 2]);
                                var_23 = 48029;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
