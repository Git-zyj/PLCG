/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155605
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += ((!((max(2147483647, 1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_18 = ((-var_11 / (1 >> 0)));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_4] [i_0] [i_0] [i_3] [i_4] = 65523;
                                var_19 = (min(837623999, 1));
                            }
                        }
                    }
                }
                var_20 = (arr_2 [i_1 + 2] [i_1 + 1]);
            }
        }
    }
    var_21 = ((min(var_16, ((max(3838657931, var_11))))));
    #pragma endscop
}
