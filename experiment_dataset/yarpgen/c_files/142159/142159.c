/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_14 = (!669783362904367814);
                var_15 = var_5;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [12] [i_0] [i_0] [i_0] [i_0] [i_0] = (!(arr_11 [i_0] [i_0]));
                                var_16 = (min(16308427781106764750, 669783362904367806));
                                var_17 = (min(var_17, ((min(17776960710805183790, var_3)))));
                                arr_13 [i_4 - 2] [i_2] [i_1 + 1] = (max(112, 1));
                                var_18 |= -10303694170567754470;
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (11822781745346673124 && 17776960710805183780);
    #pragma endscop
}
