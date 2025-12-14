/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_11;
    var_19 = (max(var_19, (((var_6 ? (((((max(-15, -14331))) && (var_15 || var_10)))) : var_10)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_20 = ((var_7 - ((2540644734179431971 ? ((var_10 + (arr_0 [i_1]))) : ((max(31456, var_7)))))));
                var_21 = (max(var_21, var_2));
            }
        }
    }
    #pragma endscop
}
