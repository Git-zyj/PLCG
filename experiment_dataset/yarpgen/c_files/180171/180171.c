/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180171
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (43335 > 240);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_15 [i_3 + 1] [i_1] [i_3] &= ((((((arr_13 [i_4 - 1] [i_4] [i_4] [i_4] [i_4]) ? (arr_13 [i_4 + 4] [i_4 + 4] [i_4] [i_4] [21]) : (arr_13 [i_4 + 2] [i_4 + 2] [i_4] [i_4] [i_4])))) ? 11896 : ((4354 ? 233125532 : (arr_13 [i_4 - 3] [3] [i_4] [i_4] [i_4])))));
                                arr_16 [i_0] [i_1] [i_3] [i_3] [i_4] = ((max(((19129 ? 1060797238 : 64)), -195)));
                                var_11 = ((~(min((((arr_10 [i_0] [18] [i_0] [7] [i_0]) ? (arr_5 [i_0] [i_1] [19] [i_4]) : (arr_8 [i_2]))), (((60 ? var_2 : 4294967291)))))));
                                var_12 = 62;
                                var_13 = 44147;
                            }
                        }
                    }
                    var_14 = (min(var_14, (((((((arr_9 [i_2 - 2] [i_2] [i_2 - 3] [i_2]) ? (arr_9 [i_2 - 2] [i_2] [i_2 - 4] [i_2 - 2]) : (arr_9 [i_2 - 2] [i_2] [i_2 - 1] [i_2 - 4])))) ? (arr_9 [i_2 - 2] [i_2] [i_2] [i_2 - 1]) : ((var_4 ? (arr_9 [i_2 - 2] [i_2 - 2] [i_2 - 1] [i_2 - 2]) : (arr_9 [i_2 - 2] [i_2 - 3] [i_2] [i_2]))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_22 [19] [i_1] [i_1] [i_2 - 3] [i_5] [i_0] [i_6] = (arr_6 [i_0] [i_6]);
                                arr_23 [i_1] [i_0] [i_1] [i_5] [i_1] [i_1] [i_1] = ((((((arr_21 [i_0] [i_1] [12] [2]) ? var_0 : var_4))) ? (((((arr_11 [i_2] [i_2 - 1] [i_2 - 2] [i_2 - 1] [i_2 - 3]) && (arr_11 [i_2] [14] [i_2 - 2] [i_2 - 1] [i_2 - 3]))))) : (min((arr_18 [5] [5] [5] [5]), ((max(var_0, var_5)))))));
                                var_15 = (min(var_6, (min(-var_2, ((217 ? 0 : 5785058746505547468))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = (max(var_16, var_6));
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        for (int i_8 = 3; i_8 < 20;i_8 += 1)
        {
            {
                arr_29 [18] &= ((((((((var_4 ? 252 : -6766473054095857045))) ? ((((arr_9 [i_7] [i_8] [i_8] [i_7]) != (arr_1 [i_7])))) : (arr_11 [i_7] [i_8 + 2] [i_8 + 2] [i_8] [10])))) ? ((((arr_1 [i_8 + 1]) ? (arr_17 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]) : (arr_28 [i_7] [i_7])))) : (arr_20 [i_7] [i_7] [i_8] [i_8] [i_8 - 2])));
                arr_30 [4] |= (min(159, ((6090023503555094505 ? 121 : (arr_14 [i_7])))));
            }
        }
    }
    #pragma endscop
}
