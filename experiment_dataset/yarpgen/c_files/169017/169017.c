/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_16 = (min(var_16, ((((arr_4 [i_0] [i_0] [i_1]) ? (((((min((arr_4 [i_0] [i_1] [i_0]), 1))) - (arr_3 [7])))) : (max(-1844679918404754918, ((((arr_3 [i_0]) ? (arr_4 [i_1] [i_0] [i_0]) : (arr_3 [i_1])))))))))));
                var_17 += (min((max(1353712513, (((arr_0 [i_0]) ? var_2 : -1844679918404754918)))), var_12));
                arr_5 [i_0] [i_0] [i_1] = ((min(-4294967275, -1)));
            }
        }
    }
    var_18 = var_8;
    #pragma endscop
}
