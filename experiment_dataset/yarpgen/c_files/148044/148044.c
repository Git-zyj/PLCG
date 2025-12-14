/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_1, var_6));
    var_13 = var_9;
    var_14 = (min(var_5, ((((var_9 && var_9) || var_11)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    var_15 = ((((min((arr_7 [i_0] [i_0] [i_2] [i_2 - 1]), 1374973984))) ? (max(var_2, 4294967295)) : (!1)));
                    var_16 = (max(var_16, (!513528877)));
                }
            }
        }
    }
    #pragma endscop
}
