/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_10;
    var_17 = (max(var_17, ((((((var_15 ? (var_6 > var_5) : var_13))) + ((((var_7 ? var_7 : var_14)) ^ (((var_2 ? var_9 : var_9))))))))));
    var_18 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_19 = (((var_5 > var_8) > (var_13 > var_4)));
                arr_7 [i_0] = (var_8 == var_8);
                arr_8 [i_0] = var_15;
            }
        }
    }
    var_20 = var_2;
    #pragma endscop
}
