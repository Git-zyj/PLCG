/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152303
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (!var_1);
    var_20 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_21 = (((((~(arr_2 [i_0 - 1] [i_0]))) ^ (arr_5 [3]))) ^ ((((arr_5 [i_0 + 2]) ? (arr_5 [i_0 + 1]) : (arr_5 [i_0 - 1])))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_22 = -30267;
                                var_23 = (max(var_23, (((((max((arr_12 [i_0] [i_1] [i_1] [i_0 + 1] [8]), (arr_12 [i_0] [i_1] [i_0] [i_0 + 2] [i_0])))) | (((arr_11 [i_1] [i_1] [i_2] [i_3] [i_4]) & (min((arr_3 [i_0 + 2] [i_2] [i_3]), var_10)))))))));
                                arr_14 [i_0] [5] [i_3] [i_0] = (i_0 % 2 == zero) ? ((((arr_8 [i_0] [i_3] [i_2] [i_0]) << ((((~(max((arr_10 [i_0] [i_0]), (arr_2 [i_0] [i_0]))))) - 3854434125))))) : ((((arr_8 [i_0] [i_3] [i_2] [i_0]) << ((((((~(max((arr_10 [i_0] [i_0]), (arr_2 [i_0] [i_0]))))) - 3854434125)) - 3702632772)))));
                            }
                        }
                    }
                }
                var_24 = (arr_4 [i_0]);
                /* LoopNest 3 */
                for (int i_5 = 1; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 10;i_7 += 1)
                        {
                            {
                                arr_22 [i_0] [i_0] [i_0] [i_0] [i_7] = ((-(arr_3 [i_0 + 1] [i_0 + 2] [i_0])));
                                arr_23 [i_0] [i_0] [i_0] [i_6] [i_7] = ((((arr_19 [i_7 - 3] [i_7 - 1] [i_7 - 2] [i_7 - 3] [i_7 + 3]) ? (arr_19 [i_7 + 1] [i_7] [i_7 + 1] [i_7 - 1] [i_7 - 2]) : (arr_19 [i_7 - 2] [i_7] [i_7 + 3] [i_7 + 3] [i_7 + 1]))) - (arr_19 [i_7 + 3] [i_7] [i_7 - 2] [i_7 + 3] [i_7 - 2]));
                                var_25 = ((((9719 + ((var_16 ? (arr_15 [i_1] [i_5] [7] [7]) : 14603))))) ? (!-29498) : (arr_21 [i_7 - 2] [i_7 - 2] [i_7] [i_7 + 4] [i_7 + 4]));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
