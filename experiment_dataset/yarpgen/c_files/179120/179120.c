/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_13 = (max(var_13, (((-(min((arr_4 [i_0 + 3]), var_9)))))));
                    var_14 |= ((((min((arr_8 [i_0 + 2]), 1))) ? ((min(var_9, ((var_4 || (arr_3 [i_2] [i_2])))))) : ((var_6 & ((min(var_11, var_8)))))));
                }
            }
        }
    }
    var_15 = ((var_6 ? ((42 ? (!var_8) : var_0)) : ((min(((max(7279, 1))), ((1 ? var_2 : var_7)))))));
    #pragma endscop
}
