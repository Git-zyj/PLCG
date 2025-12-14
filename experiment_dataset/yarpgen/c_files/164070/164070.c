/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_1] [i_1] &= ((var_8 ? var_2 : (arr_6 [i_0] [i_1] [i_0] [i_2])));

                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        arr_11 [i_0] [i_2] = (min((arr_2 [i_2 + 2]), (--30412)));
                        var_11 = var_2;
                        var_12 = (min(var_12, (((((8600 > 8600) ? (((min(8600, (arr_10 [i_0] [i_1]))))) : 6961639653550622163))))));
                    }
                    var_13 *= (arr_2 [i_0]);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            {
                                var_14 = ((var_5 ? (arr_13 [i_0] [i_1] [i_2] [i_1 - 1] [i_5] [i_2]) : (min((arr_13 [i_0] [i_1] [i_2] [i_1 - 2] [i_5] [i_5]), var_4))));
                                var_15 = (min((var_6 + var_8), ((var_7 ? var_0 : (((var_7 ? 0 : var_6)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = -var_2;
    var_17 += (30412 << ((((((var_7 ? var_1 : -8600)) + 3507542840061552025)) - 54)));
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            {

                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    var_18 = ((((min(var_1, var_4))) ? (min(3310287595, (8625 | var_3))) : -28317));
                    var_19 = (max(-2035, var_4));
                    arr_25 [i_7] [i_7] = ((((min((arr_19 [i_6] [i_8]), (arr_19 [i_6] [i_7])))) ? ((min((arr_23 [i_6] [i_6]), (arr_23 [i_7] [i_8])))) : (3314073778 != 2043)));
                }
                for (int i_9 = 1; i_9 < 18;i_9 += 1)
                {
                    arr_29 [i_7] = min(((((arr_28 [i_9 - 1] [i_7] [i_7] [i_7]) ? (arr_28 [i_9 + 1] [i_7] [i_9 + 1] [i_9 + 1]) : (arr_28 [i_9 + 3] [i_7] [20] [i_7])))), var_9);
                    var_20 = (min(var_20, var_5));
                }
                var_21 = ((((var_5 ? ((var_4 ? var_8 : var_2)) : (min(1323791120, var_0))))) ? (arr_19 [i_6] [i_6]) : ((max(-8632, var_7))));
                arr_30 [i_7] = var_10;
            }
        }
    }
    #pragma endscop
}
