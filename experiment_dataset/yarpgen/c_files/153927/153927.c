/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (var_13 ? (((var_6 << var_8) ? (var_16 ^ -7) : (max(9223372036854775807, var_2)))) : ((((((var_4 ? var_5 : 46793))) ? var_15 : var_5))));
    var_18 = (max((((4181788699 - var_2) ? var_14 : (max(var_13, 1023)))), ((((~-27) << var_14)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_7 [i_1] = var_5;
                arr_8 [18] = var_14;
                arr_9 [i_0] [i_0] = ((((!(-9223372036854775807 - 1)))) | (((min((max(var_13, var_2)), var_12)))));
                var_19 = ((((245 && (arr_2 [i_0] [i_1]))) ? (arr_2 [i_0] [i_1]) : (arr_2 [i_0] [24])));
                var_20 = ((!((((((3 ? 245 : (arr_3 [i_0])))) ? 118 : -1013)))));
            }
        }
    }
    #pragma endscop
}
