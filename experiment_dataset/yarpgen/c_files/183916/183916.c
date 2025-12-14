/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= var_16;
    var_19 = (min(var_11, var_14));
    var_20 = (((((~(max(var_1, 0))))) ? var_12 : (11 || -5)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] &= 3;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_13 [i_4] [i_3] [12] [i_3] [12] [i_1] [i_0] |= (arr_4 [i_3 - 2] [i_3 - 4] [i_3]);
                                var_21 = (~-5);
                                arr_14 [i_0] [i_2] [i_2] [i_0] [i_4] = 24;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
