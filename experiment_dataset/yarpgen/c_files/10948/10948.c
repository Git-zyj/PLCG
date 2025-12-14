/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= (((((95 ? (var_8 < var_14) : var_1))) ? 120 : 46156));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 17;i_4 += 1)
                            {
                                var_17 = ((var_11 ? ((var_5 ? (arr_12 [i_2]) : 1)) : (arr_7 [i_0 + 4] [i_1] [16])));
                                var_18 = (arr_2 [i_0 - 1]);
                                var_19 = (((arr_10 [i_0] [i_0] [i_0 + 3]) + ((((arr_4 [i_0] [2] [i_2]) % (arr_9 [i_3]))))));
                            }
                            for (int i_5 = 1; i_5 < 14;i_5 += 1)
                            {
                                var_20 |= 94;
                                var_21 = (min(-178, -101));
                                var_22 = (min(((-((max((arr_18 [i_5 + 1] [i_3] [i_2] [i_1] [i_0] [1] [i_0]), (arr_4 [i_0 + 1] [i_2] [i_2])))))), -93));
                            }

                            for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                            {
                                var_23 &= ((((((arr_15 [i_0] [i_0 + 1] [i_0 + 4] [7] [i_0] [i_0 + 1] [i_0]) - (arr_12 [i_0 - 1])))) ? (arr_12 [i_0 + 4]) : ((((arr_12 [i_0 + 4]) ? (arr_3 [i_0 + 1]) : (arr_12 [i_0 + 2]))))));
                                var_24 = -94;
                            }
                            for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                            {
                                var_25 = ((((max(1, (arr_14 [i_0 + 3])))) - (1 | 87)));
                                var_26 = (((((((min((arr_22 [i_7] [5] [1] [i_2] [i_2] [1] [1]), (arr_4 [12] [8] [i_7])))) & -1))) ? ((((min(1, -8352715769857846627))) ? (arr_4 [i_7] [11] [i_2]) : var_4)) : -11));
                            }
                            for (int i_8 = 0; i_8 < 17;i_8 += 1)
                            {
                                var_27 = ((((var_8 ? 8352715769857846628 : (arr_19 [i_0] [i_0] [i_2] [i_2] [i_8] [i_0] [i_3])))) ? ((((min(-1, var_2))) ? (arr_9 [5]) : ((max(var_11, (arr_24 [i_0] [i_1] [1] [i_8])))))) : ((max((arr_17 [i_0] [i_0 + 2]), 6))));
                                var_28 = (arr_5 [i_0] [i_8]);
                            }
                        }
                    }
                }
                var_29 |= (min((((arr_9 [i_0 - 1]) ? (arr_9 [i_0 + 4]) : (arr_9 [i_0 + 3]))), (((arr_11 [i_1]) ? (arr_20 [i_0] [i_0] [4] [i_1]) : ((12814215444551017638 ? var_6 : var_6))))));
                var_30 = (max(var_30, (arr_0 [i_1])));
            }
        }
    }
    #pragma endscop
}
