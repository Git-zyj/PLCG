/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_18 = (max(var_18, ((((arr_3 [i_0 + 1] [i_0 + 2]) ? var_13 : ((((!(((-29 ? var_14 : var_3))))))))))));
                arr_5 [i_1] = ((((((((arr_2 [i_1]) ? var_0 : 1572800243))) ? var_6 : 32767)) > var_16));
            }
        }
    }
    var_19 = ((var_15 ? (((min(var_2, var_16)))) : (min((((var_8 ? var_3 : 4294967294))), (min(var_2, var_12))))));
    #pragma endscop
}
