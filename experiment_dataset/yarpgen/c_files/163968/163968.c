/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_15 -= (min(1788949864, (min((arr_6 [i_0 - 2]), (arr_6 [i_0 - 2])))));
                    arr_8 [i_0] [i_0] [i_1] = ((-1 ? (((var_6 / var_0) * ((var_7 ? var_3 : (arr_2 [i_0]))))) : var_12));
                    var_16 = (var_10 ? ((((((arr_7 [i_0 - 1] [i_0]) + 2147483647)) >> (((arr_1 [i_0 - 3]) - 60376))))) : (~var_10));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_14 [i_3] [i_3] [i_3] [i_3] [i_1] [i_3] [i_3] = (max((arr_2 [i_0]), (((((13059 / (arr_5 [i_0 - 3] [i_1])))) ? ((((!(arr_3 [i_1]))))) : ((var_7 ? var_14 : var_10))))));
                                arr_15 [i_4 - 2] [i_1] [10] [i_1] [i_1] [i_0] = -var_2;
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = ((var_8 ? ((2017612633061982208 ? (min(16429131440647569407, var_1)) : (((var_11 ? var_9 : var_8))))) : 0));
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 12;i_6 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_7 = 1; i_7 < 10;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 12;i_9 += 1)
                        {
                            {
                                var_18 = ((((!((min(var_11, 8918954651065134548)))))));
                                arr_28 [8] [8] [i_7] [i_8 + 2] = ((((((arr_9 [i_5 - 1] [i_5 - 1] [i_5] [i_7] [i_5 - 1]) ? ((min(var_4, (arr_5 [i_6] [i_7])))) : var_10))) ^ (~var_10)));
                            }
                        }
                    }
                }
                var_19 = (~-16429131440647569396);
                var_20 = (min(((((((arr_23 [i_5] [i_5] [1]) ^ var_12))) && (((var_4 - (arr_11 [i_5] [i_6 - 2] [i_5] [i_5] [i_5])))))), var_14));
            }
        }
    }
    #pragma endscop
}
