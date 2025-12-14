/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_8 ? ((max(((var_15 ? var_6 : var_11)), var_9))) : var_1));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                var_17 = (max(var_17, (((((max(121, 53774))) >= (((((~(arr_5 [i_0])))) ? var_2 : (!106))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_14 [18] [14] [i_2] [i_2] [i_2] [i_2] [i_2] &= (max((arr_11 [16] [i_4] [i_3 + 4] [i_2] [0] [16] [16]), (arr_4 [i_0] [i_0])));
                                var_18 -= (min(((((arr_3 [i_0 - 2] [i_4] [i_1 - 2]) != (arr_12 [i_0 - 3] [1] [i_2])))), ((var_0 & (arr_12 [i_1 + 2] [i_3 + 4] [i_4])))));
                                arr_15 [i_2] = ((-(max((-127 - 1), (((arr_4 [4] [2]) ? (arr_7 [i_4] [i_2] [i_2] [7]) : 106))))));
                            }
                        }
                    }
                }
                var_19 = 111;
            }
        }
    }
    #pragma endscop
}
