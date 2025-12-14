/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= 1;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_1 - 1] [i_1] [7] = (79 * -1);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_20 = (max(var_20, (!var_6)));
                                arr_15 [i_3] = -79;
                                arr_16 [i_4] [i_4] [i_4] [i_3] [i_4] = ((((((arr_9 [i_1] [4] [i_3] [i_1 + 1]) < (arr_9 [i_0] [i_1 - 1] [i_2] [i_1 + 3])))) >= 1391735025));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = (min(1391735024, var_1));
    #pragma endscop
}
