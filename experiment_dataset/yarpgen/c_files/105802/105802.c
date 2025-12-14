/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((~(((min(1, var_13))))));
    var_20 = (max(var_20, var_14));
    var_21 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_22 = (max(var_22, (((((~(arr_0 [i_1 + 1])))) | (min(51934, (arr_5 [i_1 + 1] [i_1 - 1] [i_1 + 1])))))));
                var_23 |= (-32069 + (((min((arr_5 [i_0] [i_0] [i_1]), (arr_5 [i_0] [i_0] [i_0]))) >> (var_14 - 246))));
                var_24 *= (min(((((-6801780775271313466 >= 6801780775271313457) > ((var_12 | (arr_5 [i_0] [i_1] [i_1])))))), -1));
            }
        }
    }
    #pragma endscop
}
