/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((max(var_4, (var_18 > var_12))) ^ var_4));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_21 = (min(var_21, (arr_1 [15])));
                    var_22 = ((1418765312 ? ((((((arr_5 [i_0] [11] [i_0]) ? var_9 : var_4))) * ((var_3 ? var_11 : (arr_4 [i_2] [i_1 - 2] [i_2]))))) : var_19));
                }
            }
        }
    }
    #pragma endscop
}
