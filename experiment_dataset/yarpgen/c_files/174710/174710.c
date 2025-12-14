/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_10 = ((min((arr_1 [i_1 - 1]), 16589)) % (max((arr_1 [i_1 - 1]), 109)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_1 - 1] [i_1] [i_3] = 2;
                            var_11 = (((arr_3 [i_1 - 2] [i_1 - 1] [i_1]) >= ((var_3 ? (arr_3 [i_1 - 2] [i_1 + 1] [i_1]) : (arr_3 [i_1 + 1] [i_1 - 1] [i_1])))));
                            var_12 = (arr_9 [i_1 + 1] [i_1] [i_1]);
                        }
                    }
                }
            }
        }
    }
    var_13 = ((((max((((var_7 ? var_9 : 16589))), var_1))) ? var_8 : ((((max(var_5, var_3))) ? var_0 : 2197949513728))));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            {
                arr_18 [i_5] [i_5] = (((((((max(21, 4))) ? var_3 : (min((arr_11 [i_5] [i_5] [i_4] [i_4] [i_4]), var_5))))) ? (arr_11 [i_4] [i_4] [i_4] [i_5] [i_5]) : (arr_1 [i_5])));
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 11;i_8 += 1)
                        {
                            {
                                var_14 = ((((min((arr_12 [i_8] [i_8 + 1] [i_8 - 1] [i_8 + 1] [i_8 + 1] [i_8 + 1]), (arr_12 [i_8] [i_8] [i_8 - 1] [i_8] [i_8 + 1] [i_8 + 1])))) ? ((~(arr_12 [i_8 - 1] [i_8] [i_8 - 1] [10] [i_8 + 1] [i_8]))) : ((min(var_9, (arr_12 [i_8] [i_8 - 1] [i_8 - 1] [i_8] [i_8 + 1] [i_8 + 1]))))));
                                var_15 = (arr_17 [i_4] [i_5] [i_6]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
