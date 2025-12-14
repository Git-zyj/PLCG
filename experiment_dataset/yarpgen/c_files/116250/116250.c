/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 0;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((arr_3 [i_1 - 1] [i_1 - 1] [i_1]) ? (((arr_2 [i_0 - 1]) ? -7425111552284667817 : (arr_2 [i_1 + 1]))) : (((var_5 ? var_11 : var_8)))));
                arr_6 [i_1] = (max(var_10, (max((max(var_2, (arr_0 [i_0]))), ((var_0 ? var_10 : (arr_0 [i_1 + 1])))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0 + 3] [i_3] = (arr_4 [i_2] [i_3]);
                            var_13 += ((var_9 ? (max(((max(var_8, var_0))), var_11)) : var_7));
                        }
                    }
                }
            }
        }
    }
    var_14 = (max(var_14, var_10));
    var_15 = (min(var_15, ((var_2 - (((var_8 + 70) ? var_6 : ((2582944942622638583 ? -7425111552284667817 : var_10))))))));
    #pragma endscop
}
