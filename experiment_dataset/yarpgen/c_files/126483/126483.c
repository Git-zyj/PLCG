/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126483
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (~26696);
    var_16 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_17 = (min(var_17, (arr_8 [0] [0])));
                                var_18 -= (0 < -26721);
                                var_19 = (arr_11 [i_1] [6]);
                                var_20 = (min(var_20, ((((1 ? ((min(var_3, var_9))) : (arr_6 [i_3] [i_2] [i_1] [i_3])))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_21 = (max((min(((var_6 ? var_10 : var_10)), var_6)), (arr_8 [i_5] [i_5])));
                                var_22 = ((max(var_7, 1)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
