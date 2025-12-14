/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_11 [i_3] [i_2] [i_3] [i_1] [i_0] = (arr_10 [i_3]);
                            var_12 = ((!((min(2012824879, (((!(arr_6 [1])))))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_21 [i_4] &= (arr_3 [i_6] [4]);
                                var_13 = (min((((arr_8 [i_6] [i_5] [6] [10] [i_0]) * (arr_6 [i_5]))), (arr_0 [i_6])));
                                var_14 = ((max((max(1203463047, (arr_4 [i_4] [i_1])), (((arr_6 [i_1]) & (arr_8 [11] [i_5] [i_0] [5] [i_0])))))));
                                var_15 *= (((((var_5 ? (arr_17 [i_6] [i_5] [i_4] [i_4] [i_1] [i_0]) : (arr_6 [10])))) ? (((arr_14 [i_5]) ? (arr_14 [i_4]) : (arr_14 [i_4]))) : 231));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            {
                                var_16 &= (arr_3 [i_8] [6]);
                                var_17 = (max(var_17, ((((arr_9 [i_7]) ? (!var_5) : (arr_24 [i_0] [7] [i_7] [i_8]))))));
                                var_18 = ((-(max((arr_23 [3] [i_8] [i_7] [i_1]), -122))));
                                var_19 = (max((arr_27 [i_8]), (3077626952600884887 / -8931)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
