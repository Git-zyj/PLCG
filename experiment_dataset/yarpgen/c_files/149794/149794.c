/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {
                var_20 += (min(((max(var_12, var_5))), ((var_15 ? var_18 : var_6))));
                var_21 = (max(var_21, ((min(((var_12 ? ((var_11 ? var_9 : var_11)) : var_1)), (((((min(var_16, var_5))) ? var_7 : var_13))))))));
                var_22 = ((var_11 / (min((min(var_0, var_9)), var_4))));
            }
        }
    }
    var_23 = (max(var_23, (((((min(((var_1 ? var_2 : var_2)), (min(var_2, var_2))))) ^ (((((var_1 ? var_3 : var_13))) ? ((var_3 ? var_4 : var_9)) : ((min(var_0, var_4))))))))));
    var_24 += ((var_6 || ((min((!var_7), ((var_2 ? var_15 : var_0)))))));
    #pragma endscop
}
