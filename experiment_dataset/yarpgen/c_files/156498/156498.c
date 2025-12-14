/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((max(var_5, ((-26499 ? 65535 : var_12))))) ? -var_10 : ((min(var_9, -1)))));
    var_14 = var_10;
    var_15 = (var_6 ^ var_8);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_16 = (((-(((arr_5 [i_0] [i_0] [i_1]) ? -4 : (arr_0 [i_0] [i_1]))))) * ((((min(0, (arr_3 [i_0] [i_1] [i_1])))))));
                arr_6 [i_0] [i_1] = (min(15745064282147966008, -1771672141216899650));
            }
        }
    }
    #pragma endscop
}
