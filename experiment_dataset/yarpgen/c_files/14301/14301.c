/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, ((min(((min(var_4, var_1))), var_5)))));
    var_14 = var_3;
    var_15 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_0] = ((((min((arr_7 [i_0 - 2] [i_0 - 3]), -var_5))) ? (((arr_2 [i_0]) ? 3520534160939893904 : var_8)) : (((var_0 ? 12 : (arr_7 [i_0] [i_0]))))));
                    var_16 = (arr_3 [i_2]);
                    var_17 = ((((~173) < (min((arr_0 [i_0]), 1015808)))) ? (((((arr_0 [i_0 - 2]) || 256)))) : (arr_1 [i_0]));
                }
            }
        }
    }
    #pragma endscop
}
