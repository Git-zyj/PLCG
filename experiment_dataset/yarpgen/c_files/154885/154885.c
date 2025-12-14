/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154885
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(0, (min(1006285661, (max(1006285661, 1006285661))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_21 *= var_7;
                                var_22 = (min(var_22, ((max((max((arr_7 [i_2] [i_3 - 4] [i_1] [i_2]), (arr_7 [i_3] [i_3 - 2] [i_3] [i_3]))), (max((arr_7 [i_3] [i_3 + 1] [i_2] [i_3]), (arr_7 [i_3] [i_3 - 1] [i_2] [i_3]))))))));
                            }
                        }
                    }
                    var_23 = ((((+(max((arr_0 [i_2]), 3)))) | ((((((max((arr_2 [i_2]), (arr_0 [i_0])))) && var_17))))));
                }
            }
        }
    }
    #pragma endscop
}
