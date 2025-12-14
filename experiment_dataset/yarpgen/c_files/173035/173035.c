/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_7 [i_0] [10] [i_0] = ((((((var_13 ? (arr_5 [i_0] [1] [i_1]) : var_5)))) >= 0));
                var_19 = (min((0 | 232), var_16));
            }
        }
    }
    var_20 = (min((((7361122254731627382 * var_1) / var_8)), var_4));
    var_21 = (min(((~((min(var_16, var_16))))), (min((!var_0), ((var_9 ? var_3 : var_16))))));
    var_22 = ((((((var_0 ? var_2 : var_4)))) || var_15));
    #pragma endscop
}
