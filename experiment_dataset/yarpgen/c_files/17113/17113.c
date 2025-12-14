/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_20 = 3448055903897641187;
                var_21 = (((((((arr_0 [i_0]) || var_10)))) && (-32767 - 1)));
                arr_5 [i_0] [i_1 - 1] = 16777215;
            }
        }
    }
    var_22 = (((var_18 >= var_2) >= (!1)));
    var_23 = var_5;
    var_24 = ((~((4091191153 ? (var_16 >= 225) : (3790546378 >= var_9)))));
    var_25 = ((((((var_16 ? 1 : var_18))) ? ((max(var_19, 1))) : var_15)));
    #pragma endscop
}
