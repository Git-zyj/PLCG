/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152591
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_0] [1] = (min(((max(((var_8 ? -26 : 7605247774385586530)), -7605247774385586513))), ((var_7 ? var_7 : (var_12 | var_10)))));
                arr_5 [i_0] = (((~var_7) + (((~7605247774385586555) | ((((!(arr_1 [i_1])))))))));
                var_15 = ((((min(28799, 7605247774385586562))) ? 32764 : 7605247774385586548));
            }
        }
    }
    var_16 = ((!((((((11 - 7605247774385586573) + 9223372036854775807)) >> (-7605247774385586537 + 7605247774385586583))))));
    var_17 = var_9;
    #pragma endscop
}
