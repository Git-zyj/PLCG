/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;
    var_12 = (((((11 >> ((((var_0 ? var_9 : var_8)) - 1962806251))))) ? var_3 : var_9));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_13 |= ((((((!(arr_10 [i_1 + 1] [i_1 - 1] [i_2] [i_3]))))) > (((arr_10 [i_1 + 1] [i_1 + 1] [i_2] [i_3]) ? (arr_10 [i_1 + 1] [i_2] [i_1 + 1] [i_3]) : var_3))));
                                var_14 = (arr_11 [i_0] [i_0] [i_1] [i_0] [i_4]);
                            }
                        }
                    }
                }
                var_15 = ((~(-1133 ^ var_6)));
            }
        }
    }
    #pragma endscop
}
