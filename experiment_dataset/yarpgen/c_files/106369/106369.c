/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    arr_10 [i_0] = ((((arr_1 [0]) != var_7)));
                    var_17 = (max(var_17, -7345414453921016778));
                }
            }
        }
    }
    var_18 = (max((var_4 >= 127), ((var_1 ? var_2 : var_12))));
    var_19 = ((var_1 ? (152 > 16777088) : (var_11 | var_12)));
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            {
                arr_16 [i_3 - 1] [i_3 - 1] [i_4] = ((-((((var_2 ? (arr_12 [i_3]) : var_14)) ^ var_11))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        {
                            var_20 = (((max((arr_19 [3] [3] [i_4] [i_4]), (arr_19 [i_6] [1] [1] [i_3 - 1]))) ? (~-116) : (~104)));
                            var_21 = (arr_15 [i_6]);
                            var_22 = (max(var_22, 127));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
