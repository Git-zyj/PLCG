/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = (max(var_15, (((var_9 ? (!var_10) : ((max(var_7, var_12))))))));
                var_16 &= ((min((min(var_5, var_5)), (arr_1 [i_1]))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_17 = var_9;
                            var_18 = ((max(((var_6 ? var_12 : (arr_9 [i_0] [10] [8] [i_0] [i_0 - 1] [i_0]))), ((max(var_11, var_10))))));
                        }
                    }
                }
                var_19 ^= (max((min(((var_5 ? var_9 : var_5)), (min(var_3, var_11)))), ((max(((max((arr_8 [7] [i_1]), var_0))), (max(1, 0)))))));
            }
        }
    }
    var_20 = (min(((min(var_6, var_7))), var_8));
    var_21 = ((-223065296 ? 175 : 0));
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 24;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                {
                    arr_18 [i_4] = var_10;
                    arr_19 [7] [i_5] [i_4] [i_5] = (min(((2147483647 ? ((var_0 ? var_4 : 14350)) : 255)), 1));
                }
            }
        }
    }
    #pragma endscop
}
