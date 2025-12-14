/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186720
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((var_9 && ((min(var_0, var_2))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_14 = var_10;
                arr_6 [i_1] |= (((arr_5 [15]) ? (((arr_2 [i_0] [i_1]) ? var_12 : (arr_2 [i_0] [i_1]))) : (arr_5 [3])));
                arr_7 [i_0] [i_0] [i_1] = ((-(arr_0 [1])));
                arr_8 [i_0] [i_0] [i_1] = var_9;
            }
        }
    }
    #pragma endscop
}
