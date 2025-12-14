/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_19 = (max(var_19, (((max(((var_4 ? var_10 : var_2), -var_4)))))));
                var_20 = (((((18446744073709551615 & 33422) >> var_6)) ^ ((max(var_9, ((max(var_1, var_14))))))));
            }
        }
    }
    var_21 = ((var_13 && ((((max(var_1, var_14))) || ((min(var_9, var_2)))))));
    var_22 = ((-(min(var_11, (var_4 + var_5)))));
    var_23 = ((((var_2 + (max(var_12, var_8)))) + var_8));
    #pragma endscop
}
