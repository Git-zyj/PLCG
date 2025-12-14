/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_11 - ((((var_0 ? var_0 : var_0)) + -11475035025068370485))));
    var_15 = ((var_1 ? ((((((var_1 ? var_9 : var_7))) && (!var_6)))) : ((max((var_1 || var_13), var_10)))));
    var_16 = (min(var_3, (min((((var_4 ? var_9 : var_4))), (min(var_1, var_12))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_17 = (min((max(((min(var_2, var_12))), (max(33, 11475035025068370485)))), (arr_2 [i_0] [i_0] [i_0])));
                arr_4 [i_0] = (arr_0 [i_0]);
                arr_5 [i_1] [i_1] [i_1] = -var_10;
                arr_6 [i_0] [i_1 + 2] [i_0] = (min((max(-var_13, (arr_3 [i_0] [i_0] [i_0]))), var_3));
            }
        }
    }
    var_18 = (min(var_7, ((-(var_2 | var_3)))));
    #pragma endscop
}
