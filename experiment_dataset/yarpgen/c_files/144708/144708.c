/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_2] [i_0] = ((arr_3 [14] [14] [i_2]) + var_2);
                    arr_9 [i_0] [10] [10] [i_0] |= (((((arr_6 [8] [i_1 - 1] [i_2 - 1]) / (arr_6 [18] [i_1 + 1] [i_2 - 1]))) + (((arr_6 [2] [i_1 + 2] [i_2 + 1]) - (arr_6 [12] [i_1 - 1] [i_2 + 1])))));
                    arr_10 [i_2] [12] [i_1] [i_2] = (min(var_4, ((min((max(0, 1957312316)), 202)))));
                    arr_11 [10] [2] [16] = (max(var_9, (arr_7 [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_16 [i_3] [i_3] [i_3] |= 202;
                                arr_17 [i_0] [i_2] [i_0] [i_2] [i_0] [i_0] [20] = var_8;
                                arr_18 [i_2] = (!var_7);
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = var_6;
    var_15 = (((((((var_11 ? var_12 : var_6))) ? var_11 : -113))) ? var_10 : (var_0 | 4294967295));
    var_16 = var_7;
    #pragma endscop
}
