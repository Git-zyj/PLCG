/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_13 = (arr_1 [i_0]);
                arr_4 [i_1] [11] [i_0] = ((((((arr_2 [i_0] [i_1] [i_0]) ? (arr_2 [i_0] [i_0] [i_1]) : (arr_3 [i_0] [i_1] [i_0])))) ? (((((arr_3 [i_0] [10] [i_0]) ? var_1 : var_0)) | (max(var_9, var_3)))) : (max(var_6, var_3))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_14 = (min(var_14, (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])));
                                arr_13 [i_2] [i_3] [i_2 + 1] [i_1] [i_2] = (min(var_8, 621091513));
                                var_15 = (max(var_15, ((min(((var_3 ? (arr_5 [i_2] [i_0] [i_0] [i_1]) : var_1)), -75)))));
                                var_16 = (--74);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
