/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;
    var_11 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (arr_1 [i_1] [i_1]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_12 = (arr_2 [i_0 - 1] [i_0]);
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0 - 3] [5] [i_1] = -6706375961446824598;
                                arr_14 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4] [i_1] = (arr_12 [i_4] [i_3] [i_0] [i_0]);
                                var_13 = ((-6706375961446824598 >= (arr_11 [i_4 - 2] [i_4 + 1] [i_1] [i_4 - 2] [i_4])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = (((-(var_4 == var_8))));
    #pragma endscop
}
