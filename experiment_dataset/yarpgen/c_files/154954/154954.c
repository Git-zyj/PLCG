/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154954
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, var_8));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_16 = ((var_9 + ((var_6 ? (arr_4 [i_0 - 1]) : (arr_0 [i_0 + 1])))));
                var_17 = ((458752 ? -6015603557702560959 : 458763));
            }
        }
    }
    var_18 = ((var_0 ? var_4 : (-6015603557702560948 % 6015603557702560935)));
    var_19 = (((((var_12 * (((var_13 ? var_0 : var_14)))))) ? var_6 : (((var_8 - (23923 - var_8))))));
    var_20 = var_0;
    #pragma endscop
}
