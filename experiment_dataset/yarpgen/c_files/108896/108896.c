/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, var_8));
    var_15 += ((var_6 ? var_11 : var_11));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_16 = ((((((max((arr_5 [i_1] [i_2]), (arr_10 [i_4] [i_1] [i_2] [i_1] [i_0] [i_0]))) * (((arr_11 [i_0] [i_2] [i_3] [i_4]) ? 4134268376372820864 : (arr_11 [i_0] [i_0] [i_2] [i_0])))))) ? (arr_3 [i_3 - 2]) : 1));
                                var_17 = ((1125899906842623 ? (arr_13 [i_4] [i_4 - 2] [i_4 - 2] [i_4 + 2] [i_4]) : (((arr_11 [i_0] [i_2] [i_3] [i_2]) ? ((~(arr_4 [i_0] [i_1]))) : ((min(var_6, var_4)))))));
                                var_18 += ((~(((!(((-(arr_10 [1] [i_1] [i_2] [i_3] [i_4] [i_2])))))))));
                            }
                        }
                    }
                    var_19 = (min(var_19, ((-(((arr_11 [i_0] [i_1] [17] [i_2]) + (arr_9 [i_0] [i_1] [i_2] [i_2])))))));
                    arr_14 [i_1] [9] [i_1] |= (arr_8 [i_0] [i_1] [13] [i_2]);
                    var_20 = (min(var_20, var_12));
                }
            }
        }
    }
    #pragma endscop
}
