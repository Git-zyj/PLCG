/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_11 = (max(var_11, ((max(var_10, -var_8)))));
                    arr_10 [i_0] [i_0] [i_0] [i_0] = (!var_9);
                    arr_11 [i_0] [i_0] [1] [11] = ((var_10 << (((-4506059541255191515 | var_6) % var_8))));
                }
            }
        }
    }
    var_12 = (((((var_10 - var_1) * var_10)) & (!var_7)));
    #pragma endscop
}
