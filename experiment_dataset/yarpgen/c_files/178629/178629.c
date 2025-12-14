/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, var_1));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [1] = 255;
                var_13 = ((11764657508632110130 ? var_10 : 0));
                var_14 = -1;
                arr_6 [i_0 - 1] [i_1] = var_2;
            }
        }
    }
    var_15 = 524287;
    #pragma endscop
}
