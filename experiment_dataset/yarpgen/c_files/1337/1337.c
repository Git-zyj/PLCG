/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1337
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_13 = ((min((arr_4 [i_0 - 1] [i_0 - 4] [i_0 - 4]), (arr_4 [i_0 - 2] [i_0 - 1] [i_0 - 1]))));
                    arr_8 [i_0 - 4] [1] [2] = (~((88 ? (min(-955237130, -2798)) : ((max(var_2, 167))))));
                    var_14 = (min(((78 ? var_6 : (arr_1 [i_0 + 1]))), (arr_4 [i_0] [i_0 + 2] [i_0])));
                }
            }
        }
    }
    var_15 = var_9;
    var_16 = var_12;
    var_17 = (((var_1 ? (var_9 >= 96) : var_3)));
    var_18 += var_9;
    #pragma endscop
}
