/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_1 + 1] |= (max(((min((max(var_4, var_9)), ((max(var_3, var_6)))))), var_19));
                arr_5 [i_1] [i_0] [i_1 - 1] = (max(((((var_7 != var_18) >> ((((var_17 ? var_2 : var_17)) - 25157))))), (min(var_7, (var_1 + var_18)))));
                var_21 = var_1;
            }
        }
    }
    var_22 = var_14;
    var_23 = (max(var_23, var_5));
    #pragma endscop
}
