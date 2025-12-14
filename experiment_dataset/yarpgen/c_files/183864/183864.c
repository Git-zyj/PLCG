/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_18 = (!2);
                var_19 = ((17736024650812742754 * ((63 ? (min((arr_2 [i_0]), 15604140204149447067)) : 2012680315271087810))));
                var_20 = (-88 ? (((((arr_1 [i_1]) == (((arr_1 [i_1]) + (arr_5 [i_0]))))))) : (arr_4 [i_0] [i_0 - 2]));
                var_21 = arr_0 [i_0];
            }
        }
    }
    var_22 = var_7;
    #pragma endscop
}
