/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_6;
    var_20 = (max(-2147483638, 242));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        var_21 = (arr_1 [i_0 + 1]);
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_3] [i_2] [i_0] = (arr_7 [i_0 - 1] [18] [i_0] [6] [i_4]);
                                var_22 = (min(var_22, (arr_3 [i_4] [i_4])));
                            }
                        }
                    }
                    var_23 = (max(var_23, (((((arr_6 [i_0] [12] [i_2]) ? var_14 : (arr_8 [i_0 + 1] [i_0] [i_2] [22] [i_0 + 1])))))));
                }
            }
        }
    }
    var_24 = ((-2147483647 ? 3389 : 3389));
    #pragma endscop
}
