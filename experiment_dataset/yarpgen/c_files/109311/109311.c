/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109311
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 492223639;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_12 = var_6;
                            arr_8 [i_1] = ((((((arr_4 [i_2 - 1] [i_3 + 1] [i_3 + 1] [i_1]) ? var_5 : (arr_6 [i_1] [i_3 + 1] [i_2])))) ? 492223639 : 492223640));
                        }
                    }
                }
                arr_9 [i_1] [i_1] = (arr_0 [i_1]);
                arr_10 [i_0] [i_1] [i_1 + 2] = var_7;
            }
        }
    }
    #pragma endscop
}
