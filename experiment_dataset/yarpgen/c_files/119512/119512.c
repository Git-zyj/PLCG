/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_1] [i_2] = (min(((((max((arr_0 [14] [2]), var_15))) ? (((0 ? (arr_4 [i_2 - 3] [10] [i_0]) : 0))) : ((~(arr_5 [i_2] [13] [14] [6]))))), -1));
                    arr_8 [i_1] = ((((~((var_7 ? var_13 : (arr_1 [i_0]))))) - 29842));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_15 [i_1] [i_3] [i_2 + 2] [i_1] [i_1] = ((arr_6 [i_0] [6] [4] [i_0]) - (29814 - -var_4));
                                arr_16 [i_1] [i_1] = ((((((arr_11 [i_2 - 1] [i_1 + 1] [i_2] [1] [9]) ? (max((arr_11 [i_0] [10] [i_2] [4] [4]), (-127 - 1))) : 1))) / (max(((1 / (arr_5 [1] [10] [2] [1]))), var_7))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = ((min((var_11 % var_2), ((var_2 ? var_4 : var_6)))));
    #pragma endscop
}
