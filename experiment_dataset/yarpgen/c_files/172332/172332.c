/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_20 = (((min(var_10, (max((arr_4 [i_1] [i_0 - 1] [i_0 - 1]), 6877132170330381513)))) / (((659910372451945258 ? (((var_0 ? var_7 : 127))) : (min(var_2, var_17)))))));
                arr_5 [i_0 - 1] [i_0 - 1] [i_0] = 114;
                arr_6 [i_0] [i_1] = ((((max(((min((arr_0 [i_0 - 1]), 40244))), ((var_1 ? 0 : -759230549))))) ? ((((!(arr_4 [i_0] [i_0] [i_0]))))) : (~-659910372451945258)));
            }
        }
    }
    #pragma endscop
}
