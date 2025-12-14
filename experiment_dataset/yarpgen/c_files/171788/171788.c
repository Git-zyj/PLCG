/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_1] [i_2] [i_3] [i_0] [i_4] = var_9;
                                var_10 -= ((((max(var_1, var_8))) ? var_8 : (arr_6 [i_4] [8] [8] [i_0])));
                                var_11 = (!var_0);
                                var_12 = ((max(0, var_9)));
                            }
                        }
                    }
                }
                var_13 = (max(var_13, (((((((20 & 2197792748) ? var_6 : var_5))) % (max(-1, 288225978105200640)))))));
                var_14 = ((max(var_8, var_4)));
            }
        }
    }
    var_15 = (min(8364852623802414746, (((var_6 ? (!var_4) : 669832371)))));
    #pragma endscop
}
