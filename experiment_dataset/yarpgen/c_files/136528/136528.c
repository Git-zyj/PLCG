/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136528
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max((max(var_15, (max(var_8, var_10)))), ((max(0, (max(var_2, 13)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] [i_1] = (max(((((-971485055627395877 ? 22 : 1)) < (arr_5 [i_0] [i_0] [i_0]))), 1));
                arr_7 [i_1] [i_1] [i_1] = ((1 ? (max((((arr_5 [i_1] [i_1] [i_0]) ? var_14 : (arr_2 [i_1] [i_1]))), (((arr_1 [i_0]) / (arr_5 [i_0] [i_1] [i_1]))))) : 1));
            }
        }
    }
    #pragma endscop
}
