/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((min((((var_13 ? var_7 : -82))), var_4)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_21 = (arr_11 [i_3] [21] [i_2] [i_3] [i_2] [i_1]);
                                arr_16 [i_0] [i_2] = ((((arr_0 [i_3 - 2] [i_0 + 2]) ? (arr_11 [i_0 + 1] [i_0 + 1] [i_0] [i_0 - 1] [i_0] [i_0 + 1]) : (arr_9 [i_0] [i_3 - 3] [12] [i_0 - 1]))));
                            }
                        }
                    }
                }
                var_22 = (((((((-405921862 ? (arr_3 [i_0]) : (arr_3 [i_1])))) ? (arr_7 [i_0 + 1] [10]) : var_16)) >> ((max(15, 60)))));
            }
        }
    }
    #pragma endscop
}
