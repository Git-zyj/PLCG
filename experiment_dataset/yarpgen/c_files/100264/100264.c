/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= max(var_11, var_9);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_16 = (min((arr_3 [i_0]), (((!(!var_7))))));
                var_17 = (((((arr_5 [i_0]) ? (((arr_3 [i_0]) - (arr_2 [i_0]))) : (arr_4 [i_1] [i_1]))) % (((min((arr_4 [i_1] [i_1]), (arr_4 [i_1] [i_1])))))));
            }
        }
    }
    #pragma endscop
}
