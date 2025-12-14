/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_20 = (max(var_20, ((min((arr_2 [i_1]), (((arr_4 [i_1] [i_0]) ? (arr_3 [i_1]) : ((var_16 ? (arr_2 [i_1]) : (arr_0 [1]))))))))));
                arr_5 [i_1] [i_1] = ((+(min((arr_0 [8]), (arr_0 [i_0 + 1])))));
            }
        }
    }
    var_21 &= (min(((var_13 ? var_13 : (~var_13))), (!-var_9)));
    var_22 = (min(var_9, (!var_12)));
    var_23 += ((!(var_14 | var_0)));
    var_24 *= (var_16 ? (((min(var_10, var_13)) & (min(var_13, var_11)))) : (((min(var_10, var_0)) >> (var_4 - 2022072961))));
    #pragma endscop
}
