/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((var_2 ? var_8 : var_2)) & (~var_9)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [i_0] [7] [i_1] [i_2] = (min(((var_6 + (min(var_5, 6)))), ((((arr_2 [i_1]) >= (!var_5))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_14 = ((9 - (((-(arr_10 [i_4 - 1] [i_3 - 1] [16] [i_0 - 2]))))));
                                var_15 = (((((4294967270 ? (arr_11 [i_0 - 2] [i_1 + 2] [i_2] [i_1]) : (arr_3 [i_0 - 1] [11] [i_3])))) ? (((!((min(156, (arr_3 [i_2 + 2] [i_0] [i_0]))))))) : (arr_5 [i_0] [i_1] [i_2] [i_3])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
