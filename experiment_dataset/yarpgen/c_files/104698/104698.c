/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            {
                var_19 = ((((1 ? var_6 : 17912520484279959019)) ^ (((((arr_1 [i_0 + 1]) && var_10))))));
                var_20 = (~-16386);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_21 = (min(var_21, (((((max(-16402, 229))) ? ((max(((173 ? 38750 : var_11)), ((max(var_9, var_2)))))) : var_4)))));
                            var_22 = (arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_3]);
                        }
                    }
                }
                var_23 = (!38051);
            }
        }
    }
    var_24 = (max(var_24, var_0));
    var_25 = var_5;
    var_26 &= ((var_4 ? (max(var_10, var_2)) : (var_2 || 16385)));
    #pragma endscop
}
