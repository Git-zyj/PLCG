/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_16 = (((1751350483958323083 || 72) || var_7));
                    var_17 &= var_2;
                    var_18 = (((min(((var_11 - (arr_2 [8] [8]))), (arr_1 [i_1]))) <= (((-1935636731 || 246) ? (var_7 && var_2) : (min(var_5, var_9))))));
                    var_19 = (arr_3 [i_1]);
                }
            }
        }
    }
    var_20 = var_11;
    #pragma endscop
}
