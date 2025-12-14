/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133545
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, var_15));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_17 = (max((!var_9), ((var_4 & (((arr_1 [i_0]) * (arr_3 [i_1] [i_1] [i_0])))))));
                var_18 = ((((((-(arr_1 [i_1]))) ? var_4 : (arr_1 [i_1])))));
            }
        }
    }
    var_19 &= ((((max(1, 65530))) ? (-1196698251295266002 & var_1) : var_9));

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_6 [i_2] = max((arr_0 [i_2]), (arr_1 [i_2]));
        var_20 = ((~(((!(((-66 ? 31 : 65511))))))));
    }
    var_21 = (min(var_21, var_13));
    #pragma endscop
}
